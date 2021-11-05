/*
    Saya Ghifari Octaverin 2000952 mengerjakan TP6 
    dalam mata kuliah Algoritma dan Pemrograman
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin
*/
#include <stdio.h>
typedef struct
{
    char kode; //untuk kode file
    char biner[100]; //untuk gabungan biner nama dan kunci
    char nama[100]; //untuk biner nama
    int pnama; //untuk panjang biner nama
    int pbiner;
    int dec;
}data;
int main(){
    int i, n, j, k;
    scanf("%d", &n); //scan untuk banyaknya file
    data box[n]; //array tipe data terstruktur
    i=0;
    while (i<n)
    {
        scanf(" %c", &box[i].kode); //meminta masukan kode file
        j=0;
        while (box[i].nama[j-1] != ';')
        {
            scanf(" %c", &box[i].nama[j]); //meminta masukan nama file dalam biner
            j++;
        }
        box[i].pnama = j - 1; //untuk meyimpan panjang nama dan menghilangkan ';'

        /*for ( j = 0; box[i].nama[j] != ';'; j++)
        {
            printf("%c", box[i].nama[j]);
        }*/

        i++;
    }
    int kunci;
    scanf("%d", &kunci); //meminta masukan untuk kunci
    char bin[100]; //untuk menyimpan kunci dalam biner
    //konversi kunci menjadi biner
    i=0;
    while (kunci>0)
    {
        bin[i] = kunci % 2;
        kunci /= 2;
        i++;
    }
    int pkunci;
    pkunci = i;
    /*for ( j = pkunci-1; j >= 0; j--)
    {
        printf("%d", bin[j]);
    }*/
    i=0;
    while (i<n)
    {
        j=0;
        while (box[i].nama[j] != ';')
        {
            box[i].nama[j] -= 48;
            j++;
        }
        i++;
    }
    printf("Hasil Gabung:\n");
    //menggabungkan biner
    i=0;
    int index;
    while (i<n)
    {
        j=0;
        k=pkunci-1;
        index=0;
        while (j < pkunci+box[i].pnama) //panjang array gabungan
        {
            if (k> -1)
            {
                box[i].biner[j] = bin[k]; //untuk biner kunci
                printf("%d", box[i].biner[j]);
                k--;
                j++;
            }
            if (index<box[i].pnama)
            {
                box[i].biner[j] = box[i].nama[index]; //untuk biner nama
                printf("%d", box[i].biner[j]);
                index++;
                j++;
            }
        }
        printf("\n");
        box[i].pbiner = j;
        i++;
    }
   
    //konversi biner ke desimal
    i=0;
    int pangkat = 1;
    int l;
    while (i<n)
    {
        box[i].dec = 0;
        j = box[i].pbiner - 1;
        while (j > -1)
        {
            box[i].dec += (box[i].biner[j] * pangkat);
            pangkat *= 2;
            j--;
        }
        pangkat = 1;
        i++;
    }
    
    //menampilkan password
    printf("\n");
    printf("Password:\n");
    i=n-1;
    while (i>-1)
    {
        printf("%c", box[i].kode);
        i--;
    }
    i=0;
    while (i<n)
    {
        printf("-");
        printf("%d", box[i].dec);
        i++;
    }
    printf("\n");

    return 0;
}
//gcc PRPW20.c -o PRPW20.exe
