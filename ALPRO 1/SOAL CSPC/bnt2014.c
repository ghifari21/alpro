#include <stdio.h>
int main(){
    //mendeklarasikan variabel yang akan digunakan
    int kolom, baris, n;
    //meminta masukan dari user
    scanf("%d", &n);

    //membuat pola bagian atas
    //====================POLA BAGIAN ATAS PERTAMA====================
    for ( baris = 0; baris < n; baris++)
    {
        for ( kolom = 0; kolom < baris+1; kolom++)
        {
            printf("*");
        }
        for ( kolom = n-baris-1; kolom > 0; kolom--)
        {
            printf(" ");
        }
        for ( kolom = n-baris-1; kolom > 0; kolom--)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < baris+1; kolom++)
        {
            printf("*");
        }
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf("*");
        }
        for ( kolom = 0; kolom < baris+1; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
    //membuat pola bagian tengah
    //====================POLA BAGIAN TENGAH PERTAMA====================
    for ( baris = 0; baris < n-1; baris++)
    {
        for ( kolom = n-baris-1; kolom > 0; kolom--)
        {
            printf("*");
        }
        for ( kolom = 0; kolom < baris+1; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < baris+1; kolom++)
        {
            printf(" ");
        }
        for ( kolom = n-baris-1; kolom > 0; kolom--)
        {
            printf("*");
        }
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf("*");
        }
        for ( kolom = n-baris-1; kolom > 0; kolom--)
        {
            printf("*");
        }
        printf("\n");
    }
    //membuat pola bagian bawah
    //====================POLA BAGIAN BAWAH PERTAMA====================
    for ( baris = 0; baris < n; baris++)
    {
        for ( kolom = 0; kolom < baris+1; kolom++)
        {
            printf("*");
        }
        for ( kolom = n-baris-1; kolom > 0; kolom--)
        {
            printf(" ");
        }
        for ( kolom = n-baris-1; kolom > 0; kolom--)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < baris+1; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}