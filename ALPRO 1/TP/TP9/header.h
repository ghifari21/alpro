/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP9           |
   | dalam mata kuliah Algoritma dan Pemrograman              |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include <stdio.h>
#include <string.h>

//===================VARIABEL GLOBAL=======================//
int n; //untuk menyimpan banyaknya string yang akan di input
char name[100][100]; //menampung string nama
char inputname[100][100]; //menampung inputan yang dimasukan
char comment[100][100]; //emanmpung string komen
char star[100][100]; //menampung bintang yang diberikan
char code[100][100]; //menampung kode yang diberikan untuk menyensor nama atau tidak
int five, four, three, two, one; //menampung banyaknya bintang 5, 4, 3, 2, 1

//====================PROSEDUR===================//
void input(); //prosedur untuk menerima inputan dari user
void splittingprocess(); //prosedur untuk memisahkan input menjadi 4 string yaitu nama, kode, bintang, dan komentar
void changingprocess(); //prosedur untuk mengganti tanda '_' menjadi spasi dan menyensor nama jika kode yang diinput adalah 'A'
void sortingprocess(); //prosedur untuk mengurutkan masukan berdasarkan bintang terbesar
void output(); //prosedur untuk mengeluarkan output dari hasil input yang telah diproses