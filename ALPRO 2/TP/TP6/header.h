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

char tempSongName1[100][100], tempSongName2[100][100], tempSongName3[100][100];     //variabel global untuk menampung sementara array of string

void mergeSorted(int n, float duration1[], int m, float duration2[], float duration3[], char mode);     //prosedur merge array terurut
void quickSort(float duration[], int left, int right, char mode);                                       //prosedur quick sorting
void bubbleSort(int count, float duration[], char mode);                                                //prosedur bubble sorting
void insertionSort(int count, float duration[], char mode);                                             //prosedur insertion sorting
void selectionSort(int count, float duration[], char mode);                                             //prosedur selection sorting
void pritnOutput(int count, float duration[], int countIbnu);                                           //prosedur printOutput