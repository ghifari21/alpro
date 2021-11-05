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
int idx;
char cc;

//fungsi dan prosedur
void start(char pita[]);    //memulai mesin
void inc(char pita[]);      //memajukan karakter
int eop();                  //memeriksa eop
void adv(char pita[]);      //memajukan karakter jika ada spasi
char getCC();               //fungsu untuk mereturn cc