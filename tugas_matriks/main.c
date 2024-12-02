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

int baris, kolom, b, k;
int matriks()
{
    fflush(stdin);
    system("cls");
    printf("Input Baris : "); scanf("%d", &baris);
    printf("Input Kolom : "); scanf("%d", &kolom);

    int arrayMatriks[baris][kolom];

    for (int b=0; b<=baris-1; b++){
        for (int k=0; k<=kolom-1; k++){
            printf("Nilai A[%d][%d] : ", b, k); scanf("%d", &arrayMatriks[b][k]);
        }
    }

    printf("\n\n");
    if (baris%2 == 0){
        gotoxy(0,(baris+(baris-1))/2+(baris*kolom+3)); printf("A = ");
    }else {
        if (baris/2 == 0){
            gotoxy(0,(baris+(baris-1))/2+(baris*kolom+3)); printf("A = ");
        }else{
            gotoxy(0,((baris+baris-1)/2)+(baris*kolom)+3); printf("A = ");
        }
    }

    int koorY = baris*kolom+3;
    for (int p=0; p<=baris-1; p++){
        int koorX=5;
        for (int q=0; q<=kolom-1; q++){
            gotoxy(koorX,koorY); printf("%d", arrayMatriks[p][q]);
            koorX+=3;
        }
        koorY+=2;
    }

    char perintah[2];
    printf("\n\nUlang [y/n]? "); scanf("%s", &perintah);
    if (strcmp(perintah, "Y") == 0 || strcmp(perintah, "y") == 0) {
        matriks();
    }else if (strcmp(perintah, "T") == 0 || strcmp(perintah, "t") == 0){
        return 0;
    }
}
int main()
{
    matriks();
    return 0;
}
