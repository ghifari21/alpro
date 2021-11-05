/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP7           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include <stdio.h>      //library stdio.h
#include <string.h>     //library string.h

typedef struct
{
   char name[100];         //variabel char menampung string nama
   int activity;           //variabel integer menampung banyaknya kegiatan
   int activityGrade[50];  //variabel integer menampung nilai dari kegiatan
}data;

int checkSorted(float arr[], int count);                 //fungsi untuk mengecek apakah nilai rata rata sudah berurutan atau belum
void sorting(int count, float arr[], data student[]);    //prosedur sorting
void seqSearch(data student[], int count, int search);   //prosedur sequential search
void binSearch(data student[], int count, int search);   //prosedur binary search
void output(data student[], int count);                  //prosedur output