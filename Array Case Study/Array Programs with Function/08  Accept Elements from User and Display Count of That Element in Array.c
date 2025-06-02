#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 5

void Accept_Elements(int[]);
void Display_Elements(int []);
int Count_Of_Element(int[],int);

int main()
{
    int Num[Size] = {}, Src_Ele = 0, Cnt = 0;

    Accept_Elements(Num);
    system("cls");
    Display_Elements(Num);

    getch();

    printf("\n Enter Element Who's Count You Want from Array = ");
    scanf("%d",&Src_Ele);

    Cnt = Count_Of_Element(Num, Src_Ele);

    printf("\n OUTPUT : Count of Number %d in Given Array is = %d",Src_Ele,Cnt);

    getch();
    return 0;
}

int Count_Of_Element(int Arr[], int Ele)
{
    int i = 0, Count = 0;

    for(i = 0; i < Size; i++)
    {
        if(Ele == Arr[i])
        {
            Count++;
        }
    }
    return Count;
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

    printf("\n ===================***********=====================\n");
    printf("\n Elements in Given Array are => \n");

    for(i = 0; i < Size; i++)
    {
        printf("\n Value of Element %d = %d",i + 1, Fun[i]);
    }

    printf("\n ===================***********=====================\n");
    return;
}
