#include <stdio.h>

long long int fact(int a)
{
    long long int product = 1, i;

    for(i = 2; i <= a; i++){
        product *= i;
    }
    return product;
}

int main()
{
    int t;
    long long int n, i;

    scanf("%d", &t);

    while(t--){
        
        scanf("%lld", &n);

        double result = 0.0;
        
        for(i = 1; i <= n; i++){
            result += ((double) i / fact(i));
        }

        printf("%.4lf\n", result);
    }

    return 0;
}