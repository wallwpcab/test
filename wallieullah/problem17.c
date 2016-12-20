#include<stdio.h>
struct student
{
int id;
float marks[3],avg;
};
main()
{
int n,i,j;
printf("No. of students :");
scanf("%d",&n);
struct student s[n];
for(i=0;i<n;i++)
{
s[i].avg = 0;
printf("Enter id of Student %d",i+1);
scanf("%d",&s[i].id);
for(j=0;j<3;j++)
{
printf("Enter marks of subject %d:",j+1);
scanf("%f",&s[i].marks[j]);
s[i].avg =s[i].marks[j];
}
s[i].avg =s[i].avg/(float)3;
}
printf("\n results:");
for(i=0;i<n;i++)
{
for(i=1;i<=rc;i++)
{
printf("Row %d,column %d value:",i,j);
scanf("%d",b[i][j]);
}
}
for(i=1;i<=r;i++)
{
for(j=1;j<=rc;j++)
{
printf("%2d".b[i][j]);
}
printf("\n");
}
printf("\n");
printf("multiplication Matrix of Matrix A and B:\n");
for(i=1;i<=rc;i++)
{
for(j=1;j<=rc;j++)
{
c[i][j]=0;
for(k=1;k<=rc;k++)
{
c[i][j]=c[i][j] + (a[i][k]*b[k][j]);
}
printf("%2d",c[i][j]);
}
printf("\n");
}
return 0;
}
