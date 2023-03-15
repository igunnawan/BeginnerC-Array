/* Nama File : NilMax2Tabel.c */
/* Deskripsi : Menampilkan nilai maksimum ke-2 dari tabel T yang sudah terdefinisi */
/* Pembuat   : Muhamad Gunawan (24060122120016)*/
/* Tanggal Pembuatan   : 13 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int NilMax2Tabel(){

    int *Elmt; /* Pointer ke Integer (Array) */
    int i,j; /* Counter */
    int n; /* Jumlah Element pada Array */
    int max; /* Nilai maximum suatu Element pada Array */
    int max2; /* Nilai maximum ke 2 suatu Element pada Array */ 

    Elmt = (int*)malloc(n*sizeof(int));

    printf("Masukkan N : ");
    scanf("%d",&n);

    if (n <= 0){
        printf("Masukkan Tidak boleh nol/negatif");
    }
    else {
        for(i=0;i<n;i++){
            printf("Masukkan data : ");
            scanf("%d",Elmt+i);
        }

        max = Elmt[0];
        max2 = 0;
        for(i=1;i<n;i++){
            if(max < Elmt[i]){
                max = Elmt[i];
                max2 = Elmt[0];
            }
            else if ((max2 < Elmt[i]) && (Elmt[i] != max)){
                max2 = Elmt[i];
            }
        }
        printf("%d",max2);

        free(Elmt);
    }
    return 0;
}
