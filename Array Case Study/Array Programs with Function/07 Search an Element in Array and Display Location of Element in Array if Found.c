//  Accept Array & Display All Elements with Loop ,  Use Macro  To set Size of Array
//  Search an Element in Array and Display Location  of Element in Array if Found
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define  Size  5

void  Accept_Elements(int[]);
void  Display_Elements(int[]);
int  Search_Element(int[], int);

int main()
{
            int  Num[Size] = {} , Src_Ele = 0, Loc = -1;

            Accept_Elements(Num);
            system("cls");
            Display_Elements(Num);

            getch();

            printf("\n  Enter Element To Be Searched in Array = ");
            scanf("%d", &Src_Ele);

            Loc = Search_Element(Num, Src_Ele);

            if(-1 ==  Loc)
            {
                        printf("\n OUTPUT : Number %d Not Present in Given Array!!!", Src_Ele);
            }
            else
            {
                        printf("\n OUTPUT : Number %d Found at Location %d in Given Array.", Src_Ele, Loc + 1);
            }

            getch();
            return 0;
}

int  Search_Element(int  Arr[], int  Ele)
{
            int  i = 0;

            for(i = 0; i < Size; i++)
            {
                        if(Ele == Arr[i])
                        {
                                    break;
                        }
            }

            if(Size == i)
            {
                        i = -1;
            }

            return  i;
}

void  Accept_Elements(int  Arr[])
{
            int  i = 0;

            printf("\n Enter Elements To be placed in Array => \n");

            for(i = 0; i < Size; i++)
            {
                    printf("\n Enter Value for Element Number %d = ", i+101);
                    scanf("%d", &Arr[i]);
            }

            return;
}

void  Display_Elements(int  Fun[])
{
            int  i = 0;

            printf("\n ===============****===============\n");
            printf("\n Elements in Given Array are => \n");

            for(i = 0; i < Size; i++)
            {
                        printf("\n Value of Element %d = %d .",i +1, Fun[i]);
            }

            printf("\n ===============****===============\n");

            return;
}
