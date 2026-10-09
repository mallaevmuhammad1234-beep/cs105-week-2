#include <ctype.h>
#include <stdio.h>
#include <string.h>

int size(char key[]){
    int a = 0;
    while (key[a] != '\0'){
        a++;
    }
    return a;
}

char substitute(char c){
    char ABC[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char abc[27] = "abcdefghijklmnopqrstuvwxyz";
    char sub[27] = "NQXPOMAFTRHLZGECYJIUWSKDVB";
    if (c>='a' && c<='z'){
        for(int i=0;i<26;i++){
            if (c==abc[i]){
                c = tolower((unsigned char)sub[i]);
                break;
            }
        }
    }
    else if (c>='A' && c<='Z'){
        for(int i=0;i<26;i++){
            if (c==ABC[i]){
                c = toupper((unsigned char)sub[i]);
                break;
            }
        }
    }
    return c;
}

int main()
{
    char key[100];
    char result[100];
    int sz;
    printf("plaintext: ");
    scanf("%99s", key);
    sz=size(key);
    for (int a=0;a<sz;a++){
        result[a]=substitute(key[a]);
    }
    result[sz]='\0';
    printf("ciphertext: %s", result);

    return 0;
}