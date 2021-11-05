#include <stdio.h>
int main(){
    //deklarasi variabel yang akan digunakan
    int kolom, baris, n;
    //meminta masukan dari user
    scanf("%d", &n);
    //membentuk pola dari masukan user untuk bagian atas
    for (baris = 1; baris <= n; baris++)
    {
        for (kolom = n-baris; kolom >=1 ; kolom--)
        {
            printf(" ");
        }
        for (kolom = 1; kolom <= baris; kolom++)
        {
            printf("*");
        }
        for (kolom = 2; kolom <= baris; kolom++)
        {
            printf("*");
        }
        for (kolom = n-baris; kolom >= 1; kolom--)
        {
            printf(" ");
        }
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for (kolom = n-baris; kolom >= 1 ; kolom--)
        {
            printf("*");
        }
        
        printf("\n");
    }
    //bagian bawah
    for (baris = 1; baris <= n-1; baris++)
    {
        for ( kolom = 1; kolom <= baris; kolom++)
        {
            printf(" ");
        }
        for ( kolom = n-baris; kolom >= 1; kolom--)
        {
            printf("*");
        }
        for ( kolom = n-1-baris; kolom >= 1; kolom--)
        {
            printf("*");
        }
        
        for ( kolom = 1; kolom <= baris ; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for ( kolom = 1; kolom <= baris; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}