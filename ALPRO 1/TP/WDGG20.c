/*Saya Ghifari Octaverin 2000952 mengerjakan TP2
 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
#include <stdio.h>
int main(){
    //deklarasi variable
    int a, b, c, n1, n2, n3;
    int x, y, z;
    int diskon, harga, totalharga;

    //masukan dari user
    scanf("%d %d", &a, &n1);
    scanf("%d %d", &b, &n2);
    scanf("%d %d", &c, &n3);

    //memeriksa masukan makanan 1
    if(a == 1){
        x=3000;
    }else if(a == 2){
        x=2000;
    }else if(a == 3){
        x=15000;
    }else if(a == 4){
        x=12000;
    }else if(a == 5){
        x=10000;
    }else if(a == 6){
        x=8000;
    }
    //memeriksa masukan makanan 2
    if(b == 1){
        y=3000;
    }else if(b == 2){
        y=2000;
    }else if(b == 3){
        y=15000;
    }else if(b == 4){
        y=12000;
    }else if(b == 5){
        y=10000;
    }else if(b == 6){
        y=8000;
    }
    //memeriksa masukan minuman
    if(c == 1){
        z=4000;
    }else if(c == 2){
        z=7000;
    }else if(c == 3){
        z=5000;
    }


    //memeriksa diskon
    if(((n1 + n2) % 2 != 0) && (n3 % 2 == 0)){
        if(((x * n1) + (y * n2) + (z * n3)) <= 40000){
            diskon=25;
        }else{
            diskon=50;
        }
    }else if(((n1 + n2) % 2 == 0) && (n3 % 2 != 0)){
        if(((x * n1) + (y * n2) + (z * n3)) <= 40000){
            diskon=20;
        }else{
            diskon=40;
        }
    }else if((((n1 + n2) % 2 == 0) && (n3 % 2 == 0)
            || ((n1 + n2) % 2 != 0) && (n3 % 2 != 0))){
        if(((x * n1) + (y * n2) + (z * n3)) <= 25000){
            diskon=10;
        }else{
            diskon=20;
        }
    }

    //harga dan total harga
    harga = ((x * n1) + (y * n2) + (z * n3));
    totalharga = harga - ((harga * diskon) / 100);

    //keluaran
    printf("Harga       : %d\n", harga);
    printf("Anda Mendapat Potongan %d%%\n", diskon);
    printf("Total Harga : %d\n", totalharga);
    
    return 0;
}