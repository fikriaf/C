#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int  sks;
float mutu, sxm, ips;
char nilai[5], kodemk[10], namamk[10];
COORD coord = {0, 0};

void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    printf("---------------------------------------\n");
    printf("           ANGGOTA KELOMPOK            \n");
    printf("---------------------------------------\n");
    printf("FIKRI ARMIA FAHMI          (2023071018)\n");
    printf("DAVA FERDIAN HADIPUTRA     (2023071021)\n");
    printf("DAVID FACHREZI             (2023071022)\n");
    printf("---------------------------------------\n");
    printf("\nKARTU HASIL STUDI\n");
    printf("-------------------------------------------------------------------------------\n");
    printf("  No.      Kode MK       Nama MK       SKS       NILAI       MUTU       S*M\n");
    printf("-------------------------------------------------------------------------------\n");
    int kory = 12;
    int totalsks = 0;
    float totalsxm = 0;
    for (int no=1; no<=7; no++){
        gotoxy(2,kory); printf("%d.", no);
        //BAGIAN INPUT KODE MATA KULIAH
        gotoxy(11,kory); scanf("%s", &kodemk);
        //BAGIAN INPUT NAMA MATA KULIAH
        gotoxy(25,kory); scanf("%s", &namamk);
        //BAGIAN INPUT SKS DAN MENGKALKULASI TOTAL SKS
        gotoxy(40,kory); scanf("%d", &sks);
        totalsks += sks;
        //BAGIAN INPUT NILAI DAN PENYESUAIAN DENGAN MUTU
        gotoxy(51,kory); printf(""); scanf("%s", &nilai);
        if (strcmp(nilai, "A")==0 || strcmp(nilai, "a")==0){
            mutu = 4.0;
        }else if (strcmp(nilai, "A-")==0 || strcmp(nilai, "a-")==0){
            mutu = 3.7;
        }else if (strcmp(nilai, "B+")==0 || strcmp(nilai, "b+")==0){
            mutu = 3.3;
        }else if (strcmp(nilai, "B")==0 || strcmp(nilai, "b")==0){
            mutu = 3.0;
        }else if (strcmp(nilai, "B-")==0 || strcmp(nilai, "b-")==0){
            mutu = 2.7;
        }else if (strcmp(nilai, "C+")==0 || strcmp(nilai, "c+")==0){
            mutu = 2.3;
        }else if (strcmp(nilai, "C")==0 || strcmp(nilai, "c")==0){
            mutu = 2.0;
        }else if (strcmp(nilai, "C-")==0 || strcmp(nilai, "c-")==0){
            mutu = 1.7;
        }else if (strcmp(nilai, "D")==0 || strcmp(nilai, "d")==0){
            mutu = 1;
        }else if (strcmp(nilai, "E")==0 || strcmp(nilai, "e")==0){
            mutu = 0;
        };
        //OUTPUT MUTU
        gotoxy(62,kory); printf("%.1f", mutu);
        //KALKULASI SKS*MUTU
        sxm = sks * mutu;
        gotoxy(72,kory); printf("%.1f", sxm);
        //SIMPAN TOTAL SxM DI VARIABEL totalsxm
        totalsxm += sxm;
        //KOORDINAT Y BERTAMBAH
        kory+=1;
    };
    printf("\n-------------------------------------------------------------------------------\n");
    gotoxy(2, kory+1); printf("TOTAL");
    gotoxy(40, kory+1); printf("%d", totalsks);
    gotoxy(72, kory+1); printf("%.1f", totalsxm);
    printf("\n-------------------------------------------------------------------------------\n");
    gotoxy(2, kory+3); printf("IPS");
    ips = totalsxm / totalsks;
    gotoxy(60, kory+3); printf("%.1f / %d = %.2f", totalsxm, totalsks, ips);
    printf("\n-------------------------------------------------------------------------------\n");

    printf("\n");
    return 0;
}