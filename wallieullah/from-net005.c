#include<stdio.h>
#include<string.h>
int main()
{
int t,i,j,k,p,q,z,x,rem,y,sum,f,a,v,m;
char s[1000],st[1000],sw[1000];
scanf("%d",&t);
for(i=1;i<=t;i++){
y=0,z=0,p=0,rem=0,sum=0,f=0;
scanf("%s%s",s,st);
strrev(s);
strrev(st);
int l=strlen(s),le=strlen(st);
for(j=l-1,k=le-1;;j--,k--)
{
y=s[j]-'0';
z=st[k]-'0';
if(j<0)
y=0;
if(k<0)
z=0;
if(j<0&&k<0)
break;
sum=y+z+p;
rem=sum%10;
q=sum/10;
rem=rem+'0';
sw[f]=rem;
p=q;
f++;
}
for(;p>0;)
{
sw[f]=p%10+'0';
p=p/10;
f++;
}
sw[f]='\0';
m=strlen(sw);
v=0;
for(a=0;a<=m-1;++a)
{
if(v==0)
{
if(sw[a]=='0')
v=0;
else if(sw[a]!='0')
v=1;
}
if(v==1)
{
printf("%c",sw[a]);
v=1;
}
}
printf("\n");
}
return 0;
}
