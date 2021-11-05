/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan UTS           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include <stdio.h>      //library stdio.h
#include <string.h>     //library string.h

typedef struct
{
   char countryName[100];  //variabel untuk menampung nama negara tiap desserts
   char name[100];         //variabel untuk menampung nama desserts
   int calorie;            //variabel untuk menampung jumlah kalori
   int gram;               //variabel untuk menampung berat desserts dalam gram
   int price;              //variabel untuk menampung harga desserts
   float calPerGram;       //variabel untuk menampung kalori per gram
}country;

void mergeSorted(int n, country arr1[], int m, country arr2[], country arr3[]);  //prosedur merge array secara terurut
void insertionSort(int count, country arr[]);                                    //prosedur insertionsort
void selectionSort(int count, country arr[]);                                    //prosedur selectionsort
void bubbleSort(int count, country arr[]);                                       //prosedur bubblesort
void quickSort(country arr[], int left, int right);                              //prosedur quicksort