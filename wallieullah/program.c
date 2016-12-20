#include<stdio.h>
int List[128];
int listSize;

void primeFactorize( int n ) {
listSize = 0;
for(int i = 0; int prime[i] <= n; i++ ) {
if( n % prime[i] == 0 )
    {
    while( n % prime[i] == 0 ) {
    n /= prime[i];
    List[listSize] = prime[i];
    listSize++;
            }
        }
    }
}
int main() {
primeFactorize( 40 );
for( int i = 0; i < listSize; i++ )
printf("%d ", List[i]);
return 0;
}
