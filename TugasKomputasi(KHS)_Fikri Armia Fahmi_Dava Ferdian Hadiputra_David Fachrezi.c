#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int  sks;
float mutu, sxm, ips;
char nilai[5];
char kodemk[10] = "x";
char namamk[10] = "x";
COORD coord = {0, 0};

void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void SKS()
{
    scanf("%d", &sks);
}
void Nilai()
{
    scanf("%s", &nilai);
}
void khs()
{
    while(1){
        system("cls");
        fflush(stdin);
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
        printf("  1.       INF101        KALKULUS       3                                      \n");
        printf("  2.       INF103        KOMPUTASI      3                                      \n");
        printf("  3.       INF105        PTIK           3                                      \n");
        printf("  4.       INF107        PSD            3                                      \n");
        printf("  5.       MK101         AGAMA          2                                      \n");
        printf("  6.       MK103         B.INDO         2                                      \n");
        printf("  7.       MK105         KWH            2                                      \n");
        int kory = 12;
        int totalsks = 18;
        float totalsxm = 0;
        for (int no=1; no<=7; no++){
            //BAGIAN INPUT NILAI DAN PENYESUAIAN DENGAN MUTU
            gotoxy(51,kory); printf(""); Nilai();
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
            //Definisikan sks agar memiliki valuenya
            if (no <= 4){
                sks = 3;
            }else{
                sks = 2;
            }
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
        char izin[2];
        printf("Ingin mengulang [y/n] ? "); scanf("%s", &izin);
        if (strcmp(izin, "n")==0){
            break;
        }else{
            continue;
        }
    }
}


int main()
{
    khs();
    return 0;
}
