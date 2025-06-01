#include<stdio.h>
#include<conio.h>

int Calc(int No);

int main()
{
    int No = 0, Count = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    Count = Calc(No);

    printf("\n Difference of (Even - Odd) = %d",Count);

    getch();
    return 0;
}

int Calc(int No)
{
    int Dig = 0, ESum = 0, OSum = 0;

    while(No != 0)
    {
        Dig = No % 10;

        if(Dig %2 == 0)

            ESum += Dig;
        else

            OSum += Dig;
            No /= 10;

    }
    return ESum - OSum;
}
