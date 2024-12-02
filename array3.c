#include <stdio.h>
#include <windows.h>

COORD coord={0,0};
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int a[3][3],b[3][3],c[3][3],br,kl,brs,klm;
char jwb[2];

int main()
{
    ulang1:
    system("cls");
    printf("Input jumlah BARIS: ");scanf("%d", &brs);
    printf("Input jumlah KOLOM: ");scanf("%d", &klm);
    printf("\n\n");
    for(br=1;br<=2;br++)
    {
        for(kl=1;kl<=2;kl++)
        {
            printf("A[%d][%d]: ", br, kl), scanf("%d",&a[br][kl]);
        }
    }

printf("\n");
    for(br=1;br<=2;br++)
    {
        for(kl=1;kl<=2;kl++)
        {
            printf("B[%d][%d]: ", br, kl), scanf("%d",&b[br][kl]);
        }
    }

printf("\n");
//Penjumlahan Matriks
    for(br=1;br<=2;br++)
    {
        for(kl=1;kl<=2;kl++)
        {
            c[br][kl] = a[br][kl] + b[br][kl];
            printf("C[%d][%d]: %d", br, kl,c[br][kl]);
            printf("\n");
        }
    }

//Matriks C
printf("\n");
printf("   A       B       C\n");
//Matriks A
for(br=1;br<=2;br++)
{
    for(kl=1;kl<=2;kl++)
    {
        gotoxy(kl*2,(br*2)+18);printf("%d", a[br][kl]);
    }
    printf("\n");
}
gotoxy(7,21);printf("+");
//Matriks B
for(br=1;br<=2;br++)
{
    for(kl=1;kl<=2;kl++)
    {
        gotoxy(kl*2+8,(br*2)+18);printf("%d", b[br][kl]);
    }
    printf("\n");
}
gotoxy(15,21);printf("=");
//Matriks C
for(br=1;br<=2;br++)
{
    for(kl=1;kl<=2;kl++)
    {
        gotoxy(kl*2+16,(br*2)+18);printf("%d", c[br][kl]);
    }
    printf("\n");
}
printf("\n\n");
printf("Ulang[Y/T]? ");
ulang2:
gotoxy(12,25);printf(" ");
gotoxy(12,25);scanf("%c", &jwb);

if((strcmp(jwb,"Y")==0)||((strcmp(jwb,"y")==0)))
{
  goto ulang1;
} else if((strcmp(jwb,"T")==0)||((strcmp(jwb,"t")==0)))
  {
      printf("\n\n");
      return 0;
  } else
    {
        goto ulang2;
    }
}

