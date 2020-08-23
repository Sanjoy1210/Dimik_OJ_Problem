#include <stdio.h>
#include <math.h>

#define SIZE 100002
char prime[SIZE];

void sieve()
{
    int i, j, root;

    root = sqrt(SIZE);
    for(i = 2; i < SIZE; i++){
        prime[i] = i;
    }

    for(i = 2; i <= root; i++){
        for(j = 2; i * j <= SIZE; j++){
            prime[i * j] = 0;
        }
    }
}

int main()
{
    int t, n, num1, num2, root, count;
    sieve();

    scanf("%d", &t);

    while(t--){
        scanf("%d %d", &num1, &num2);

        count = 0;

        for(n = num1; n <= num2; n++){
            if(prime[n] != 0) count++;
        }

        printf("%d\n", count);
    }

    return 0;
}