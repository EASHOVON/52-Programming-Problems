#include<stdio.h>

int main(){
    int i, t;
    scanf("%d",&t);

    for(i=0; i < t; i++){
        int n;
        scanf("%d",&n);

        int lsd = n % 10;
        n /= 10;

        int msd = 0;
        while(n > 0){
            msd = n % 10;
            n /= 10;
        }
        printf("Sum = %d\n", msd + lsd);
    }
    return 0;
}