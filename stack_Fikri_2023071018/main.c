/*
NAMA : Firki Armia Fahmi
NIM  : 2023071018
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

COORD coord={0, 0};
void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    int koleksi_data_stack[6];
    int top = -1;
    int pilih;

    printf("=========================================\n");
    printf("            KOLEKSI DATA STACK\n");
    printf("=========================================\n");
    printf("       Fikri Armia Fahmi (2023071018)    \n");
    printf("=========================================\n");

    while(1)
    {
        printf("\n\n-----------\n");
        printf("   PILIH\n");
        printf("-----------\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. EXIT PROGRAM\n");
        printf("-----------\n");
        printf("Pilih instruksi: "); scanf("%d", &pilih);
        if (pilih == 1)
        {
            if (top != 5)
            {
                top=top+1;
                printf("\nPUSH Data: "); scanf("%d", &koleksi_data_stack[top]);
                printf("Koleksi Data Stack: ");
                for(int i=0; i<=top; i++)
                {
                    printf("%d ", koleksi_data_stack[i]);
                }
            }
            else
            {
                printf("\nMohon maaf, data stack-nya telah penuh");
            }
        }
        else if (pilih == 2)
        {
            if (top != -1) {
                printf("\nPOP Data: %d\n", koleksi_data_stack[top]);
                top=top-1;
                printf("Koleksi Data Stack: ");
                for(int j=0; j<=top; j++)
                {
                    printf("%d ", koleksi_data_stack[j]);
                }
            }
            else
            {
                printf("\nMohon maaf, data stack-nya kosong");
            }
        }
        else
        {
            printf("\nPROGRAM TELAH BERHENTI\n\n");
            return 0;
        }
    }
}

