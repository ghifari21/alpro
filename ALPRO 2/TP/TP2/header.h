/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP2           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include <stdio.h>              //LIBRARY STDIO.H
#include <string.h>             //LIBRARY STRING.H

typedef struct                  //Tipe data terstuktur matrix
{
    char name[100];                         //variable untuk menampung string
    int grade1, grade2, grade3;             //variable untuk menampung nilai
}data;

char search[100][100], target[100][100];    //variable global untuk menampung array of string kata yang akan diganti dan penggantinya

void dataSearch(int n, int m, data student[n][m], int count);   //prosedur untuk mencari string yang akan diganti dan pengganti nya dan langsung di swap
int checkingGrade(float avg1, float avg2);                      //fungsi untuk mengecek apakah nilai rata-rata dari string yang akan diganti lebih besar atau lebih kecil dari string pengganti