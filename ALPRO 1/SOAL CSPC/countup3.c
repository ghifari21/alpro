#include <stdio.h>//membuka library stdio.h
int main(){
    //mendeklarasikan variabel yang akan digunakan
    int berapakali, hasiljumlah, penghitung;
    hasiljumlah=1;
    //meminta masukan dari user
    printf("masukan angka faktorial\n");
    scanf("%d", &berapakali);
    printf("\n");
    //menghitung faktorial yang telah dimasukan oleh user
    for (penghitung = 1; penghitung <= berapakali; penghitung++)
    {
        hasiljumlah=hasiljumlah*penghitung;
    }

    printf("hasilnya adalah %d\n", hasiljumlah);

    return 0;
}