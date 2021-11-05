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
   char id[50];      //id kereta
   char name[100];   //nama kereta
   char class[100];  //kelas kereta
}data;   //struck menampung data

int idx, lenKata;       //index dan panjang kata
char currentKata[50];   //string currentkata

void startKata(char pita[]);  //prosedur memulai mesin kata
void resetKata();             //prosedur mereset mesin kata
void incKata(char pita[]);    //prosedur memajukan kata
char *getCKata();             //fungsi untuk mendapatkan string currentKata
int getLenKata();             //fungsi untuk mendapatkan panjang currentKata
int EOP(char pita[]);         //fungsi untuk memeriksa akhir dari pita