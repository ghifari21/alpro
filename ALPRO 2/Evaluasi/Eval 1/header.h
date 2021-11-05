/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan Evaluasi      |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include <stdio.h>      //library stdio.h
#include <string.h>     //library string.h

typedef struct
{
   char name[100];      //variabel char penampung string nama
   int grade1, grade2;  //variabel int penampung nilai 1 dan 2
}student;

void mergeSorted(int n, student arr1[], int m, student arr2[], student arr3[]);  //prosedur merge array secara terurut
void selectionSort(int count, student arr[]);                                    //prosedur selectionsort
void printOutput(int count, student arr[]);                                      //prosedur output