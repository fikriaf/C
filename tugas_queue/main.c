#include <stdio.h>
#include <conio.h>
#include <windows.h>

COORD coord={0, 0};
void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void antrianPenuh()
{
    gotoxy(0,0); printf("                                                    ");
    gotoxy(0,0); printf("ANTRIAN PENUH\n");
}
void antrianKosong()
{
    gotoxy(0,0); printf("                                                    ");
    gotoxy(0,0); printf("ANTRIAN KOSONG\n");
}

int f=-1, r=-1, i, data[7];
int main()
{
    if(data[6]==NULL)
    {
        antrianKosong(); getchar();
        printf("\n\n");
    }else
    {
        printf("ANTRIAN PENUH");
        printf("\n");
        getchar();
    };
    gotoxy(0,2); printf("------------------------------------------------");
    gotoxy(0,3); printf("                      QUEUE                     ");
    gotoxy(0,4); printf("------------------------------------------------");
    gotoxy(0,5); printf("  I  |  0  |  1  |  2  |  3  |  4  |  5  |  6  |");
    gotoxy(0,6); printf("  D  |     |     |     |     |     |     |     |");
    gotoxy(0,7); printf("------------------------------------------------");
    gotoxy(f+3,8); printf("F");
    gotoxy(r+4,8); printf("R");
    for(i=0;i<=6;i++)
    {
        gotoxy(8+(i*6),6); scanf("%d", &data[i]);
        if(i==0)
        {
            gotoxy(0,8); printf("                                                    ");
            f=f+1;
            r=r+1;
        }else
        {
            gotoxy(0,8); printf("                                                    ");
            r=r+1;
        }
        gotoxy(1+(f+1)*6,8); printf("F");
        gotoxy(2+(r+1)*6,8); printf("R");
    }
    antrianPenuh();
    gotoxy(0,9); printf("\n\nQUEUE SUKSES CUYY...\n");
    return 0;
}
