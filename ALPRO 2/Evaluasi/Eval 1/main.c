/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan Evaluasi      |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

int main(){
   int i, n1, n2;             //variabel iterator dan banyaknya elemen array 1 dan 2

   scanf("%d", &n1);          //input banyaknya elemen array 1
   student groupOne[n1];      //deklarasi array of bungkusan 1
   for ( i = 0; i < n1; i++)  //looping untuk input nilai dari array of bungkusan 1
   {
      scanf("%s %d %d", &groupOne[i].name, &groupOne[i].grade1, &groupOne[i].grade2);  //input nama, nilai 1, dan nilai 2
   }
   selectionSort(n1, groupOne);  //diurutkan dengan metode selectionsort
   
   scanf("%d", &n2);          //input banyaknya elemen array 2
   student groupTwo[n2];      //deklarasi array of bungkusan 2
   for ( i = 0; i < n2; i++)  //looping untuk input nilai dari array of bungkusan 2
   {
      scanf("%s %d %d", &groupTwo[i].name, &groupTwo[i].grade1, &groupTwo[i].grade2);  //input nama, nilai 1, dan nilai 2
   }
   selectionSort(n2, groupTwo);  //diurutkan dengan metode selectionsort

   student mergeGroup[n1+n2];    //deklarasi array of bungkusan 3 untuk menampung gabungan dari array 1 dan 2
   mergeSorted(n1, groupOne, n2, groupTwo, mergeGroup);  //merge array dengan terurut

   printOutput(n1+n2, mergeGroup);  //menjalankan prosedur output

   return 0;
}