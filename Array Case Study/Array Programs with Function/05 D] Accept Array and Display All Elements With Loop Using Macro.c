#include<stdio.h>
#include<conio.h>
#define Size 7

void Accept_Elements(int[]);
void Display_Elements(int[]);

int main()
{
    int Num[Size] = {};

    Display_Elements(Num);

    printf("\n Back To Main()\n");

    Accept_Elements(Num);

    Display_Elements(Num);

    getch();
    return 0;
}

void Accept_Elements(int Arr[])
{
    int i = 0;

    for(i = 0; i < Size; i++)
    {
        printf("\n Enter Value for Element Number %d = ",i);
        scanf("%d",&Arr[i]);
    }
    return;
}

void Display_Elements(int Fun[])
{
    int i = 0;

    for(i = 0; i < Size; i++)
    {
        printf("\n Value of Element %d = %d",i + 1,Fun[i]);
    }
    return;
}
