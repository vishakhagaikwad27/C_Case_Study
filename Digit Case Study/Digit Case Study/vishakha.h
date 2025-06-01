#include<stdio.h>
#include<conio.h>

int DCnt(int num);
int Scnt(int num);
int Mcnt(int num);
int Ecnt(int num);
int Ocnt(int num);
int Zcnt(int num);
int Palindrome(int num);
int Calc(int num);
int Maxcnt(int num);
int Mincnt(int num);

int Dcnt(int num)
{
    int Count = 0;

    while(num != 0)
    {
        Count++;
        num /= 10;
    }
    return Count;
}

int Scnt(int num)
{
    int Sum = 0, rem;

    while(num != 0)
    {
        rem = num % 10;
        num /= 10;
        Sum += rem;
    }
    return Sum;
}

int Mcnt(int num)
{
    int Mult = 1, rem;

    while(num != 0)
    {
        rem = num % 10;
        num /= 10;
        Mult *= rem;
    }
    return Mult;
}

int Ecnt(int num)
{
    int Count = 0, rem = 0;

    while(num != 0)
    {
        rem = num % 10;

        if(rem %2 == 0)
        Count++;
        num /= 10;
    }
    return Count;
}

int Ocnt(int num)
{
    int Count = 0, rem = 0;

    while(num != 0)
    {
        rem = num % 10;

        if(rem %2 == 1)
        Count++;
        num /= 10;
    }
    return Count;
}

int Zcnt(int num)
{
    int Count = 0, rem = 0;

    while(num != 0)
    {
        rem = num % 10;

        if(rem == 0)
        Count++;
        num /= 10;
    }
    return Count;
}

int Palindrome(int num)
{
    int Count = 0, rem = 0;

    while(num != 0)
    {
        Count = num % 10;
        rem = (rem * 10) + Count;
        num /= 10;
    }
    return rem;
}

int Calc(int num)
{
    int rem = 0, Esum = 0, Osum = 0;

    while(num != 0)
    {
        rem = num % 10;

        if(rem %2 == 0)
            Esum += rem;
        else
            Osum += rem;
        num /= 10;
    }
    return Esum - Osum;
}

int Maxcnt(int num)
{
    int rem = 0, Max = 0;

    while(num != 0)
    {
        rem = num % 10;

        if(rem > Max)
        {
            Max = rem;
        }
        num /= 10;
    }
    return Max;
}

int Mincnt(int num)
{
    int rem = 0, Min = 9;

    while(num != 0)
    {
        rem = num % 10;

        if(rem < Min)
        {
            Min = rem;
        }
        num /= 10;
    }
    return Min;
}

int revNum(int num)
{
    int rev = 0;
    while(num != 0)
    {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    return 0;
}
