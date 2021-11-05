#include <stdio.h>
int main(){
    //mendeklarasikan variabel
    int n, baris, kolom, a;
    //meminta masukan dari user
    scanf("%d", &n);
    n=n*2;
    //membuat pola bagian atas
    for (baris = 1; baris <= n; baris++)
    {
        for ( kolom = 1; kolom <= baris; kolom++)
        {
            printf("*");
        }
        for (kolom = n-baris; kolom >= 1 ; kolom--)
        {
            printf(" ");
        }
        for ( kolom = n-baris; kolom >= 1; kolom--)
        {
            printf(" ");
        }
        for ( kolom = 1; kolom <= baris; kolom++)
        {
            printf("*");
        }
        for ( kolom = 2; kolom <= baris; kolom++)
        {
            printf("*");
        }
        for (kolom = n-baris; kolom >= 1 ; kolom--)
        {
            printf(" ");
        }
        for ( kolom = n-baris; kolom >= 1; kolom--)
        {
            printf(" ");
        }
        for ( kolom = 1; kolom <= baris; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
    //membuat pola bagian tengah
    for ( baris = 1; baris <= n/2 ; baris++)
    {
        for ( kolom = 1; kolom <= n+1; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 1; kolom <= n-2; kolom++)
        {
            printf("*");
        }
        for ( kolom = 1; kolom <= n-2; kolom++)
        {
            printf("*");
        }
        for ( kolom = 1; kolom <= 1; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
    //membuat pola bagian bawah
    for ( baris = 1; baris <= n/2; baris++)
    {
        for ( kolom = 1; kolom <= n+1; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 1; kolom <= n-4; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 1; kolom <= (n/2)+1; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 2; kolom <= baris; kolom++)
        {
            printf(" ");
        }
        for ( kolom = (n/2)-baris+1; kolom >= 1; kolom--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}