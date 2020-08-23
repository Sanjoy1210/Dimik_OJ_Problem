#include <stdio.h>

int main()
{
    int t, n, i;

    scanf("%d", &t);

    while(t--){

        scanf("%d", &n);

        for(i = n; i >= 0; i--){
            if(i >= 2){
                printf("2^%d + ", i);
            }
            else if(i == 1){
                printf("2 + ");
            }
            else printf("1");
        }
        printf("\n");
    }

    return 0;
}