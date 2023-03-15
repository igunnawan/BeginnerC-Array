#include <stdio.h>
#include <stdlib.h>

int FrekNilTabel(){

    int *T;
    int i,j;
    int count;
    int Masukkan;

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
    }
    return 0;
}
