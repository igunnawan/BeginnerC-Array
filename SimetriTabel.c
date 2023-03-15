/* Nama File : SimetriTabel.c */
/* Deskripsi : Melakukan cek apakah tabel T1 dan T2 simetri atau tidak */
/* Pembuat   : Muhamad Gunawan (24060122120016)*/
/* Tanggal Pembuatan   : 14 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int SimetriTabel()
{
    int i; /* Counter */
    int count; /* Menghitung banyaknya Element pada suatu array yang tidak sama */
    int *JumlahElmt1; /* Pointer to Integer (Array 1) */
    int *JumlahElmt2; /* Pointer to Integer (Array 2) */
    int masukkan1; /* Jumlah Element pada suatu Array Pertama */
    int masukkan2; /* Jumlah Element pada suatu Array Kedua */

    count = 0;

    printf("Masukkan Element Array 1 : ");
    scanf("%d",&masukkan1);
    printf("Masukkan Elemet Array 2 : ");
    scanf("%d",&masukkan2);
    
    JumlahElmt1 = (int*)malloc(masukkan1*sizeof(int));
    JumlahElmt2 = (int*)malloc(masukkan2*sizeof(int));
    
    printf("============================================================");

    if (masukkan1 <= 0 && masukkan2 <= 0){
        printf("Masukkan tidak boleh nol/negatif");
    }
    else {
        if (masukkan1 != masukkan2){
            printf("\nArray Tidak Simetris");
        }
        else {
            for(i=0;i<masukkan1;i++){
                printf("\nMasukkan data pada array 1 : ");
                scanf("%d",JumlahElmt1+i);
            }

            for(i=0;i<masukkan2;i++){
                printf("\nMasukkan data pada array 2 : ");
                scanf("%d",JumlahElmt2+i);
            }

            for(i=0;i<masukkan1;i++){
                if (JumlahElmt1[i] != JumlahElmt2[i]){
                    count += 1;
                }
            }

            printf("=======================================================");
            if(count > 0){
                printf("\nArray Tidak Simetris");
            }
            else {
                printf("\nArray Simestris");
            }
        }
        free(JumlahElmt1);
        free(JumlahElmt2);
    }
    return 0;
}
