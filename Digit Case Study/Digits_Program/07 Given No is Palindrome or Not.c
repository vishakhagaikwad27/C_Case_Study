#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0, Dig=0, Temp=0, Rev=0;
    printf("\n Enter a Number=");
    scanf("%d",&No);
    Temp=No;
    while(Temp != 0)
    {
      Dig=Temp % 10;
      Rev=(Rev*10) + Dig;
      Temp=Temp / 10;
    }
    printf("\n Reverse of %d is= %d",No,Rev);
    if(Rev==No)
    {
         printf("\n\n It is a Palindrome");
    }
    else
    {
         printf("\n It is Not Palindrome");
    }
    printf("\n\n=================THANKS==================");
    getch();
    return 0;
}
