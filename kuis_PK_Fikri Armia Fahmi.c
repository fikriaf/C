/*
TUGAS 11 DESEMBER 2023
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

void biner(int nilai){
    if (nilai > 0){
        biner(nilai/2);
        printf("%d", nilai%2);
    }
}
void oktades(int nilai){
    if (nilai > 0){
        oktades(nilai/8);
        printf("%d", nilai % 8);
    }
}
void hexades(int nilai){
    if (nilai > 0){
        hexades(nilai/16);
        int sisa = nilai % 16;
        if (sisa <= 9){
            printf("%d", sisa);
        }else{
            printf("%c", 'A' + sisa-10);
        }
    }
}


void konversi(){
    fflush(stdin);
    system("cls");
    printf("Tabel Konversi");
    printf("\n-----------------------------------------------------------------------");
    printf("\n No.     Desimal        Biner        Oktadesimal        Hexadesimal");
    printf("\n-----------------------------------------------------------------------");
    int desimal;
    char tambahbaris[2];
    int koory = 4;
    for (int no=1; no<=3; no++){
        gotoxy(1,koory); printf("%d.", no);
        gotoxy(9,koory); scanf("%d", &desimal);
        gotoxy(24,koory); biner(desimal);
        gotoxy(41,koory); oktades(desimal);
        gotoxy(60,koory); hexades(desimal);
        printf("\nTambah data [y/t]?"); scanf("%s", &tambahbaris);
        if (strcmp(tambahbaris, "Y") == 0 || strcmp(tambahbaris, "y") == 0) {
            koory++;
            gotoxy(0, koory); printf("                                    ");
        }else if (strcmp(tambahbaris, "T") == 0 || strcmp(tambahbaris, "t") == 0) {
            koory++;
            gotoxy(0, koory); printf("                                    ");
            printf("\n-----------------------------------------------------------------------");
        }
    }
}
int tampil;
int main()
{
    konversi();
    printf("\nTampilkan data konversi pada urutan ke : "); scanf("%d", &tampil);
    printf("Tabel Konversi");
    printf("\n-----------------------------------------------------------------------");
    printf("\n No.     Desimal        Biner        Oktadesimal        Hexadesimal");
    printf("\n-----------------------------------------------------------------------");
    printf("\n %d.", tampil);

    return 0;
}
