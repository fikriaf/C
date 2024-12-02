#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int a = 1;
    for(i=1;i<=6;i++){
        if (i<=3){
            printf("1 %d\n", i);
        }
        else{
            printf("2 %d\n", i);
        }
    }
    switch(a){
        case 1:
            printf(1);
            break;
    }
    return 0;
}
