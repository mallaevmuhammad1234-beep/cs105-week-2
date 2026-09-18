#include <stdio.h>

int main()
{
    int x;
    scanf("%i", &x);
    int a=1;
    for(int i=1;i<=x;i++){
        a*=i;
    }
    printf("%i\n", a);

    return 0;
}