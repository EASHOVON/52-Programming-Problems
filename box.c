#include <stdio.h>

int main(void){
    int T,N;
    scanf("%d", &T);
    for (int i = 0; i < T;i++){
        scanf("%d", &N);
        for (int j = 1; j <= N*N;j++){
            printf("*");
            if(j%N==0){
                printf("\n");
            }
        }
    }
        return 0;
}