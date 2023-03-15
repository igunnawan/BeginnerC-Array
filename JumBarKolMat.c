/* Nama File : JumBarKolMat.c */
/* Deskripsi : Menampilkan jumlah setiap baris dan kolom pada tabel T (matrik) */
/* Pembuat   : Muhamad Gunawan (24060122120016)*/
/* Tanggal Pembuatan   : 15 Maret 2023*/

#include <stdlib.h>
#include <stdio.h>

int JumBarKolMat (){

    int i,j; /* Counter */
    int Baris,Kolom; /* Jumlah Element Baris dan Jumlah Element Kolom */
    int sum; /* Menjummlah Element */
    int** T; /* Pointer 2d Array */
    
    sum = 0;
    printf("Masukkan nilai Baris : ");
    scanf("%d",&Baris);
    printf("Masukkan nilai Kolom : ");
    scanf("%d",&Kolom);

    T = (int**)malloc(Baris*sizeof(int*));
    for (i=0;i<Baris;i++){
        T[i] = (int*)malloc(Kolom*sizeof(int));
    }

    if(Baris <= 0 && Kolom <= 0){
        printf("Masukkan harus positif");
    }
    else {
        for (i=0;i<Baris;i++){
            for (j=0;j<Kolom;j++){
                scanf("%d",&T[i][j]);
            }
        }

        for (i=0;i<Baris;i++){
            sum = 0;
            for (j=0;j<Kolom;j++){
                sum = sum + T[i][j];
            }
            printf("baris ke %d : %d",i,sum);
        }

        for (i=0;i<Baris;i++){
            sum = 0;
            for (j=0;j<Kolom;j++){
                sum = sum + T[j][i];
            }
            printf("kolom ke %d : %d",i,sum);
        }

    }
    return 0;
}

