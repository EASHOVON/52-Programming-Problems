#include <stdio.h>

int main(void){
    int count = 0;
    for (int i = 1000; i >= 1; i--)
    {
        printf("%d\t", i);
        if(i%5==1){
            printf("\n");
        }
    }
    return 0;
}