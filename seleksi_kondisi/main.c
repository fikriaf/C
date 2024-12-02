#include <stdio.h>
#include <stdlib.h>
#define true 0

int a,b;

int main()
{
    printf("Input a : "); scanf("%d", &a);
    printf("Input b : "); scanf("%d", &b);

    printf("\n===========================");
    printf("\n        Kesimpulan");
    printf("\n===========================\n\n");

    if (a==b){
        printf("a sama dengan b (%d=%d)\n", a,b);
    };
    if (a>b){
        printf("a lebih besar dari b (%d>%d)\n", a,b);
    };
    if (a<b){
        printf("a lebih kecil dari b (%d<%d)\n", a,b);
    };
    if (a>b){
        printf("a lebih besar sama dengan b (%d>=%d)\n", a,b);
    };
    if (a>=b && a!=b){
        printf("a lebih besar sama dengan b (%d>=%d)\n", a,b);
    };
    if (a<=b && a!=b){
        printf("a lebih kecil sama dengan b (%d<=%d)\n", a,b);
    }
    printf("\n===========================\n");
    return 0;
}
