/*#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char sentence[100];
int i;
printf("Enter your name and surnames: ");
gets(sentence);
for(i = 0; i<strlen(sentence); i++)
{
if(sentence[i] == ' ')
{
printf("%c",toupper(sentence[i]+1));
//I want to advance to next item respect to space and capitalize it
//But it doesn't work
}
else
{
printf("%c", sentence[i]);
}
}
return 0;
}*/
#include<stdio.h>
#include<string.h>
int main(){
int i,n,count=0;
char string[1001];
scanf("%d",&n);
while(n--)
{
scanf("%c",&string[1001]);
//printf("%s",string);
}
printf("%s",string);

//string[0]=toupper(string[0]);
//rintf("%s",string);
return 0;
}


