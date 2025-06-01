#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0, dSum=0, Dig=0, Temp=0;
    printf("\n Enter the No=");
    scanf("%d",&No);            ///48532
    Temp = No;
    while(Temp != 0)
    {
        Dig=Temp % 10;
        dSum=dSum + Dig;
        Temp=Temp /10;
    }
    printf("\n Sum of Digits %d = %d", No,dSum);
    getch();
    return 0;
}























