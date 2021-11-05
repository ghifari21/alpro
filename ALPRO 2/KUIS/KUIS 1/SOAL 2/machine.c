/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan KUIS 1        |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"     //LIBRARY HEADER.H

void recursive(unsigned long int m, unsigned long int n){
   unsigned long int count1, count2;     //deklarasi variabel
   count1=m;  //nilai m dimasukan ke count1
   count2=n;  //nilai n dimasukan ke count2
   if (count1 > 0)      //jika nilai count 1 bukan 0
   {
      printf("(%lu|%lu)\n", count1, count2);    //output count2 dan count2
      count1/=2;     //count1 akan dibagi 2
      count2*=2;     //count2 akan dikali 2
      recursive(count1, count2);    //memanggil prosedur recursive sebagai bentuk rekursif
   }
}