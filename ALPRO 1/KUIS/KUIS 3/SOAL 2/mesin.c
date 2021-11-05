/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan KUIS 3 SOAL 2 |
   | dalam mata kuliah Algoritma dan Pemrograman              |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

void input(){ //prosedur input
   int i; //deklarasi iterator
   scanf("%d", &many); //input untuk banyak string
   for ( i = 0; i < many; i++) //looping untuk input array of string 1
   {
      scanf("%s", &word1[i]); //input string
      lenword1[i]=strlen(word1[i]); //memasukan panjang string
   }
   for ( i = 0; i < many; i++) //looping untuk input array of string 2
   {
      scanf("%s", &word2[i]); //input string
      lenword2[i]=strlen(word2[i]); //memasukan panjang string
   }
   scanf("%d", &overlap); //input overlap
}
void output(){ //prosedur output
   int i, j, space=0, k=0; //deklarasi variabel
   for ( i = 0; i < many; i++) //looping sebanyak banyak string
   {
      for ( j = 0; j < space; j++) //looping untuk spasi
      {
         printf(" ");
      }
      printf("%s\n", word1[i]); //output string 1
      space+=lenword1[i]-overlap; //spasi akan bertambah dengan panjang string 1 dikurang overlap
      for ( j = 0; j < space; j++) //looping untuk spasi
      {
         printf(" ");
      }
      printf("%s\n", word2[i]); //output string 2
      space+=lenword2[i]-overlap; //spasi akan bertambah dengan panjang string 1 dikurang overlap
   }
}