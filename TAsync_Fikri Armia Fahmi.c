/*
TUGAS ASYNCRONOUS 20 NOVEMBER 2023
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

COORD coord = {0, 0};
void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

float kali(float x, float y)
{
    return x * y;
}
float bagi(float x, float y)
{
    return x / y;
}
int tambah(int x, int y)
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
    fflush(stdin);
    system("cls");
    printf("KOMPUTER ARITMATIKA");
    printf("\n-----------------------------------");
    printf("\nMenghitung keluaran dari persamaan matematika X = (A + B) * ((C^2 - D) /  E)\n");

    int a,b,c,d,e;
    printf("A : "); scanf("%d", &a);
    printf("B : "); scanf("%d", &b);
    printf("C : "); scanf("%d", &c);
    printf("D : "); scanf("%d", &d);
    printf("E : "); scanf("%d", &e);
    printf("\n");
    printf("X = (A + B) * ((C^2 - D) / E)\n");
    printf("  = (%d + %d) * ((%d^2 - %d) / %d)\n", a,b,c,d,e);
    printf("  = (%d) * ((%d) / %d)\n", tambah(a,b),kurang(pangkat(c),d),e);
    printf("  = (%d) * (%.2f)\n", tambah(a,b),bagi(kurang(pangkat(c),d),e));
    printf("  = %.2f\n\n", kali(tambah(a,b),bagi(kurang(pangkat(c),d),e)));

    char pilihanArit[2];
    printf("Keluar [Y/T] : "); scanf("%s", &pilihanArit);
    if (strcmp(pilihanArit, "Y") == 0 || strcmp(pilihanArit, "y") == 0) {
        menu();
    }else if (strcmp(pilihanArit, "T") == 0 || strcmp(pilihanArit, "t") == 0){
        aritmatika();
    }
}

void biner(int x)
{
    int preBiner[10];
    int i = 0;
    while(x > 0){
        preBiner[i] = x % 2;
        x /= 2;
        i++;
    }

    for (int j = i-1; j>=0; j--) {
        printf("%d", preBiner[j]);
    }
}

void oktadesimal(int x)
{
    int oktades[10];
    int i = 0;

    while (x > 0) {
        oktades[i] = x % 8;
        x /= 8;
        i++;
    }

    for (int j = i-1; j>=0; j--) {
        printf("%d", oktades[j]);
    }
}

void hexadesimal(int x)
{
    char hexades[10];
    int i = 0;

    while (x > 0) {
        int sisa = x % 16;
        if (sisa < 10) {
            hexades[i] = sisa + '0'; // Mengonversi sisa ke karakter '0'-'9'
        } else {
            hexades[i] = sisa - 10 + 'A'; // Mengonversi sisa ke karakter 'A'-'F'
        }
        x /= 16;
        i++;
    }

    for (int j = i-1; j>=0; j--) {
        printf("%c", hexades[j]);
    }
}
void konversi()
{
    fflush(stdin);
    system("cls");
    printf("KONVERSI SISTEM BILANGAN");
    printf("\n-----------------------------------");
    printf("\n\nTabel Konversi");
    printf("\n-----------------------------------------------------------------------");
    printf("\n No.     Desimal        Biner        Oktadesimal        Hexadesimal");
    printf("\n-----------------------------------------------------------------------");
    int desimal;
    int koory = 7;
    for (int no=1; no<=3; no++){
        gotoxy(1,koory); printf("%d.", no);
        gotoxy(9,koory); scanf("%d", &desimal);
        gotoxy(24,koory); biner(desimal);
        gotoxy(41,koory); oktadesimal(desimal);
        gotoxy(60,koory); hexadesimal(desimal);
        koory++;
    }
    printf("\n-----------------------------------------------------------------------");
    char pilihanKonversi[2];
    printf("\nKeluar [Y/T] : "); scanf("%s", &pilihanKonversi);
    if (strcmp(pilihanKonversi, "Y") == 0 || strcmp(pilihanKonversi, "y") == 0) {
        menu();
    }else if (strcmp(pilihanKonversi, "T") == 0 || strcmp(pilihanKonversi, "t") == 0) {
        konversi();
    }
}

void menu()
{
    fflush(stdin);
    system("cls");
    printf("MENU UTAMA");
    printf("\n-----------------------------------");
    printf("\n1. Komputer Aritmatika");
    printf("\n2. Konversi Sistem Bilangan");
    printf("\n3. Keluar");
    printf("\n-----------------------------------");
    int pilihan;
    printf("\nPILIHAN [1/2/3] : "); scanf("%d", &pilihan);
    if (pilihan == 1){
        aritmatika();
    }else if (pilihan == 2){
        konversi();
    }else if (pilihan == 3){
        return 0;
    }else{
        menu();
    }
}
int main()
{
    menu();
    return 0;
}
