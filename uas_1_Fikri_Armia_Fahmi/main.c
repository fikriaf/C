/*
UAS 1, 28 DESEMBER 2023
--------------------------
NAMA : FIKRI ARMIA FAHMI
NIM  : 2023071018
KELAS: INF-A
--------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int kali(int x, int y)
{
    return x * y;
}
float bagi(float x, float y)
{
    return x / y;
}
float tambah(float x, float y)
{
    return x + y;
}
int kurang(int x, int y)
{
    return x - y;
}
int pangkat(int x)
{
    return x * x;
}

void aritmatika()
{
    int a,b,c,d,e;
    printf("A : "); scanf("%d", &a);
    printf("B : "); scanf("%d", &b);
    printf("C : "); scanf("%d", &c);
    printf("D : "); scanf("%d", &d);
    printf("E : "); scanf("%d", &e);

    printf("\n%d    = %d - %d", kurang(b,c), b, c);
    printf("\n%.1f  = %d / %d", bagi(d,e), d, e);
    printf("\n%d   = %d * %d", kali(a,kurang(b,c)), a, kurang(b,c));
    printf("\n%.1f = %d + %.1f", tambah(kali(a,kurang(b,c)),bagi(d,e)), kali(a,kurang(b,c)), bagi(d,e));
    printf("\n");
}

int main()
{
    aritmatika();
    return 0;
}
