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

int idx, lenKata;
char currentKata[50];

void startKata(char pita[]);
void resetKata();
void incKata(char pita[]);
char *getCKata();
int getLenKata();
int EOP(char pita[]);