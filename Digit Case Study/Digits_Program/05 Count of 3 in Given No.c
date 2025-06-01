#include<stdio.h>
#include<conio.h>
int main()
{
        int No = 0, Cnt_Of_3 = 0, Dig = 0, Temp = 0;
        printf("\n Enter a Number=");
        scanf("%d",&No);
        Temp = No;
        while( Temp != 0 )
        {
            Dig = Temp % 10;
            if(Dig == 3)
            {
                Cnt_Of_3++;
            }
            Temp = Temp / 10;
        }
        printf("\n 3 Count in Given Number %d = %d.", No, Cnt_Of_3);
        getch();
        return 0;
}

