/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP10          |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include <stdio.h>      //library stdio.h
#include <string.h>     //library string.h

int idx, lenWord;       //variabel global untuk menampung index dan panjang kata
char currentWord[50];   //variabel global untuk menampung string current Kata

void start(char pita[]);                    //prosedur untuk memulai mesin kata
void reset();                               //prosedur untuk mereset current Kata
void incWord(char pita[]);                  //prosedur untuk memajukan kata
char *getCWord();                           //fungsi untuk mengembalikan nilai current kata
int getLenWord();                           //fungsi untuk mengembalikan nilai panjang kata
int EOP(char pita[]);                       //fungsi untuk memeriksa apakah pita sudah berakhir atau belum
void sorting(int count, char arr[][100]);   //prosedur untuk sorting dengan metode insertion