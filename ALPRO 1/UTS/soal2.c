/*Saya Ghifari Octaverin 2000952 (arrlib20) mengerjakan UTS dalam
mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int tas1[n];
    int tas2[n];
    int i;
    int nilai;

    //mengisi array pertama
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &tas1[i]);
    }
    //mengisi array kedua
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &tas2[i]);
    }
    //untuk array ketiga
    int m;
    //jumlah berapa yang akan diswap
    scanf("%d", &m);
    int idx[m];
    //swap array
    for ( i = 0; i < m; i++)
    {
        scanf("%d", &idx[i]);
    }
    for ( i = 0; i < m; i++)
    {
        nilai = tas1[idx[i]];
        tas1[idx[i]] = tas2[idx[i]];
        tas2[idx[i]] = nilai;
    }
    //mengeluarkan nilai tukar
    //untuk baris pertama keluaran swap array
    for ( i = 0; i < n/2; i++)
    {
        if (i != 0)
        {
            printf(" ");
        }
        printf("%d %d", tas1[i], tas2[i]);
    }
    printf("\n");
    //untuk baris kedua keluaran swap array
    for ( i = n/2; i < n; i++)
    {
        if (i != n/2)
        {
            printf(" ");
        }
        printf("%d %d", tas1[i], tas2[i]);
    }
    printf("\n");
    return 0;
}