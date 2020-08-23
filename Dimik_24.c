#include <stdio.h>

int main()
{
    int t, i, n;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        int ara[n];
        
        for(i = 0; i < n; i++){
            scanf("%d", &ara[i]);
        }

        printf("%d", ara[0]);

        for(i = 2; i < n; i += 2){
            printf(" %d", ara[i]);
        }
        printf("\n");
    }
    return 0;
}