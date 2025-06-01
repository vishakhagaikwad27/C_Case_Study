#include<stdio.h>
#include<conio.h>

int MinCnt(int No);

int main()
{
    int No = 0, Count = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    Count = MinCnt(No);

    printf("\n Minimum of Digit Number = %d",Count);

    getch();
    return 0;
}

int MinCnt(int No)
{
    int Dig = 0, Min = 9;

    while(No != 0)
    {
        Dig = No % 10;

        if(Dig < Min)
        {
            Min = Dig;
        }
        No /= 10;
    }
    return Min;
}
