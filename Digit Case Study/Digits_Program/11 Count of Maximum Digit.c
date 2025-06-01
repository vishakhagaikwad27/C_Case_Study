#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, MaxDig = 0, Dig = 0, Temp = 0;

    printf("\n Enter an Integer Number = ");
    scanf("%d",&No);

    Temp = No;

    while(Temp > 0)
    {
        Dig = Temp % 10;

        if(Dig > MaxDig)
        {
            MaxDig = Dig;
        }
        Temp = Temp / 10;
    }
    printf("\n The Maximum Dig in %d is = %d\n",No,MaxDig);
    return 0;
}
