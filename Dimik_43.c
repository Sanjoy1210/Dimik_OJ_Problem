#include <stdio.h>

int main()
{
    int t, p, q, c, i, result;

    scanf("%d", &t);

    while(t--){
        scanf("%d %d %d", &p, &q, &c);
        result = 1;

        for(i = 1; i <= q; i++){
            result = (result * p) % c;
        }
        
        printf("Result = %d\n", result);
    }
    return 0;
}