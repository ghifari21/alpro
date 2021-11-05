#include <stdio.h>
int main(){
    //mendeklarasikan variabel yang akan digunakan
    int kolom, baris, n;
    scanf("%d", &n);
    //membuat pola bagian atas
    //==================POLA ATAS PERTAMA====================
    for ( baris = 0; baris < 1; baris++)
    {
        for ( kolom = 0; kolom < (n*4)-1; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < (n*2); kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
    //=================POLA ATAS KEDUA=========================
    for ( baris = 0; baris < n-2; baris++)
    {
        for ( kolom = 0; kolom < n+1; kolom++)
        {
            printf(" ");
        }
        for ( kolom = n-baris-2; kolom > 0; kolom--)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < baris+1; kolom++)
        {
            printf("*");
        }
        for ( kolom = 0; kolom < baris; kolom++)
        {
            printf("*");
        }
        for ( kolom = n-baris-2; kolom > 0; kolom--)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < n+1; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < (n*2); kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
    //======================POLA ATAS KETIGA=====================
    for ( baris = 0; baris < 1; baris++)
    {
        for ( kolom = 0; kolom < n+1; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < (n*2)-3; kolom++)
        {
            printf("*");
        }
        for ( kolom = 0; kolom < n+1; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf("*");
        }
        for ( kolom = 0; kolom < n; kolom++)
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
    //==================POLA TENGAH PERTAMA======================
    for ( baris = 0; baris < 1; baris++)
    {
        for ( kolom = 0; kolom < (n*4)-1; kolom++)
        {
            printf("*");
        }
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf("*");
        }
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
    //==================POLA TENGAH KEDUA======================
    for ( baris = 0; baris < 1; baris++)
    {
        for ( kolom = 0; kolom < 1; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < (n*4)-3; kolom++)
        {
            printf("*");
        }
        for ( kolom = 0; kolom < 1; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf("*");
        }
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
    //membuat pola bagian bawah
    //==========================POLA BAWAH PERTAMA=====================
    for ( baris = 0; baris < n-1; baris++)
    {
        for ( kolom = 0; kolom < ; i++)
        {
            /* code */
        }
        
    }
    
    
    
    return 0;
}//gcc 2ut9.c -o 2ut9.exe