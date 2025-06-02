#include<stdio.h>
#include<conio.h>

void Display_Arry(int Arr[], int Size);

int main()
{
    int Num[7];

    Display_Array(Num, 7);

    getch();
    return 0;
}

void Display_Array(int Arr[], int Size)
{
    int i = 0;

    ///Displaying Array Elements

    for(i = 0; i < Size; i++)
    {
        printf("\n Value = %d",Arr[i]);
    }
    return;
}
