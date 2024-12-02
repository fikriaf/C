#include <stdio.h>
#include <conio.h>
#include <windows.h>

COORD coord={0,0};
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int f=-1, r=-1, i, j, data[10];

int main()
{
    size_t size = sizeof(data)/sizeof(data[0]);
    if(data[size-1]==NULL)
    {
        printf("ANTRIAN KOSONG");
        getchar();
        printf("\n\n");
    }else
    {
        printf("ANTRIAN PENUH");
        printf("\n\n");
        getchar();
        return 0;
    }
     printf("i");
     for (int m=0; m<=size-1; m++)
     {
         gotoxy(9+(m*3),3);printf("%d", m);
     }
     gotoxy(0,4);printf("data");
     gotoxy(0,5);printf("F&R");
     for(i=0;i<=size-1;i++)
     {
         gotoxy(3*i+9,4);scanf("%d", &data[i]);
         if(i==0)
         {
            gotoxy(3*0+9,5);printf("                       ");
            gotoxy(3*0+9,5);printf("FR");
         }else
         {
             gotoxy(3*0+9,5);printf("                          ");
             gotoxy(3*0+9,5);printf("F                         ");
             gotoxy(3*i+9,5);printf("R");
         }

     }
     system("CLS");
     printf("ANTRIAN PENUH");
     printf("\n\n\n");
     printf("i");
     for (int n=0; n<=size-1; n++)
     {
         gotoxy(9+(n*3),3);printf("%d", n);
     }
     gotoxy(0,4);printf("data");
     gotoxy(0,5);printf("F&R");
     for(i=0;i<=size-1;i++)
     {
         gotoxy(3*i+9,4);printf("%d", data[i]);
         if(i==0)
         {
            gotoxy(3*0+9,5);printf("                       ");
            gotoxy(3*0+9,5);printf("FR");
         }else
         {
             gotoxy(3*0+9,5);printf("                          ");
             gotoxy(3*0+9,5);printf("F                         ");
             gotoxy(3*size+8,5);printf("R");
         }
     }

     getchar();
     for(i=0;i<=size-1;i++)
     {
        getchar();
        system("CLS");
        printf("ANTRIAN PENUH");
        printf("\n\n\n");
        printf("i");
        for (int o=0; o<=size-1; o++)
        {
            gotoxy(9+(o*3),3);printf("%d", o);
        }
        gotoxy(0,4);printf("data");
        gotoxy(0,5);printf("F&R");
        gotoxy(3*i+9,4);printf("  ");
        for(j=i+1;j<=size-1;j++)
        {
            gotoxy(3*j+9,4);printf("%d", data[j]);
        }
        if(i==0)
        {
            gotoxy(3*0+9,5);printf("                       ");
            gotoxy(3*i+12,5);printf("F");
            gotoxy(3*6+9,5);printf("R");
        }else if(i==size-2)
            {
                gotoxy(3*6+9,5);printf("FR");
            }else if(i==size-1)
                {
                    goto selesai;
                }else
                {
                    gotoxy(3*0+9,5);printf("                          ");
                    gotoxy(3*i+12,5);printf("F");
                    gotoxy(3*6+9,5);printf("R");
                }
     }

     selesai:
     system("CLS");
     printf("ANTRIAN KOSONG");
     printf("\n\n\n");
     printf("i");
     for (int p=0; p<=size-1; p++)
     {
         gotoxy(9+(p*3),3);printf("%d", p);
     }
     gotoxy(0,4);printf("data");
     gotoxy(0,5);printf("F&R");
     gotoxy(3*0+9,5);printf("                          ");
     gotoxy(3*i+12,5);printf("FR");
     printf("\n\n");
     return 0;
}
