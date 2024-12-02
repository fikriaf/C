#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/*
0 = Black
1 = Blue
2 = Green
3 = Aqua
4 = Red
5 = Purple
6 = Yellow
7 = White
8 = Gray
9 = Light Blue

A = Light Green
B = Light Aqua
C = Light Red
D = Light Purple
E = Light Yellow
F = Light White
*/

void SetColor(unsigned short color)
{
    HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsoleOutput,color);
}
