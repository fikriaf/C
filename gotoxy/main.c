#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

COORD coord={0, 0};
void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    for(int y=0; y<20; y++){
        for(int i=0; i<10; i++){
            gotoxy(i,10); printf(".");
        }
    }
    printf("\n\n");
    printf("Hello world!\n");
    return 0;
}
