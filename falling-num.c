#include <stdio.h>

int main(void){
    int count = 0;
    for (int i = 1000; i >= 1; i--)
    {
        printf("%d\t", i);
        count++;
        if(count%5==0){
            printf("\n");
            count = 0;
        }
    }
}