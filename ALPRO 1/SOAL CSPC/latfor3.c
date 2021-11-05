#include <stdio.h>
int main(){
    //mendeklarasikan variabel
    int baris, kolom, n;
    //meminta masukkan dari user
    scanf("%d", &n);
    //membuat pola bagian atas
    for ( baris = 1; baris <= n; baris++)
    {
        for ( kolom = n - baris + 1; kolom >= 1; kolom--)
        {
            printf(" ");
        }
        for ( kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
    //membuat pola bagian bawah
    for ( baris = 2; baris <= n; baris++)
    {
        for ( kolom = 1; kolom <= baris; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}