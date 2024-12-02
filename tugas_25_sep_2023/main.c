#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

// Mendeklarasikan variabel nilai, berupa bentuk integer
int nilai;

int main()
{
    printf("\n=============================");
    printf("\n         PENILAIAN");
    printf("\n=============================");

    // Kode meminta input bernilai integer
    printf("\nMasukkan nilai [0..100] : "); scanf("%d", &nilai);

    printf("\n=============================");

    // Menggunakan "if" dan "else if" berdasarkan "<", ">", ">=" serta logika AND "&&"
    // Kemudian mencetak nilai yang sesuai dengan grade dan keterangan
    if (nilai >= 100){
        printf("\nGRADE      : A");
        printf("\nKETERANGAN : SEMPURNA");
    }else if ((nilai >= 95) && (nilai < 100)){
        printf("\nGRADE      : A-");
        printf("\nKETERANGAN : LUAR BIASA");
    }else if ((nilai >= 90) && ("nilai < 95")){
        printf("\nGRADE      : B+");
        printf("\nKETERANGAN : BAIK SEKALI");
    }else if ((nilai >= 85) && (nilai < 90)){
        printf("\nGRADE      : B");
        printf("\nKETERANGAN : BAIK");
    }else if ((nilai >= 75) && (nilai < 85)){
        printf("\nGRADE      : B-");
        printf("\nKETERANGAN : CUKUP");
    }else if ((nilai >= 65) && (nilai < 75)){
        printf("\nGRADE      : C+");
        printf("\nKETERANGAN : LUMAYAN");
    }else if ((nilai >= 60) && (nilai < 65)){
        printf("\nGRADE      : C");
        printf("\nKETERANGAN : KURANG");
    }else if ((nilai >= 55) && (nilai < 60)){
        printf("\nGRADE      : C-");
        printf("\nKETERANGAN : KURANG SEKALI");
    }else if ((nilai >= 45) && (nilai < 55)){
        printf("\nGRADE      : D");
        printf("\nKETERANGAN : SANGAT KURANG SEKALI");
    }else{
        printf("\nGRADE      : E");
        printf("\nKETERANGAN : TIDAK LULUS");
    };
    printf("\n=============================\n");
    return 0;
}
