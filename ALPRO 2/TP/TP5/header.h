/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP5           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include <stdio.h>      //library stdio.h

void quickSort(float decimal[], int left, int right, char mode, int top[], int bot[]);  //prosedur quick sort dengan pivot tengah
void bubbleSort(float decimal[], int count, char mode, int top[], int bot[]);           //prosedur bubble sort
void printResult(int count, int top[], int bot[]);                                      //prosedur print hasil akhir