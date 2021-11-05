#include <stdio.h>
//membuat bungkusan
typedef struct
{
    int kecil;
    float besar;
    int masukan, nilai, isi;
}angka;
int main(){
//membuat bungkusan didalam main
angka pertama, kedua, ketiga;
    pertama.nilai=0;
    kedua.nilai=0;
    ketiga.nilai=0;
    //meminta masukan dari user
    scanf("%f %f %f", &pertama.besar, &kedua.besar, &ketiga.besar);
    scanf("%d %d %d", &pertama.kecil, &kedua.kecil, &ketiga.kecil);

    pertama.besar=pertama.nilai;
    kedua.besar=kedua.nilai;
    kedua.besar=kedua.nilai;
    pertama.masukan= pertama.besar*100 - pertama.nilai;
    kedua.masukan= kedua.besar*100 - kedua.nilai;
    ketiga.masukan= ketiga.besar*100 - ketiga.nilai;
    //memeriksa isi masukan dari user
    if (((pertama.masukan % pertama.kecil) == 0) || ((pertama.masukan % kedua.kecil) == 0)
    || ((pertama.masukan % ketiga.kecil) == 0))
    {
        pertama.nilai=1;
    }
    if (((kedua.masukan % pertama.kecil) == 0) || ((kedua.masukan % kedua.kecil) == 0)
    || ((kedua.masukan % ketiga.kecil) == 0))
    {
        kedua.nilai=1;
    }
    if (((ketiga.masukan % pertama.kecil) == 0) || ((ketiga.masukan % kedua.kecil) == 0)
    || ((ketiga.masukan % ketiga.kecil) == 0))
    {
        ketiga.nilai=1;
    }
    //menampilkan hasil
    if (pertama.nilai + kedua.nilai + ketiga.nilai >= 2)
    {
        printf("valid\n");
    }else
    {
        printf("tidak valid\n");
    }
    
    return 0;
}

