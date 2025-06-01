#include<stdio.h>
#include<conio.h>

int Dcnt(int No);

int main()
{
    int No = 0, Count = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    Count = Dcnt(No);

    printf("\n Count of Digit in Given Number %d = %d",No,Count);

    getch();
    return 0;
}

int Dcnt(int No)
{
    int Count = 0;

    while(No != 0)
    {
        Count++;
        No /= 10;
    }
    return Count;
}
