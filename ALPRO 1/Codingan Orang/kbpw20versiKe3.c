/* 	(KBPW20) Kamus Besar Perusahaan While

	Saya Hilman Fauzi Herdiana 2000879 mengerjakan Tugas Praktikum 8 dalam mata kuliah Algoritma dan Pemrograman.
	Untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <string.h>

//deklarasi bungkusan
typedef struct{
    char kataIn[100]; 
    char kataOut[100];
}bungkusan;

int main(){

    //deklarasi variabel
    int i, j, k, l, n, len, lenkata;
    n=0, len=0;
    char diubah[100], pengubah[100];
    //char kataIn[100][100], kataOut[100][100];

    //deklrasi variabel bungkus
    bungkusan bungkus[100];
    
    //input terus dilakukan jika tidak ada kata "santuy"
    do
    {
        scanf("%s", bungkus[n].kataIn);
        if (strcmp(bungkus[n].kataIn, "santuy") != 0)
        {
            scanf(" %c", &diubah[n]);
            scanf(" %c", &pengubah[n]);
            n++; len++;
        }
    } while (strcmp(bungkus[n].kataIn, "santuy") != 0);
    
    i = 0;
    while (i < len)
    {
        //lenkata = strlen(bungkus[i].kataIn);
        j=0, k=0;
        while (j < strlen(bungkus[i].kataIn))
        {
            //ika huruf pengubah ada pada string input dan posisinya mendahului posisi huruf yang diubah, maka huruf tidak bisa diubah
            if ((bungkus[i].kataIn[j] != diubah[i]) && (bungkus[i].kataIn[j] != pengubah[i]))
            {
                bungkus[i].kataOut[j] = bungkus[i].kataIn[j];
            }
            //jika huruf yang diubah ada dibelakang huruf pengubah yang sudah ada sebelumnya
            if ((bungkus[i].kataIn[j] == diubah[i]))
            {
                bungkus[i].kataOut[j] = diubah[i];
            }
            //Jika huruf pengubah ada pada string input dan posisinya didahului oleh 1 atau lebih huruf yang 
            //diibah atau  huruf pengubah tidak ada pada string input, lalu langusng diubah
            if ((bungkus[i].kataIn[j] == diubah[i]))
            {
                bungkus[i].kataOut[j] = pengubah[i];
            }
            j++;
        }
        i++;
    }
   
    //test menampilkan output
    printf("===========\n");
    i=0;
    while (i < len)
    {
        printf("%s\n", bungkus[i].kataOut);
        i++;
    }
    
    
    return 0;
}