/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan UAS SOAL NO 1 |
   | dalam mata kuliah Algoritma dan Pemrograman              |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

string word[100]; //membuka tipe data terstruktur

void input(){ //prosedur input
    int i, j; //deklarasi variabel lokal
    scanf("%d", &many); //input banyak string
    for ( i = 0; i < many; i++) //looping sebanyak banyak string
    {
        scanf(" %s %s", &word[i].str1, &word[i].str2); //input string 1 dan 2
    }
}
void process(){ //prosedur process
    int i, j; //deklarasi variabel
    for ( i = 0; i < many; i++) //looping sebanyak input
    {
        word[i].len1=strlen(word[i].str1); //menampung panjang string 1
        word[i].len2=strlen(word[i].str2); //menampung panjang string 2
    }
}

void output(){ //prosedur output
    int i, j; //deklarasi variabel lokal
    for ( i = 0; i < many; i++) //looping sebanyak banyak string
    {
        if (word[i].len1 < word[i].len2) //jika panjang string 1 lebih kecil dari string 2
        {
            printf("%s < %s\n", word[i].str1, word[i].str2);
        }
        if (word[i].len1 == word[i].len2) //jika panjang string 1 sama dengan string 2
        {
            printf("%s = %s\n", word[i].str1, word[i].str2);
        }
        if (word[i].len1 > word[i].len2) //jika panjang string 1 lebih besar dari string 2
        {
            printf("%s > %s\n", word[i].str1, word[i].str2);
        }
    }
}