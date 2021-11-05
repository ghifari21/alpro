/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan UAS           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include <stdio.h>
#include <string.h>

//variabel
int idx, lenKata;   
char currentKata[50];

//prosedur dan fungsi
void startKata(char pita[]);    //memulai mesin kata
void resetKata();               //reset kata
void incKata(char pita[]);      //memajukan kata
char *getCKata();               //mereturn currentkata
int getLenKata();               //mereturn panjang currentkata
int EOP(char pita[]);           //fungsi EOP