#include<stdio.h>
#include<conio.h>
int main()
{
        int No = 0, zCnt = 0, ECnt = 0, OCnt = 0, Dig = 0, Temp = 0;
        printf("\n Enter a Number=");
        scanf("%d",&No);
        printf("\n ================++++++++++++++++++=================");
        Temp = No;
        while( Temp != 0 )
        {
            Dig = Temp % 10;
            if(Dig == 0)
            {
                zCnt++;
            }
            else if( Dig % 2 == 0  )
            {
                ECnt++;
            }
            else
            {
                OCnt++;
            }
            Temp = Temp / 10;
        }
        printf("\n\n Even Digit Count in Given Number %d = %d",No,ECnt);
        printf("\n\n Odd Digit Count in Given Number %d = %d",No,OCnt);
        printf("\n\n Zero Digit Count in Given Number %d = %d",No,zCnt);
        getch();
        return 0;
}
