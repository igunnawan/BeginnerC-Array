/* Nama File : FrekNilTabel.c */
/* Deskripsi : Menampilkan nilai elemen tabel T yang kemunculannya lebih dari 1 kali*/
/* Pembuat   : Muhamad Gunawan (24060122120016)*/
/* Tanggal Pembuatan   : 14 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int *T; /* Pointer ke integer */
    int i,j; /* Counter */
    int count; /* Menghitung banyaknya Element yang sama */
    int Masukkan; /* Jumlah Element Array */

    printf("Masukkan nilai N : ");
    scanf("%d",&Masukkan);

    T = (int*)malloc(Masukkan*sizeof(int));

    if(Masukkan <= 0){
        printf("Masukkan tidak boleh nol/negatif");
    }
    else {
        for(i=0;i<Masukkan;i++){
            printf("Masukkan data : ");
            scanf("%d",T+i);
        }

        for (i=0;i<Masukkan;i++){
            count = 1;
            for(j=i+1;j<Masukkan;j++){
                if(T[i] == T[j] && T[j] != 0){
                    count = count + 1;
                    T[j] = 0;
                }
            }
            if (count > 1){
                printf("%d",T[i]);
            }
        }
        free(T);
    }
    return 0;
}
