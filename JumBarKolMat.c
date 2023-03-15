#include <stdlib.h>
#include <stdio.h>

int JumBarKolMat (){

    int i,j;
    int Baris,Kolom;
    int element;
    int sum;

    sum = 0;
    printf("Masukkan nilai Baris : ");
    scanf("%d",&Baris);
    printf("Masukkan nilai Kolom : ");
    scanf("%d",&Kolom);

    int** T = (int**)malloc(Baris*sizeof(int*));
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
/*#include <stdlib.h>
#include <stdio.h>

int JumBarKolMat (){

    int i,j;
    int Baris,Kolom;
    int *T;
    int element;
    int sum;

    T = (int*)malloc(Baris*Kolom*sizeof(int));

    sum = 0;
    printf("Masukkan nilai Baris : ");
    scanf("%d",&Baris);
    printf("Masukkan nilai Kolom : ");
    scanf("%d",&Kolom);


    if(Baris <= 0 && Kolom <= 0){
        printf("Masukkan harus positif");
    }
    else {
        for(i=0;i<Baris;i++){
            for(j=0;j<Kolom;j++){
                scanf("%d",(T + i*Kolom + j));
            }
        }

        for(i=0;i<Baris;i++){
            sum = 0;
            for(j=0;j<Kolom;j++){
                sum = sum + T[i];
            }
            printf("%d",T[i]);
            printf("Baris ke : %d",sum);
        }

        for(i=0;i<Kolom;i++){
            sum = 0;
            for(j=0;j<Baris;j++){
                sum = sum + T[i];
            }
            printf("%d",T[i]);
            printf("Kolom ke : %d",i,sum);
        }
        free(T);
    }
    return 0;
}*/
