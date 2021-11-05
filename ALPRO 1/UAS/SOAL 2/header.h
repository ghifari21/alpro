/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan UAS SOAL NO 2 |
   | dalam mata kuliah Algoritma dan Pemrograman              |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include <stdio.h>
#include <string.h>

typedef struct //tipe data terstuktur
{
   char dimension[100]; //string masukan segitiga atau persegi
   int len; //panjang / alas
   int wid; //lebar / tinggi
   float result; //hasil luas
}data;

float max; //memapung luas maksimal
int many; //banyaknya string dan integer masukan

void input(); //prosedur input
void process(); //prosedur process
void output(); //prosedur output