#include <stdio.h>

int main()
{
    int t, i;
    long int n, temp, sum;

    scanf("%d", &t);

    while(t--){
        scanf("%ld", &n);
        sum = 0;

        while(n != 0){
            temp = n % 10;
            n = n / 10;

            sum = sum * 10 + temp;
        }
        printf("%ld\n", sum);
    }

    return 0;
}