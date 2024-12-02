/*
UAS_2, 28 DESEMBER 2023
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

//Koordinat
COORD coord = {0, 0};
void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
//Function Rekursi
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
//Menampilkan Konversi Data
void konversi(){
    fflush(stdin);
    system("cls");
    printf("Tabel Konversi");
    printf("\n-----------------------------------------------------------------------");
    printf("\n No.     Desimal        Biner        Oktadesimal        Hexadesimal");
    printf("\n-----------------------------------------------------------------------");
    int desimal[100];
    char tambahbaris[2];
    char carilagi[2];
    int koory = 4;
    int tampil;
    for (int no=1; no>0; no++){
        gotoxy(1,koory); printf("%d.", no);
        gotoxy(9,koory); scanf("%d", &desimal[no]);
        gotoxy(24,koory); biner(desimal[no]);
        gotoxy(41,koory); oktades(desimal[no]);
        gotoxy(60,koory); hexades(desimal[no]);
        printf("\nTambah Data [y/t]? "); scanf("%s", &tambahbaris);
        if (strcmp(tambahbaris, "Y") == 0 || strcmp(tambahbaris, "y") == 0) {
            koory++;
            gotoxy(0, koory); printf("                                    ");
        }else if (strcmp(tambahbaris, "T") == 0 || strcmp(tambahbaris, "t") == 0) {
            koory++;
            gotoxy(0, koory); printf("                                    ");
            gotoxy(0,koory); printf("-----------------------------------------------------------------------");
            for (int z=0; z>=0; z++){
                gotoxy(0,(koory+2)+(8*z)); printf("Tampilkan data konversi pada urutan ke-"); scanf("%d", &tampil);
                if (tampil > no){
                    printf("Data tidak ada!!");
                }else {
                    gotoxy(0,(koory+4)+(8*z)); printf("Tabel Pencarian");
                    gotoxy(0,(koory+5)+(8*z)); printf("-----------------------------------------------------------------------");
                    gotoxy(0,(koory+6)+(8*z)); printf(" No.     Desimal        Biner        Oktadesimal        Hexadesimal");
                    gotoxy(0,(koory+7)+(8*z)); printf("-----------------------------------------------------------------------");
                    gotoxy(0,(koory+8)+(8*z)); printf(" %d.      %d", tampil, desimal[tampil]);
                    gotoxy(24,(koory+8)+(8*z)); biner(desimal[tampil]);
                    gotoxy(41,(koory+8)+(8*z)); oktades(desimal[tampil]);
                    gotoxy(60,(koory+8)+(8*z)); hexades(desimal[tampil]);
                    gotoxy(0,(koory+9)+(8*z)); printf("-----------------------------------------------------------------------");
                    gotoxy(0,(koory+10)+(8*z)); printf("Cari Lagi [y/t]? "); scanf("%s", &carilagi);
                    if (strcmp(carilagi, "Y") == 0 || strcmp(carilagi, "y") == 0) {
                        koory++;
                    }else if (strcmp(carilagi, "T") == 0 || strcmp(carilagi, "t") == 0) {
                        break;
                    }
                }
            }
        }
    }
}
int main()
{
    konversi();
    return 0;
}
