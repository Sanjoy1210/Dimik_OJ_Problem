#include <stdio.h>

int main()
{
    int t, n, m, i, j;

    scanf("%d", &t);

    while(t--){

        scanf("%d %d", &n, &m);

        for(i = 1; i <= n; i++){
            printf("%d", m);
            for(j = 2; j <= i; j++){
                printf(" %d", m);
            }
            printf("\n");
        }
        for(i = n - 1; i >= 1; i--){
            printf("%d", m);
            for(j = 1; j <= i - 1; j++){
                printf(" %d", m);
            }
            printf("\n");
        }

        printf("\n");
    }

    return 0;
}