#include <stdio.h>
#include <string.h>

int main(){
    int n, i;
    scanf("%d", &n);
    char input[n][100];
    for ( i = 0; i < n; ++i)
    {
        scanf("%s", &input[i]);
    }
    printf("================\n");
    for ( i = 0; i < n; ++i)
    {
        printf("%s\n", input[i]);
    }
    return 0;
}