#include <stdio.h>
#include <stdlib.h>

int NilMax2Tabel(){

    int *Elmt;
    int i,j,k;
    int n,sum;
    int max,max2;

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
