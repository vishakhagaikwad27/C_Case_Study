#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 5

void Accept_Element(int[]);
void Display_Elements(int[]);
int Find_Min_Element(int[]);
int Find_Max_Element(int[]);

int main()
{
    int Num[Size] = {};

    Accept_Elements(Num);
    system("cls");
    Display_Elements(Num);

    getch();

    /// Min = Find_Min_Element(Num);
    ///Max = Find_Max_Element(Num);

    printf("\n OUTPUT : Minimum Element in Given Array is = %d",Find_Min_Element(Num));
    printf("\n OUTPUT : Maximum Element in Given Array is = %d",Find_Max_Element(Num));

    getch();
    return 0;
}

int Find_Min_Element(int Arr[])
{
    int i = 0, Low = 0;

    for(i = 0; i < Size; i++)
    {
        if(i == 0)
        {
            Low = Arr[i];
            continue;
        }
        if(Arr[i] < Low)
        {
            Low = Arr[i];
        }
    }
    return Low;
}

int Find_Max_Element(int Arr[])
{
    int i = 0, Top = 0;

    for(i = 0; i < Size; i++)
    {
        if(i == 0)
        {
            Top = Arr[i];
            continue;
        }
        if(Arr[i] > Top)
        {
            Top = Arr[i];
        }
    }
    return Top;
}

void Accept_Elements(int Arr[])
{
    int i = 0;

    printf("\n Enter Elements To Be Placed in Array => \n");

    for(i = 0; i < Size; i++)
    {
        printf("\n Enter Value for Element Number %d = ",i + 101);
        scanf("%d",&Arr[i]);
    }
    return;
}

void Display_Elements(int Fun[])
{
    int i = 0;

    printf("\n ===================************==================\n\n");
    printf("\n Elements in Given Array are => \n");

    for(i = 0; i < Size; i++)
    {
        printf("\n Value of Element %d = %d",i + 1,Fun[i]);
    }

    printf("\n ===================************==================\n\n");

    return;
}
