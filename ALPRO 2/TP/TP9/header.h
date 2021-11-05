/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP8           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include <stdio.h>

int idx;                    //untuk menentukan index pada pita
char cc;                    //variabel menampung karakter yang ditampilkan

void start(char pita[]);    //prosedur untuk memulai mesin
void inc(char pita[]);      //prosedur untuk maju satu karakter pada pita
int eop();                  //fungsi untuk mengecek akhir dari pita
char getCC();               //fungsi untuk mengambil nilai karakter yang sedang ditampilkan