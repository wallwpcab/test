//write a program to read strings from keyboard and determine whether it is palindrome or not //
/*#include<stdio.h>
#include<string.h>
int main()
{
    char text[20],test[20];
    gets(text);
    strcpy(test,text);
    strrev(test);
    printf("Revers of the text:");
    puts(test);
    if(strcmp(text,test)==0)
    {
        printf("\n String is Palindrome");
    }
    else
    {
        printf("\n String is not Palindrome");
    }
    return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
char text[20],test[20];
printf("Enter a text to check palindrome:");
gets(text);
strcpy(test,text);
strrev(test);
printf("Reverse of the text:");
puts(test);
if(strcmp(text,test)==0)
printf("\n String is Palindrome\n");
else
printf("\n String is not Palindrome\n");
return 0;
}*/
/*
 *  C program to accept a string and find the number of times the word
 * 'the' appears in that string
 */
#include <stdio.h>
#include<string.h>
void main()
{
    int count=0,i,times=0,t,h,e,space;
    char string[100];
    puts("Enter a string:");
    gets(string);
    /*   Traverse the string to count the number of characters */
    while(string[count]!='\0')
    {
    count++;
    }
    /*Finding the frequency of the word 'the' */
    for(i=0;i<=count-3;i++)
    {
        t=(string[i]=='t'||string[i]=='T');
        h=(string[i+1]=='h'||string[i+1]=='H');
        e=(string[i + 2] == 'e'|| string[i + 2] == 'E');
        space=(string[i+3]==' '||string[i+3]=='\0');
        if((t&&h&&e&&space)==1)
        times++;
    }
    printf("Frequency of the word 'the' is %d\n", times);
}
