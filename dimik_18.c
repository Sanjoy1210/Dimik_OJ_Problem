#include <stdio.h>
#include <string.h>

int main()
{
    int i, len, t;

    scanf("%d", &t);

    while(t--){
        char word[101];
        scanf(" %[^\n]", word);

        len = strlen(word);

        for(i = 0; i < len; i++){
            if(word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U' || word[i] == 'a' || 
               word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'){
                   printf("%c", word[i]);
               }
        }
        printf("\n");

        for(i = 0; i < len; i++){
            if((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z')){
                if(word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u' && word[i] != 'A' && 
                   word[i] != 'E' && word[i] != 'I' && word[i] != 'O' && word[i] != 'U' && word[i] != ' '){
                       printf("%c", word[i]);
                   }
            }
        }
        printf("\n");
    }

    return 0;
}