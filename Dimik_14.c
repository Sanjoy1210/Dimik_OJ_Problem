#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, len, j, count;
    char a[10002], b[2];

    scanf("%d", &t);

    for(i = 1; i <= t; i++){
        scanf(" %[^\n]", a);
        scanf("%s", b);

        len = strlen(a);
        count = 0;

        for(j = 0; j < len; j++){
            if(b[0] == a[j]) count++;
        }

        if(count > 0) printf("Occurrence of '%s' in '%s' = %d\n", b, a, count);
        else printf("'%s' is not present\n", b);
    }

    return 0;
}