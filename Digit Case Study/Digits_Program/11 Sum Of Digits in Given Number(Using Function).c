#include<stdio.h>
#include<conio.h>

int Digit_Sum(int);

int main()
{
    int No = 0, dSum = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    dSum = Digit_Sum(No);

    printf("\n Sum Of Digits %d = %d.", No, dSum);

    getch();
    return 0;
}

int Digit_Sum(int Num)
{
    int Dig = 0, Sum = 0;

    while(Num != 0)
    {
        Dig = Num % 10;
        Sum = Sum + Dig;
        Num = Num / 10;
    }

    return Sum;
}
