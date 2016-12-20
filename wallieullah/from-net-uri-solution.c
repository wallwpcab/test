#include <stdio.h>
int main()
{
int a, b, x, p=0, i=0, g=0, d=0; // a and b are the number of goals scored by inter and gremio respectively
while(scanf("%d%d",&a,&b)==2)
{
printf("Novo grenal(1-sim 2-nao)\n");
scanf("%d", &x);
if(x==1)
{
if(a>b)
i++;
else if(b>a)
g++;
else
d++;
}
else
break;
p++;
}
printf("%d grenais\n", p);
printf("Inter:%d\n", i);
printf("Gremio:%d\n", g);
printf("Empates:%d\n", d);
if(i>g)
printf("Inter venceu mais\n");
else
printf("Gremio venceu mais\n");
return 0;
}
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int t,n,ch[20004],sum,i,j;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&ch[i]);
        }
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(ch[i]<ch[j]){
                    int temp=ch[i];
                    ch[i]=ch[j];
                    ch[j]=temp;
                }
            }
        }

        sum=0;
        for(i=0;(i+2)<n;i=i+3){
            sum=sum+ch[i+2];
        }
        printf("%d\n",sum);
    }
}
#include<stdio.h>
int main()
{
    int inter = 0, gremio = 0, empates = 0, grenais = 0;
    int n, x, y, check;
    while(scanf("%d %d", &x, &y)){
        grenais++;
        printf("Novo grenal (1-sim 2-nao)\n");
        if(x > y){
            inter++;
        }
        else if(x < y){
            gremio++;
        }
        else if(x == y){
            empates++;
        }
        scanf("%d", &check);
        if(check == 1) continue;
        else if(check == 2) break;
    }
    printf("%d grenais\n", grenais);
    printf("Inter:%d\nGremio:%d\nEmpates:%d\n", inter, gremio, empates);
    printf("Inter venceu mais\n");
    return 0;
}
