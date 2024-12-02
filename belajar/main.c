// scanf() dan printf()

#include <stdio.h>
#define pi 3.14


int angka1; angka2; angka3;
int i;
int main()
{
    printf("Input angka ke-1: "); scanf("%d", &angka1);
    printf("Input angka ke-2: "); scanf("%d", &angka2);
    printf("Input angka ke-3: "); scanf("%d", &angka3);

    printf("\nCetak Outputnya \n");
    printf("Angka ke-1, 2, 3 adalah %d, %d, %d \n", angka1, angka2, angka3);

    for(i=1; i<4; i++){
        var angka;
        angka = "angka%d",i;
        printf("\nAngka ke-%d adalah %s", i, angka);
    };
    return 0;
}
