#include <stdio.h>
#include <string.h>
int main(){
    int i;
    int pkata;
    char box[100];
    scanf("%s", box);
    pkata = strlen(box);
    for ( i = pkata/2-1; i >= 0; i--)
    {
        printf("%c", box[i]);
    }
    printf("\n");
    for ( i = pkata-1; i >= pkata/2; i--)
    {
        printf("%c", box[i]);
    }
    
    return 0;
}