/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan KUIS 3 SOAL 1 |
   | dalam mata kuliah Algoritma dan Pemrograman              |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

void input(){ //prosedur input
   int i; //iterator
   scanf("%d", &n1); //banyak string 1
   for ( i = 0; i < n1; i++) //looping untuk input string 1
   {
      scanf("%s", &word1[i]); //input string
   }
   scanf("%d", &n2); //banyak string 2
   for ( i = 0; i < n2; i++) //looping untuk input string 2
   {
      scanf("%s", &word2[i]); //input string
   }
   scanf("%s", &subword); //input subkata
}

void processing(){
   
}

int checking(){ //fungsi pengecekan

}

void output(){ //prosedur output
   printf("%d\n", checking()); //outpur banyak kata yang sama
}