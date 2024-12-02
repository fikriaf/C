#include <stdio.h>
#include <conio.h>
#include <windows.h>

int f=-1, r=-1, i, data[7];

int main()
{
    if(data[6]==NULL)
    {
        printf("ANTRIAN KOSONG");
        getchar();
        printf("\n\n");
    }else
        {
            printf("ANTRIAN PENUH");
            printf("\n\n");
            getchar();
            return 0;
        }

     for(i=0;i<=6;i++)
     {
         printf("Data indeks %d:", i);
         scanf("%d", &data[i]);
         if(i==0)
         {
             f=f+1;
             r=r+1;
         }else
             {
                 r=r+1;
             }
         printf("F= %d R= %d\n", f,r);
     }

    printf("\n\n");
    return 0;
}
