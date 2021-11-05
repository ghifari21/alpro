/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan KUIS 2        |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include <stdio.h>   //library stdio.h
#include <string.h>  //library string.h

typedef struct
{
   char name[100];   //string untuk nama kurma
   int weight;       //untuk berat kurma
   int price;        //untuk harga kurma
   int status;       //untuk status premium kurma
}kurma;  //array of bungkusan

int binarySearch(int count, int search, int pricePerGram[]);      //fungsi binarySearch
void insertionSort(int count, kurma arr[], int pricePerGram[]);   //prosedur insertionSort