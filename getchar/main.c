#include <stdio.h>
#include <stdlib.h>

char kar;
int i;

int main()
{
    printf("Input : ");
    kar = getchar();
    printf("Karakternya berupa : %c"); putchar(kar);

    if (strcmp(kar, "k") == 0){
        for (i=0;i<10;i++){
            printf("Informatika\n");
        }
    }else{
        printf("salah");
    }
}
