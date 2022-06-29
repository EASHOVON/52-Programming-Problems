#include <stdio.h>

int main(void){
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%d", &N);
        int lastNum = N % 10;
        while (N>=10)
        {
            N /= 10;
        }
        printf("Sum = %d\n", lastNum+N);
    }
    return 0;
}