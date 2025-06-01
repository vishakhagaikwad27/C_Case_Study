#include<stdio.h>
#include<conio.h>

int Palindrome(int No);

int main()
{
    int No = 0, Count = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    Count = Palindrome(No);

    if(Count == No)
    {
        printf("\n Given Number %d is Palindrome",No);
    }
    else
    {
        printf("\n Given Number %d is Not Palindrome",No);
    }

    getch();
    return 0;
}

int Palindrome(int No)
{
    int Count = 0, Dig = 0;

    while(No != 0)
    {
        Count = No % 10;
        Dig = (Dig * 10) + Count;
        No /= 10;
    }
    return Dig;
}
