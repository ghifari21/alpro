/*Saya Ghifari Octaverin 2000952 mengerjakan TP4 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
#include <stdio.h>//menggunakan library stdio.h
int main(){
    //mendeklarasikan variabel yang akan digunakan
    int kolom, baris;//penentu kolom dan baris
    int n;//integer penentu pola
    char c;//kode
    int b;//kode
    b=0;

    //meminta masukan dari user
    scanf("%d", &n);//masukan penentu pola
    scanf(" %c", &c);//masukan kode
    
    //memeriksa masukan huruf vokal atau bukan
    if ((c == 'a') || (c == 'A') || (c == 'i') || (c == 'I')
        || (c == 'u') || (c == 'U') || (c == 'e') || (c == 'E')
        || (c == 'o') || (c == 'O'))
    {
        b=1;
    }
    
    //membuat pola berdasarkan masukan dari user
    //membuat cangkir bagian atas
        //membuat bagian atas pertama
    for ( baris = 1; baris <= 1; baris++)
    {
        for ( kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        if (b==1)//menentukan cangkir terisi penuh atau setengah
        {
            for ( kolom = 1; kolom <= n*4; kolom++)
            {
                printf(" ");
            }
        }else
        {
            for ( kolom = 1; kolom <= n*2; kolom++)
            {
                printf(".,");
            }
        }
        for ( kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for ( kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        
        printf("\n");
    }
        //membuat bagian atas kedua
    for ( baris = 1; baris <= n-2; baris++)
    {
        for ( kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        if (b==1)//menentukan cangkir terisi penuh atau setengah
        {
            for ( kolom = 1; kolom <= n*4; kolom++)
            {
                printf(" ");
            }
        }else
        {
            for ( kolom = 1; kolom <= n*2; kolom++)
            {
                printf(".,");
            }
        }
        for ( kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for ( kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 1; kolom <= 1; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
        //membuat bagian atas ketiga
    for ( baris = 1; baris <= 1; baris++)
    {
        for ( kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        if (b==1)//menentukan cangkir terisi penuh atau tidak
        {
            for ( kolom = 1; kolom <= n*4; kolom++)
            {
                printf(" ");
            }
        }else
        {
            for ( kolom = 1; kolom <= n*2; kolom++)
            {
                printf(".,");
            }
        }
        for ( kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for ( kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    //membuat cangkir bagian bawah
        //membuat bagian bawah pertama
    for ( baris = 1; baris <= n-1; baris++)
    {
        for ( kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 1; kolom <= baris; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 2; kolom <= baris; kolom++)
        {
            printf(" ");
        }
        for ( kolom = n-baris+1; kolom >= 1; kolom--)
        {
            printf("*");
        }
        for ( kolom = (n*2)-baris; kolom >= 1; kolom--)
        {
            printf(".,");
        }
        for ( kolom = n-baris+1; kolom >= 1; kolom--)
        {
            printf("*");
        }
        printf("\n");
    }
        //membuat bagian bawah kedua
    for ( baris = 1; baris <= 1; baris++)
    {
        for ( kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 1; kolom <= (n*2)-1; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 1; kolom <= (n*2)+2; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
    //membuat alas cangkir
        //bagian pertama
    for ( baris = 1; baris <= 1; baris++)
    {
        for ( kolom = 1; kolom <= n*8; kolom++)
        {
            printf("-");
        }
        printf("\n");
    }
        //bagian bawah
    for ( baris = 1; baris <= 1; baris++)
    {
        for ( kolom = 1; kolom <= 2; kolom++)
        {
            printf(" ");
        }
        for ( kolom = 1; kolom <= (n*8)-4; kolom++)
        {
            printf("-");
        }
        printf("\n");
    }
    
    return 0;//mengembalikan ke default
}