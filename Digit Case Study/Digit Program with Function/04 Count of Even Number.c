#include<stdio.h>
#include<conio.h>

int ECnt(int No);

int main()
{
    int No = 0, Count = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    Count = ECnt(No);

    printf("\n Count of Even Number = %d",Count);

    getch();
    return 0;
}

int ECnt(int No)
{
    int Count = 0, Dig = 0;

    while(No != 0)
    {
        Dig = No % 10;
        if(Dig %2 == 0)

            Count++;
            No /= 10;

    }
    return Count;
}
