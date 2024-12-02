#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int p, l, luas;
COORD coord={0, 0};
void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    printf("\nTabeL Luas Persegi Panjang\n");
    printf("-----------------------------------------------------------\n");
    printf("  No.      Panjang (m)     Lebar(m)     luas (m persegi)\n");
    printf("-----------------------------------------------------------\n");
    int kory = 5;
    for (int no=1; no<=5; no++){
        gotoxy(2,kory); printf("%d.", no);
        gotoxy(15,kory); printf(""); scanf("%d", &p);
        gotoxy(30,kory); printf(""); scanf("%d", &l);
        luas = p * l;
        gotoxy(45,kory); printf("%d", luas);

        kory+=1;
    };
    printf("\n-----------------------------------------------------------\n");

    printf("\n\n");
    printf("Hello world!\n");
    return 0;
}
