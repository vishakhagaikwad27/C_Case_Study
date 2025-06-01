#include<stdio.h>
#include<conio.h>

int Scnt(int No);

int main()
{
    int No = 0, Sum = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    Sum = Scnt(No);

    printf("Sum of Digits in %d is = %d",No,Sum);
    getch();
    return 0;
}

int Scnt(int No)
{
    int Sum = 0, Dig = 0;

     while(No != 0)
    {
        Dig = No % 10;
        Sum = Sum + Dig;
        No = No / 10;
    }
    return Sum;
}
