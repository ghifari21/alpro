#include <stdio.h>
int main(){
    //mendeklarasikan variabel
    int baris, kolom, n;
    //meminta masukkan dari user
    scanf("%d", &n);
    //membuat pola
    for ( baris = 1; baris <= n; baris++)
    {
        for ( kolom = n-baris+1; kolom >= 1; kolom--)
        {
            printf(" ");
        }
        for ( kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    printf("\n");

    return 0;
}