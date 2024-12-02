#include <stdio.h>
#include <stdlib.h>
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

char kode[5];
char nama_barang[50];
int harga_barang, kuantitas, total, bayar, kembali;
int cek = 1;
char ulang[5];
int main()
{
    while(cek){
        SetColor(10);
        printf("\n============================");
        printf("\n         PEMBELIAN");
        printf("\n============================\n");
        printf("Kode Barang  : "); gets(kode);
        printf("Nama Barang  : "); gets(nama_barang);
        printf("Harga Barang : Rp "); scanf("%d", &harga_barang);
        printf("Kuantitas    : "); scanf("%d", &kuantitas);
        printf("============================\n");

        SetColor(3);
        total = harga_barang * kuantitas;
        printf("============================\n");
        printf("TOTAL      : Rp %d", total);
        printf("\nBAYAR      : Rp "); scanf("%d", &bayar);
        printf("============================\n");

        SetColor(6);
        kembali = bayar - total;
        printf("============================\n");
        printf("KEMBALI    : Rp %d\n", kembali);
        printf("============================\n");
        SetColor(7);
        printf("Apakah ingin lanjut [y/n] ? "); gets(ulang);
        if (ulang == "y" || ulang == "Y"){
            system("cls");
        }else{
            break;
        };

    }

    return 0;
}

void SetColor(unsigned short color) {
HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsoleOutput,color);
}
