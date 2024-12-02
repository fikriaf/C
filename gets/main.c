#include <stdio.h>
#include <stdlib.h>

char nim[50];
char nama[50];
char ttl[50];
char alamat[50];
int hitung;

int main()
{
    printf("NIM : "); gets(nim);
    printf("\nNama : "); gets(nama);
    printf("\nTempat, tanggal lahir : "); gets(ttl);
    printf("\nAlamat : "); gets(alamat);
    printf("\n============================\n");
    printf("          BIODATA\n");
    printf("============================\n");
    printf("NIM    : %s\n", nim);
    printf("Nama   : %s\n", nama);
    printf("TTL    : %s\n", ttl);
    printf("Alamat : %s\n", alamat);
    printf("============================\n");
    return 0;
}
