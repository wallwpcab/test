#include<stdio.h>
int main()
{
    float a,b,MEDIA;
    while(scanf("%f %f",&a,&b)!=EOF)
    {
        MEDIA=(a+b)/2;
        printf("MEDIA = %f",MEDIA);
    }
    return 0;
}
