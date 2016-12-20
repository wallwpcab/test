 #include<stdio.h>
 int main()
 {
     int array1[3],array2[3],tm;
     while(scanf("%d %d",&array1[3],&array2[3])!=EOF)
     {
         tm=(array1[1]*array1[2]+array2[1]*array2[2]);
          printf("VALOR A PAGOR: R$ %d",tm);
     }
     return 0;
 }
