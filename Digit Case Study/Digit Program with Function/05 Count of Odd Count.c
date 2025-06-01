#include<stdio.h>
#include<conio.h>

int OCnt(int No);

int main()
{
    int No = 0, Count = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    Count = OCnt (No);

    printf("\n Count of Odd Number = %d",Count);

    getch();
    return 0;
}

int OCnt(int No)
{
    int Count = 0, Dig = 0;

    while(No != 0)
    {
        Dig = No % 10;

        if(Dig %2 == 1)

            Count++;
            No /= 10;
    }
    return Count;
}
