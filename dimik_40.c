#include <stdio.h>

int main()
{
    int t, x, k, i, result, power;

    scanf("%d", &t);

    while(t--){

        scanf("%d %d", &x, &k);

        result = 1, power = 1;

        for(i = 1; i <= k; i++){
            power = power * x;
            result += power;
        }

        printf("Result = %d\n", result);
    }
    return 0;
}