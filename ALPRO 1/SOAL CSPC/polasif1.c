#include <stdio.h>
int main(){
    //mendeklarasikan variabel yang akan digunakan
    int baris, kolom, n;
    //meminta masukan dari user untuk besar pola
    scanf("%d", &n);

    //membuat pola bagian atas
    //================POLA ATAS PERTAMA===================
    for ( baris = 0; baris < n-1; baris++)
    {
        for ( kolom = 0; kolom < baris; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf("*");
        }
        for ( kolom = n-baris-1; kolom > 0 ; kolom--)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf("*");
        }
        for ( kolom = n-baris; kolom > 0; kolom--)
        {
            printf("*");
        }
        printf("\n");
    }
    //================POLA ATAS KEDUA===================
    for ( baris = 0; baris < 1; baris++)
    {
        for ( kolom = 0; kolom < n-1; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < n*3; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
    //membuat pola bagian tengah
    //================POLA TENGAH PERTAMA===================
    for ( baris = 0; baris < n-1; baris++)
    {
        for ( kolom = 0; kolom < n-1; kolom++)
        {
            printf(" ");
        }
        for ( kolom = n-baris-1; kolom > 0; kolom--)
        {
            printf("*");
        }
        for ( kolom = 0; kolom < baris+1; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < n; kolom++)
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
        printf("\n");
    }
    //membuat pola bagian bawah
    //================POLA BAWAH PERTAMA===================
    for ( baris = 0; baris < n; baris++)
    {
        for ( kolom = 0; kolom < n-1; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < baris+1; kolom++)
        {
            printf("*");
        }
        for ( kolom = n-baris; kolom > 0; kolom--)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < n-2; kolom++)
        {
            printf(" ");
        }
        for ( kolom = n-baris; kolom > 0; kolom--)
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