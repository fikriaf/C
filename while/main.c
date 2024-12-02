#include <stdio.h>
#include <stdlib.h>

int a=1, b=1, c=1;
int main()
{
    while(a<=2){
        while(b<=2){
            while(c<=3){
                printf("%d %d %d \n", a,b,c);
                a++;
                b++;
                c++;
            }
        }

    }

    return 0;
}
