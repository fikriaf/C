#include <stdio.h>
#include <stdlib.h>


int a, b, c, d;
float hasil;

int kali(int x, int y){
    return x*y;
}
float bagi(float x, float y){
    return x / y;
}
int kurang(int x, int y){
    return x-y;
}
float pangkat(float x){
    return x * x;
}
int main()
{
    printf("A : "); scanf("%d", &a);
    printf("B : "); scanf("%d", &b);
    printf("C : "); scanf("%d", &c);
    printf("D : "); scanf("%d", &d);
    printf("\n-----------------------------------");
    printf("\nHasil = (A * (B - C) / D)^2");
    printf("\n      = (%d * %d / %d)^2", a, kurang(b,c), d);
    printf("\n      = (%d / %d)^2", kali(a,kurang(b,c)), d);
    printf("\n      = %f^2", bagi(kali(a,kurang(b,c)), d));
    hasil = pangkat(bagi(kali(a,kurang(b,c)), d));
    printf("\n      = %f", hasil);
    printf("\n-----------------------------------");
    printf("\n");
    return 0;
}
