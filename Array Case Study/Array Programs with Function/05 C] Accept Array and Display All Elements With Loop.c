#include<stdio.h>
#include<conio.h>

void Accept_Element(int[],int)
void Display_Element(int[],int)

int main()
{
    int Num[7] = {};

    Display_Elements(Num, 7)

    printf("\n Back To Main()\n");

    Accept_Elements(Num,7);

    Display_Elements(Num,7);

    getch();
    return 0;
}

void Accept_Elements(int Arr[], int Size)
{
    int i = 0;

    for(i = 0; i < Size; i++)
    {
        printf("\n Enter Value for Element Number %d = ",i);
        scanf("%d",&Arr[i];)
    }
    return;
}

void Display_Elements(int Fun[], int Size)
{
    int i =0;

    for(i = 0; i < Size; i++)
    {
        printf("\n Value of Element %d = %d",i+1, Fun[i]);
    }
    return;
}
