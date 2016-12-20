#include<stdio.h>
#include<string.h>
int main()
{
int high=11 ,low=0,honest=1,num,cm; // declering variables
char str[18]; // this for input string
while(1)
{
scanf("%d", &num); // taking the guessing number
if(num==0)
{
return 0; // if num is 0 then exit the program
}
getchar(); // to avoid unwanted newline
gets(str); // taking string
cm=strcmp(str,"too high"); // comparing for too high
if(cm==0)
{       // if it is then enter
high=num;
if(num<low){
honest=0;
}   // assigning the number as high value
}
cm=strcmp(str, "too low"); // comparing for too low
if(cm==0){      // if it is
low=num;    // assigning the value
if(num>high){ // if num is too low but it is higher than high value
honest=0; // if it is making honest false means dishonest
}
}
if(honest==1){  // it means that if stan is honest, enter the loop
if(low+1==high || low==high){//if low=3 and high=4, for this, checking it and also checking if low==high
honest=0; // if it is then making honest false means dishonest
}
}
cm=strcmp(str, "right on"); // checking for right on string
if(cm==0){      // if it is enter then...
if(high==11 && low==0){
honest=1; // if it this then stan is honest
}
if(honest==1){ // if honest is 1 , stan is honest
printf("Stan may be honest\n");
}
else{
printf("Stan is dishonest\n");
}
high=11, low=0, honest=1; // this values are default value for loop
}
}
return 0;
}

