#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <unistd.h>
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

char kode[6], nama_barang[50], enter[10], ulang[10];
int harga_barang, kuantitas, total, bayar, kembali;
int cek = 1;
int main()
{
    ngulang:
        system("cls");
        fflush(stdin);
        SetColor(10);
        printf("\n=============================");
        printf("\n         PEMBELIAN");
        printf("\n=============================");
        printf("\nBT001 = Buku Tulis");
        printf("\nPK012 = Pensil Tulis");
        printf("\nBU175 = Busur");
        printf("\n=============================\n");
        printf("Kode Barang  : "); gets(kode);

        if (strcmp(kode, "BT001") == 0 || strcmp(kode, "bt001") == 0) {
            strcpy(nama_barang, "Buku Tulis");
            harga_barang = 25000;

        }else if (strcmp(kode, "PK012") == 0 || strcmp(kode, "pk012") == 0) {
            strcpy(nama_barang, "Pensil Tulis");
            harga_barang = 5000;

        }else if (strcmp(kode, "BU175") == 0 || strcmp(kode, "bu175") == 0) {
            strcpy(nama_barang, "Busur");
            harga_barang = 12500;

        }else{
            printf("=============================\n");
            SetColor(4);
            printf("TERDAPAT KESALAHAN INPUT, SILAHKAN DIULANGI KEMBALI! "); gets(enter);
            goto ngulang;
        }

        printf("Nama Barang  : %s\n", nama_barang);
        printf("Harga Barang : Rp %d\n", harga_barang);
        printf("Kuantitas    : "); scanf("%d", &kuantitas);
        printf("=============================\n");

        SetColor(3);
        total = harga_barang * kuantitas;
        printf("=============================\n");
        printf("TOTAL      : Rp %d", total);
        printf("\nBAYAR      : Rp "); scanf("%d", &bayar);
        printf("=============================\n");

        SetColor(6);
        kembali = bayar - total;
        printf("=============================\n");
        printf("KEMBALI    : Rp %d\n", kembali);
        printf("=============================\n");
        SetColor(4);
        printf("Terima kasih sudah berbelanja\n");
        printf("        ~Fikri Store~\n");
        SetColor(6);
        printf("=============================\n");
        SetColor(7);
        printf("Apakah ingin lanjut [y/n] ? "); scanf("%s", &ulang);
        if (strcmp(ulang, "y")==0 || strcmp(ulang, "Y")==0){
            goto ngulang;
        }else{
            return 0;
        };

}

void SetColor(unsigned short color) {
HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsoleOutput,color);
}
