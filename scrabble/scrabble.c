#include <ctype.h>
#include <stdio.h>

int compute_score(const char word[]){
    int l,z,wr;
    const int LETTERS_POINTS[26]={1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    l=0;
    z=0;
    wr=0;
    while(word[z] != '\0'){
        l++;
        z++;
    }
    for(int i=0;i<l;i++){
        if (word[i]>='A' && word[i]<='Z'){
            wr=wr+(LETTERS_POINTS[word[i] - 'A']);
        }
        else if (word[i]>='a' && word[i]<='z'){
            wr=wr+(LETTERS_POINTS[word[i] - 'a']);
        }
    }

    return wr;
}

int main(void)
{ 
    int x,y;
    
    char a[100];
    char b[100];
    printf("Player 1: ");
    scanf("%99s",&a);
    printf("Player 2: ");
    scanf("%99s",&b);
    x=compute_score(a);
    y=compute_score(b);
    if (x>y){
        printf("Player 1 wins!\n");
    }
    else if (x<y){
        printf("Player 2 wins!\n");
    }
    else if (x==y){
        printf("Tie!\n");
    }

    return 0;
}