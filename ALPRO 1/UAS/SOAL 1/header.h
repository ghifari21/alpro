/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan UAS SOAL NO 1 |
   | dalam mata kuliah Algoritma dan Pemrograman              |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include <stdio.h>
#include <string.h>

typedef struct //tipe data terstuktur
{
   char str1[100]; //menampung string 1
   char str2[100]; //menampung string 2
   int len1; //menampung panjang string 1
   int len2; //menampung panjang string2 
}string;

int many; //banyak masukan

void input(); //prosedur input
void process(); //prosedur process
void output(); //prosedur output