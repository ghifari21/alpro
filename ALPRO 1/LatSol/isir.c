#include <stdio.h>
int main(){
    int isi[5];
    int i;

    for ( i = 0; i < 5; i++)
    {
        isi[i]=i;
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%d", isi[i]);
    }
    
    return 0;
}