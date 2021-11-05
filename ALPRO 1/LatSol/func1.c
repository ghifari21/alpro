#include <stdio.h>

int checkvocal(char a){
    int i=0;
    if (a == 'a' || a == 'i' || a == 'u' || a == 'e' || a == 'o')
    {
        i=1;
    }
    return i;
}

int main(){
    char x;
    scanf(" %c", &x);
    if (checkvocal(x) == 1)
    {
        printf("mantep\n");
    }
    else
    {
        printf("ga asuy\n");
    }
    return 0;
}