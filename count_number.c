#include <stdio.h>
#include <string.h>


int main(void){
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        char str[100005];
        int i, count=1;
        fgets(str,100005,stdin);
        int len = strlen(str);
        for (i = 0; i < len;i++){
            if(str[i]==' ' && str[i+1]!=' '){
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}