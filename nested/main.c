#include <stdio.h>
#include <stdlib.h>

int a = 1;
int b = 1;
int main()
{
    ulang:
    {
        printf("%d %d\n", a, b);
        b++;
        if (b>3){
            a++;
            b=1;
            if (a>2){
                printf("\n\n\n");
                return 0;
            }else{
                goto ulang;
            }
        }else{
            goto ulang;
        }
    }
}

