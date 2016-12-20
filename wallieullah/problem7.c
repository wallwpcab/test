//write a program to convert upper case to lower case //
#include<stdio.h>
int main()
{
    char ch;
    printf("\n Enter letter:");
    ch=getchar();
    if(islower(ch))
        printf("\n upper case format:%c\n",toupper(ch));
    else
        printf("\n lower case format:%c\n",tolower(ch));
    return 0;
}
