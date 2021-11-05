/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP3           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"        //library header.h

int count(int n){          //fungsi count
   if (n == 0)             //jika n bernilai 0
   {
      return zeroHour;     //maka akan mereturn nilai dari zeroHour
   }else if (n == 1)       //atau jika n bernilai 1
   {
      return firstHour;    //maka akan mereturn nilai dari firstHour
   }else                   //atau jika n bernilai > 1
   {
      return ((2 * count(n-1)) + (count(n-2) * count(n-2)));   //maka akan mereturn rekursif dengan rumus berikut
   }
}