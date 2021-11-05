/*Saya Ghifari Octaverin 2000952 (polbin20) mengerjakan UTS dalam
mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
#include <stdio.h>
int main(){
    int kolom, baris, n;
    scanf("%d", &n);
    //membuat pola bagian atas
    //=========================POLA ATAS PERTAMA=================
    for ( baris = 0; baris < n; baris++)
    {
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf("*");
        }
        for ( kolom = 0; kolom < (n*5); kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
    //=======================POLA ATAS KEDUA============================
    for ( baris = 0; baris < n; baris++)
    {
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
        for ( kolom = 0; kolom < (n*3); kolom++)
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
    //membuat bagian tengah
    //=======================POLA TENGAH===========================
    for ( baris = 0; baris < n; baris++)
    {
        for ( kolom = 0; kolom < n; kolom++)
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
        
        for ( kolom = 0; kolom < (n*3); kolom++)
        {
            printf("*");
        }
        for ( kolom = 0; kolom < (n*3); kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
    //membuat bagian bawah
    //=============================POLA BAWAH PERTAMA================
    for ( baris = 0; baris < n; baris++)
    {
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
        for ( kolom = 0; kolom < (n*3); kolom++)
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
    //=======================POLA BAWAH KEDUA============================
    for ( baris = 0; baris < n; baris++)
    {
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < n; kolom++)
        {
            printf("*");
        }
        for ( kolom = 0; kolom < (n*5); kolom++)
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