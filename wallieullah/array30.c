/*#include<stdio.h>
int main()
{
   int array[5];
   scanf("%d",&array[5]);
   printf("%d",array[5]);
   return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

                                    //GLOBAL PROTOTYPE SECTION
int getout();
int txttobin();
int txttooct();

                                    //GLOBAL VARIABLE SECTION
int bin[8]={128,64,32,16,8,4,2,1},oct[3]={64,8,1};
char sentence[1000];
int k,len,i,tmp;

int main()
{
    system("mode 100,60");
    system("color 0C");

    char choice;
    puts("+--------------------------------------------------------------------------------------------------+"
         "|+------------------------------------------------------------------------------------------------+|"
         "||                                                                                                ||"
         "||    000000  00000  00   00  000000   00000  00   00  000000   0000   00000   00000  00000       ||"
         "||      00    00      00 00     00     00     000  00  00   0  00  00  00  00  00     00  00      ||"
         "||      00    00000    000      00     00000  00 0 00  00      00  00  00  00  00000  00000       ||"
         "||      00    00      00 00     00     00     00  000  00   0  00  00  00  00  00     00  00      ||"
         "||      00    00000  00   00    00     00000  00   00  000000   0000   00000   00000  00   00     ||"
         "||                                                                                                ||"
         "|+------------------------------------------------------------------------------------------------+|"
         "|+------------------------------------------------------------------------------------------------+|"
         "||                 A.Text To Binary  (ABC -> 01000001 01000010 01000011 )                         ||"
         "||                 B.Text To Octal   (ABC -> 141 142 143 )                                        ||"
         "||                 Z.Exit                                                                         ||"
         "|+------------------------------------------------------------------------------------------------+|");
         printf("                                        Enter Your Choice: ");
        scanf("%c",&choice);

        switch(choice){

            case 'A' : txttobin();
            break;

            case 'B' : txttooct();
            break;

            case 'Z' :getout();
            break;

        default:printf("Wrong Input! Please Try Again!!!!\n");
        }

return 0;

}
int getout()
{
    puts("+--------------------------------------------------------------------------------------------------+"
         "|+------------------------------------------------------------------------------------------------+|"
         "||          000000  00  00   0000   00   00  00  00       00    00  0000   00  00     00          ||"
         "||            00    00  00  00  00  000  00  00 00         00  00  00  00  00  00     00          ||"
         "||            00    000000  000000  00 0 00  0000           0000   00  00  00  00     00          ||"
         "||            00    00  00  00  00  00  000  00 00           00    00  00  00  00     00          ||"
         "||            00    00  00  00  00  00   00  00  00          00     0000    0000                  ||"
         "||                                                                                    00          ||"
         "|+------------------------------------------------------------------------------------------------+|"
         "|+------------------------------------------------------------------------------------------------+|");

return 0;
}


int txttobin(){

    printf("Enter String: ");
    gets(sentence);

    len=strlen(sentence);
    printf("Total Characters in this text : %d",len);

    printf("\nBinary Value: ");

    for(k = 0;k < len;k ++){
        int output[8];
        tmp=(int)sentence[k];
        for(i=0;i<8;i++){
            if(tmp/bin[i]==1){
                output[i++]=1;
                tmp-=bin[i];
            }
            else output[i++]=0;
        }

    for(i=0;i<8;i++){
        printf("%d",output[i]);
    }
    printf(" ");
}
return 0;
}


int txttooct(){

    printf("Enter String: ");
    gets(sentence);

    len=strlen(sentence);
    printf("Total Characters in this text : %d",len);

    printf("\nOctal Value: ");

    for(k = 0;k < len;k ++){
        int output[3];
        tmp=(int)sentence[k];

        for(i=0;i<3;i++){
            if(tmp/oct[i]>=1){
                output[i]=tmp/oct[i];
                tmp=tmp%oct[i];
            }
        else{output[i]=0;}
        }

    for(i=0;i<3;i++){
        printf("%d",output[i]);
    }
    printf(" ");

}
return 0;
}
