#include <stdio.h>
int main(){
    //mendeklarasikan variabel
    int baris, kolom, n;
    //meminta masukkan dari user
    scanf("%d", &n);
    //membuat pola
    for ( baris = n; baris >= 1; baris--)
    {
        for ( kolom = baris; kolom >= 1; kolom--)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}