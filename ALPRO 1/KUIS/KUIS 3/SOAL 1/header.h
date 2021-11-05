/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan KUIS 3 SOAL 1 |
   | dalam mata kuliah Algoritma dan Pemrograman              |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include <stdio.h>
#include <string.h>

int n1, n2; //banyak string
char word1[100][100]; //array of string 1
char word2[100][100]; //array of string 2
char subword[100]; //sub kata
char temp[100];

void input(); //prosedur input
void processing();
int checking(); //fungsi pengecekan
void output(); //prosedur output