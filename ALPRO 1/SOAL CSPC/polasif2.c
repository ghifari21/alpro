#include <stdio.h>
int main(){
    //mendeklarasikan variabel
    int baris, kolom, n;
    //meminta masukan dari user
    scanf("%d", &n);
    //membuat pola bagian atas
    //============BAGIAN ATAS PERTAMA==================
    for ( baris = 0; baris < 1; baris++)
    {
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf("*");
        }
        for ( kolom = 0; kolom < (n*2)-2; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
    //============BAGIAN ATAS KEDUA=====================
    for ( baris = 0; baris < n-1; baris++)
    {
        for ( kolom = n-baris-2; kolom > 0 ; kolom--)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < baris+1; kolom++)
        {
            printf("*");
        }
        for ( kolom = 0; kolom < n+1; kolom++)
        {
            printf("*");
        }
        for ( kolom = 0; kolom < (n*2)-3; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < baris+2; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
    //membuat pola bagian tengah
    //==================BAGIAN TENGAH PERTAMA==================
    for ( baris = 0; baris < n-1; baris++)
    {
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 1; kolom < baris+1; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf("*");
        }
        for ( kolom = n-1-baris; kolom > 0; kolom--)
        {
            printf(" ");
        }
        for ( kolom = n-2-baris; kolom > 0; kolom--)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
    //==================BAGIAN TENGAH KEDUA==================
    for ( baris = 0; baris < 1; baris++)
    {
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < n-1; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < (n*2)-1; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
    //membuat pola bagian bawah
    //==================BAGIAN BAWAH PERTAMA==================
    for ( baris = 0; baris < n; baris++)
    {
        for ( kolom = n-baris; kolom > 0; kolom--)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf("*");
        }
        for ( kolom = 0; kolom < baris+1; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < (n*2)-5; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < baris+1; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}