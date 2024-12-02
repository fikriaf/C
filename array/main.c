#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

COORD coord = {0, 0};
void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int a[2][2],k,b;
int main()
{
    for (k=0;k<2;k++){
        for (b=0;b<2;b++){
            printf("Nilai A[%d][%d] : ", k, b); scanf("%d", &a[k][b]);
        }
    }
    printf("\n\n");
    gotoxy(0,6); printf("A = ");
    gotoxy(5,5); printf("%d", a[0][0]);
    gotoxy(7,5); printf("%d", a[0][1]);
    gotoxy(5,7); printf("%d", a[1][0]);
    gotoxy(7,7); printf("%d", a[1][1]);
    printf("\n\n");
    return 0;
}
