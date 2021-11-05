/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP6           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include <stdio.h>      //library stdio.h
#include <string.h>     //library string.h

typedef struct          //tipe data terstuktur
{
   char title[100];     //variabel string untuk menyimpan judul lagu
   float duration;      //variabel float untuk menyimpan durasi
}song;

void mergeSorted(int n, song arr1[], int m, song arr2[], song arr3[], char mode);   //prosedur merge array terurut
void quickSort(song arr[], int left, int right, char mode);                         //prosedur quick sorting
void bubbleSort(int count, song arr[], char mode);                                  //prosedur bubble sorting
void insertionSort(int count, song arr[], char mode);                               //prosedur insertion sorting
void selectionSort(int count, song arr[], char mode);                               //prosedur selection sorting
void printOutput(int count, song arrMerge[], song ibnu[], int countIbnu);           //prosedur printOutput