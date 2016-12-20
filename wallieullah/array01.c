//write a program to calculate the multipllication of two matrixes //
#include<stdio.h>
int main()
{
int i,j,k,rc;
printf("%d",&rc);
scanf("%d",&rc);
int a[rc][rc],b[rc][rc],c[rc][rc];
printf("Enter the values of matrix A:\n");
for(i=1;i<=rc;i++)
{
for(j=1;j<=rc;j++)
{
printf("Row %d,column %d value:",i,j);
scanf("%d",&a[i][j]);
}
}
    for(i=1;i<=rc;i++)
    {
        for(j=1;j<=rc;j++)
        {
            printf("%2d",a[i][j]);
        }
        printf("\n");
    }
     printf("\n");
     printf("Enter the values of Matrix B:\n");
}
#include<iostream>
int main()
 {
 	std::cout<<"hello world!";
 	std::cout<<std::endl;
 	return 0;
 }
