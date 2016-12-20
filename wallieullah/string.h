#include<stdio.h>
main() 
{
int i,n=10000;
char s1[100],s2[100],s3[100];
for(i=0;i<n;++i)
{ 
scanf("%s%s%s",s1,s2,s3); 
if(strcmp(s2,s3)==0) 
printf("%s\n",s1);
else
printf("eh\n"); 
} 
} 


