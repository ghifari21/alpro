#include <stdio.h>
int main(){
    int n;
    int i;
    printf("masukan panjang array : ");
    scanf("%d", &n);
    int tab[n];
    float jumlah = 0;
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
        jumlah = jumlah + tab[i];
    }

    float hasil;
    hasil= (float) jumlah/n;
    printf("rata rata dari semua elemen array : %f", hasil);    
    return 0;
}