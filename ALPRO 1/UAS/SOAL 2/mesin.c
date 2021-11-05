/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan UAS SOAL NO 2 |
   | dalam mata kuliah Algoritma dan Pemrograman              |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

data dim[100]; //membuka tipe data terstruktur

void input(){ //prosedur input
    int i, j; //deklarasi variabel lokal
    scanf("%d", &many); //input banyaknya string dan integer
    for ( i = 0; i < many; i++) //looping sebanyak input
    {
        scanf("%d %d %s", &dim[i].len, &dim[i].wid, &dim[i].dimension); //masukan berupa string dan integer
    }
}

void process(){ //prosedur process
    int i, j; //deklarasi variabel
    max=0; //nilai awal max
    for ( i = 0; i < many; i++) //looping sebanyak inputan awal
    {
        if (strcmp(dim[i].dimension, "segitiga") == 0) //jika string masukan sama dengan "segitiga"
        {
            dim[i].result = (dim[i].len * dim[i].wid) / 2; //maka akan menghitung luas segitiga
        }
        if (strcmp(dim[i].dimension, "persegi") == 0) //jika string masukan sama dengan "persegi"
        {
            dim[i].result = dim[i].len * dim[i].wid; //maka akan menghitung luas persegi
        }
        if (dim[i].result > max) //jika luas lebih besar dari max
        {
            max=dim[i].result; //nilai luas akan dimasukan ke max
        }
    }
}

void output(){
    int i, j; //deklarasi variabel lokal
    for ( i = 0; i < many; i++) //looping sebanyak inputan awal
    {
        printf("%0.2f\n", dim[i].result); //output luas
    }
    printf("maksimal: %0.2f\n", max); //output luas maksimal
}