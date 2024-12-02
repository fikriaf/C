#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>
int a, deret;
char ulang[5];
int main()
{
    ngulang:
        system("cls");
        fflush(stdin);
        printf("Banyak deret : "); scanf("%d",&deret);
        for (a=1;a<=deret;a++){
            if (a%2==1){
                printf("%d\n", a);
            }
        }
    printf("Apakah mau ngulang [y/n]? "), scanf("%s", &ulang);
    if (strcmp(ulang, "y")==0 || strcmp(ulang, "Y")==0){
        goto ngulang;
    }else{
        return 0;
    };
}
