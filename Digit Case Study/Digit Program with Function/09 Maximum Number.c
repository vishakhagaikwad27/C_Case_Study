#include<stdio.h>
#include<conio.h>

int MaxCnt(int No);

int main()
{
    int No = 0, Count = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    Count = MaxCnt(No);

    printf("\n Maximum of Digit Number = %d",Count);

    getch();
    return 0;
}

int MaxCnt(int No)
{
    int Dig = 0, Max = 0;

    while(No != 0)
    {
        Dig = No % 10;

        if( Dig > Max)
        {
            Max = Dig;
        }
        No /= 10;
    }
    return Max;
}
