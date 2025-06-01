#include<stdio.h>
#include<conio.h>

int MCnt(int No);

int main()
{
    int No = 0, Mult = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    Mult = MCnt(No);

    printf("\n Multiplication of Digit Number = %d",Mult);

    getch();
    return 0;
}

int MCnt(int No)
{
    int Mult = 1, Dig;

    while(No != 0)
    {
        Dig = No % 10;
        No /= 10;
        Mult *= Dig;
    }
    return Mult;
}
