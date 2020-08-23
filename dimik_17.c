#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, len, j, count;
    char word[1002];
    char vowel[5] = {'a', 'e', 'i', 'o', 'u'};

    scanf("%d", &t);

    while(t--){
        scanf(" %[^\n]", word);

        len = strlen(word);
        count = 0;

        for(i = 0; i < len; i++){
            for(j = 0; j < 5; j++){
                if(word[i] >= 65 && word[i] <= 90){
                    word[i] = 'a' + (word[i] - 'A');
                    if(word[i] == vowel[j]){
                        count++;
                    }
                }

                else{
                    if(word[i] == vowel[j]){
                        count++;
                    }
                }
            }
        }
        printf("Number of vowels = %d\n", count);
    }

    return 0;
}