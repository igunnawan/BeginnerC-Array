#include <stdio.h>
#include <stdlib.h>

int JumFrekNilTabel(){

    int *T;
    int i,j;
    int sum,n;

    sum = 0;
    T = (int*)malloc(n*sizeof(int));

    printf("Masukkan n : ");
    scanf("%d",&n);

    if (n <= 0){
        printf("Masukkan harus positif");
    }
    else {
        for(i=0;i<n;i++){
            scanf("%d",T+i);
        }

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if((T[i] == T[j]) && (i != j)){
                    sum = sum + T[i];
                }
            }
        }
        printf("%d",sum);
        free(T);
    }
    return 0;
}
