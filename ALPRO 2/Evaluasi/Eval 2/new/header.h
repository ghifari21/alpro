/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan Evaluasi      |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include <stdio.h>
#include <string.h>

typedef struct
{
   char id[50];
   char name[100];
   char class[100];
}data;

int idx, lenKata, idxQuery;
char currentKata[50], query[50][100];

void startKata(char pita[]);
void resetKata();
void incKata(char pita[]);
char *getCKata();
int getLenKata();
int EOP(char pita[]);
void insert(char pita[]);
void reset();
void sorting(data arr[], int left, int right);