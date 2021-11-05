/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan Evaluasi      |
   | dalam mata kuliah Algoritma dan Pemrograman              |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include <stdio.h>
#include <string.h>

int n, m; //banyaknya string inputan
char words1[100][100]; //array of string 1
char words2[100][100]; //array of string 2
char merge1[100]; //tempat string disatukan 1
char merge2[100]; //tempat string disatukan 2
int lensen1; //panjang string total 1
int lensen2; //panjang string total 2

int checking(); //fungsi pengecekan apakah inputan merupakan anagram
void input(); //prosedur untuk input
void process(); //prosedur untuk menyatukan array of string menjadi 1
void output(); //prosedur untuk output
