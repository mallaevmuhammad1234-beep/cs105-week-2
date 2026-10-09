#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int size(char word[]){
    int a = 0;
    while (word[a] != '\0'){
        a++;
    }
    return a;
}
char rotate(char c, int key){
    char a = c;
    if (c >= 'a' && c <= 'z'){
        a=(c-'a'+ key%26)%26+'a';
    }
    else if (c >= 'A' && c <= 'Z'){
        a=(c-'A' + key%26)%26+'A';
    }

    return a;
}

int main()
{
    char word[100];
    char result[size(word)+1];
    int b,sz;
    scanf("%i", &b);
    printf("plaintext: ");
    scanf("%99s", word);
    sz=size(word);
    for(int i=0;i<sz;i++){
        result[i] = rotate(word[i],b);
    }
    result[sz] = '\0';
    printf("ciphertext: %s", result);

    return 0;
}