#include <stdio.h>
//membuat bungkusan
typedef struct{
    int penyebut, pembilang;
}pecahan;
int main(){
    //membuat bungkusan didalam main
    pecahan a1, a2, a3;

    //meminta masukan dari user
    printf("masukan nilai pembilang penyebut pecahan pertama :\n");
    scanf("%d %d", &a1.pembilang, &a1.penyebut);
    printf("masukan nilai pembilang penyebut pecahan kedua :\n");
    scanf("%d %d", &a2.pembilang, &a2.penyebut);

    //operasi menghitung pecahan
    a3.penyebut = a1.penyebut * a2.penyebut;
    a3.pembilang = (a1.pembilang * a2.penyebut) + (a2.pembilang * a1.penyebut);

    //menampilkan hasil operasi
    printf("hasil penjumlahan pecahan adalah pembilang : %d penyebut : %d\n", a3.pembilang, a3.penyebut);

    return 0;
}