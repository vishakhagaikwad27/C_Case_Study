#include<stdio.h>
#include<conio.h>

int Num[7] = {};

void Accept_Element(int);
void Display_Element(int);

int main()
{
    Accept_Element(0);
    Accept_Element(1);
    Accept_Element(2);
    Accept_Element(3);
    Accept_Element(4);
    Accept_Element(5);
    Accept_Element(6);

    Display_Element(0);
    Display_Element(1);
    Display_Element(2);
    Display_Element(3);
    Display_Element(4);
    Display_Element(5);
    Display_Element(6);


    getch();
    return 0;
}

void Accept_Element(int Ele_Num)
{
    printf("\n Enter Value for Element Number %d = ",Ele_Num);
    scanf("%d",&Num[Ele_Num]);
    return;
}

void Display_Element(int Ele_Num)
{
    printf("\n Value of Element %d = %d.",Ele_Num+1,Num[Ele_Num]);
    return;
}
