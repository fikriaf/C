#include <stdio.h>
#include <windows.h>

COORD coord={0,0};
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int br,kl,brs,klm;
char jwb[2];

int main()
{
    ulang1:
    system("cls");
    printf("Input jumlah BARIS: ");scanf("%d", &brs);
    printf("Input jumlah KOLOM: ");scanf("%d", &klm);
    int a[brs-1][klm-1],b[brs-1][klm-1],c[brs-1][klm-1];
    printf("\n\n");
    for(br=1;br<=brs;br++)
    {
        for(kl=1;kl<=klm;kl++)
        {
            printf("A[%d][%d]: ", br, kl), scanf("%d",&a[br][kl]);
        }
    }

printf("\n");
    for(br=1;br<=brs;br++)
    {
        for(kl=1;kl<=klm;kl++)
        {
            printf("B[%d][%d]: ", br, kl), scanf("%d",&b[br][kl]);
        }
    }

printf("\n");
//Penjumlahan Matriks
    for(br=1;br<=brs;br++)
    {
        for(kl=1;kl<=klm;kl++)
        {
            c[br][kl] = a[br][kl] + b[br][kl];
            printf("C[%d][%d]: %d", br, kl,c[br][kl]);
            printf("\n");
        }
    }

//Matriks C
printf("\n");
/*
if (klm%2 == 0){
    gotoxy(klm*2-2+(klm+(klm-1))/2,(brs*klm*3)+7); printf("A");
    gotoxy(klm*2+6+(klm+(klm-1))/2,(brs*klm*3)+7); printf("B");
    gotoxy(klm*2+14+(klm+(klm-1))/2,(brs*klm*3)+7); printf("C");
}else {
    if (brs/2 == 0){
        gotoxy(klm*2+2+(klm+(klm-1))/2+1,(brs*klm*3)+7); printf("A");
    }else{
        gotoxy(klm*2+2+(klm+(klm-1))/2+1,(brs*klm*3)+7); printf("A");
    }
}*/
for (int k = 0; k < klm; k++ ) printf(" ");

printf("A       B       C");
//Matriks A
for(br=1;br<=brs;br++)
{
    for(kl=1;kl<=klm;kl++)
    {
        gotoxy(kl*2,(br*2)+brs*klm*3+7);printf("%d", a[br][kl]);
    }
    printf("\n");
}
if (brs%2 == 0){
    gotoxy(klm*2+4,(brs+(brs-1))/2+(brs*2)+(brs*klm*3)+3); printf("+");
}else {
    if (brs/2 == 0){
        gotoxy(klm*2+4,(brs+(brs-1))/2+(brs*2)+brs*klm*3+3); printf("+");
    }else{
        gotoxy(klm*2+4,((brs+brs-1)/2)+(brs*2)+brs*klm*3+3); printf("+");
    }
}
//gotoxy(7,21);printf("+");
//Matriks B
for(br=1;br<=brs;br++)
{
    for(kl=1;kl<=klm;kl++)
    {
        gotoxy(kl*2+8,(br*2)+brs*klm*3+7);printf("%d", b[br][kl]);
    }
    printf("\n");
}
if (brs%2 == 0){
    gotoxy(klm*2+12,(brs+(brs-1))/2+(brs*2)+(brs*klm*3)+3); printf("=");
}else {
    if (brs/2 == 0){
        gotoxy(klm*2+12,(brs+(brs-1))/2+(brs*2)+brs*klm*3+3); printf("=");
    }else{
        gotoxy(klm*2+12,((brs+brs-1)/2)+(brs*2)+brs*klm*3+3); printf("=");
    }
}
//Matriks C
for(br=1;br<=brs;br++)
{
    for(kl=1;kl<=klm;kl++)
    {
        gotoxy(kl*2+16,(br*2)+brs*klm*3+7);printf("%d", c[br][kl]);
    }
    printf("\n");
}
printf("\n\n");
printf("Ulang[Y/T]? ");
ulang2:
scanf("%c", &jwb);

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

