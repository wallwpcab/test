
const int inf = 2000000000;

int n;
int Sequence[32];
int L[32];
int I[32];
void takeInput()
{
int i;
scanf("%d", &n);
for(i = 0; i < n; i++ )
scanf("%d", &Sequence[i]);
}
int LisNlogK()
{
int i;
I[0] = -inf;
for( i = 1; i <= n; i++ )
I[i] = inf;
int LisLength = 0;
for( i = 0; i < n; i++ ) {
int low, high, mid;
low = 0;
high = LisLength;
while( low <= high )
{
mid = ( low + high ) / 2;
if( I[mid] < Sequence[i] )
low = mid + 1;
else
high = mid - 1;
}
I[low] = Sequence[i];
if( LisLength < low )
LisLength = low;
}
return LisLength;
}
int main() {
takeInput();
int result = LisNlogK();
printf("The LIS length is %d\n", result);
return 0;
}

