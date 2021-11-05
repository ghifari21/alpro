#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    scanf("%s", &str);
    int i, jumlah=0;
    for ( i = 0; i < strlen(str); i++)
    {
        if ((str[i] >= 0) && (str[i] <= 9))
        {
            jumlah++;
        }
        
    }
    printf("%d", jumlah);
    
    return 0;
}