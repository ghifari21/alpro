/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan KUIS 2        |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

int main(){
   int i, count, pricePerGram[50], search;
   //  ^ ---------------------------------> iterator
   //     ^ ------------------------------> banyaknya input
   //             ^ ----------------------> harga per gram
   //                               ^ ----> harga per gram yang dicari
   kurma arr[50]; //array of bungkusan
   char stringStatus[100]; //status premium kurma

   scanf("%d", &count);          //input input banyaknya kurma
   for ( i = 0; i < count; i++)  //looping input
   {
      scanf("%s %d %d %s", &arr[i].name, &arr[i].weight, &arr[i].price, &stringStatus);   //input
      if (strcmp(stringStatus, "premium") == 0) //jika input status kurma adalah "premium"
      {
         arr[i].status = 1;   //maka integer status array of bungkusan nilainya adalah 1
      }else                                     //jika input status kurma bukan "premium"
      {
         arr[i].status = 0;   //maka integer status array of bungkusan nilainya adalah 0
      }
      pricePerGram[i] = arr[i].price / arr[i].weight; //menghitung harga per gram
   }
   scanf("%d", &search);   //meminta input harga per gram yang dicari
   
   insertionSort(count, arr, pricePerGram);              //menjalankan prosedur insertionSort
   int idx = binarySearch(count, search, pricePerGram);  //nilai idx adalah nilai return dari binarySearch

   if (idx == -1) //jika nilai idx adalah -1
   {
      printf("tidak ditemukan\n");
   }else //jika nilai idx adalah selain dari -1
   {
      //print out
      printf("nama kurma: %s\n", arr[idx].name);
      printf("berat: %d gram\n", arr[idx].weight);
      printf("harga: %d\n", arr[idx].price);
      printf("harga per berat: %d\n", pricePerGram[idx]);
      printf("status premium: ");
      if (arr[idx].status == 1)  //jika status kurma adalah premium
      {
         printf("ya\n");
      }else                      //jika status kurma bukan premium
      {
         printf("tidak\n");
      }
   }

   return 0;
}