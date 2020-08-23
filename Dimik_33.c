#include <stdio.h>

int main()
{
    int t;
    long i, n, x, y;

    scanf("%d", &t);

    while(t--){
        scanf("%ld %ld %ld", &x, &y, &n);

        for(i = x; i <= y; i++){
            if(i % n == 0){
                printf("%ld\n", i);
                i = i + n - 1;
            }
        }        
        printf("\n");
    }
    return 0;
}