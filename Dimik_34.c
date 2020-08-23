#include <stdio.h>

int main()
{
    int t;
    long int i, n, x, y, a;

    scanf("%d", &t);

    while(t--){
        scanf("%ld %ld %ld", &x, &y, &n);

        for(i = x; i <= n; i += 1){
            if(i % x == 0 && i % y == 0){
                printf("%ld\n", i);
            }
        }
        if(t != 0) printf("\n");
    }

    return 0;
}