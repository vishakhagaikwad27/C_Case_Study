#include"vishakha.h"
#include<stdlib.h>

int main()
{
   int num = 0,Choice = 0;
   char ch ='\0';

       printf("\n Enter a Number:");
       scanf("%d",&num);
       system("cls");
   while(1)
   {
       printf("\n\n Welcome to Digit Programming Case Study..!\n");

        printf("\n Select Choice : ");
        printf("\n\t\t 1.Count of Digit");
        printf("\n\t\t 2.Sum of Digit");
        printf("\n\t\t 3.multiplication of Digit");
        printf("\n\t\t 4.Count of Even Number");
        printf("\n\t\t 5.Count of Odd Number");
        printf("\n\t\t 6.Count of Zero Number");
        printf("\n\t\t 7.Count of Palindrome Number");
        printf("\n\t\t 8.Count of Calculate Differance Number(Even - Odd)");
        printf("\n\t\t 9.Count of Maximum Number");
        printf("\n\t\t 10.Count of Minimum Number");
        printf("\n\t\t 11.Count of Reverse Number");
        printf("\n\t\t 12.Exit..!");

        printf("\n\n Enter your Choice : ");
        scanf("%d",&Choice);

        switch(Choice)
        {
        case 1:
             printf("\n Count of Digits is = %d",Dcnt(num));
             getch();
             fflush(stdin);
             system("cls");

             break;

        case 2:
             printf("\n Sum of Digits is = %d",Scnt(num));
             getch();
             fflush(stdin);
             system("cls");

             break;

        case 3:
             printf("\n Multiplication  of Digits is = %d",Mcnt(num));
             getch();
             fflush(stdin);
             system("cls");

             break;

        case 4:
             printf("\n Even Count of Digits is = %d",Ecnt(num));
             getch();
             fflush(stdin);
             system("cls");

             break;

        case 5:
             printf("\n Odd Count of Digits is = %d",Ocnt(num));
             getch();
             fflush(stdin);
             system("cls");

             break;

        case 6:
             printf("\n Zero Count of Digits is = %d",Zcnt(num));
             getch();
             fflush(stdin);
             system("cls");

             break;

         case 7:
             if (Palindrome(num))
             {
                 printf("\nThe number is a Palindrome.");
             }
            else
            {
                 printf("\nThe number is NOT a Palindrome.");
            }
             getch();
             fflush(stdin);
             system("cls");

             break;

          case 8:
             printf("\n Calculation of Even-Odd of Digits is = %d",Calc(num));
             getch();
             fflush(stdin);
             system("cls");

             break;

          case 9:
             printf("\n Maximum Count of Digits is = %d",Maxcnt(num));
             getch();
             fflush(stdin);
             system("cls");

             break;

           case 10:
             printf("\n Minimum Count of Digits is = %d",Mincnt(num));
             getch();
             fflush(stdin);
             system("cls");

             break;

           case 11:
            printf("\n Count of Reverse Number is = %d",revNum(num));
            getch();
            fflush(stdin);
            system("cls");

            break;

           case 12:
            fflush(stdin);
            printf("\n Are you Sure Do want to Exit this Application..?(Yes/No) :");
            ch = getchar();

            if(ch == 'y' || ch == 'Y')
               goto Out;

             fflush(stdin);
             system("cls");

             break;

           default:

            printf("\n Invalid Choice..!");

            getch();
            fflush(stdin);
            system("cls");

            break;
        }
   }
   Out:
       printf("\n Thank You For Using Our Application..!\n");

       getch();
       return;
}
