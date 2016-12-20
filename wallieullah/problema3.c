#include<stdio.h>
#include<string.h>
int main()
{
char name[100],fn[50],mn[50],ln[50];
printf("Enter first name:");
gets(fn);
printf("Enter middle name:");
gets(mn);
printf("Enter last name:");
gets(ln);
strcpy(name,fn);
strcat(name,mn);
strcat(name,"");
strcat(name,ln);
printf("\n Your full name is:");
puts(name);
return 0;
}
