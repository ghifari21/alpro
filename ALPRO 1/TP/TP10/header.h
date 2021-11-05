/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP10          |
   | dalam mata kuliah Algoritma dan Pemrograman              |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

//==============LIBRARY===============//
#include <stdio.h>
#include <string.h>
//==============VARIABEL GLOBAL==============//
char word[100]; //menampung string input
int lenword; //menampung panjang string input
char leftword[100]; //menampung string sebelah kiri setelah dibagi 2
char rightword[100]; //menampung string sebelah kanan setelah dibagi 2
char temp[100]; //menampung string sebelah kanan yang telah dibalik
//=============PROSEDUR DAN FUNGSI=============//
void inputsplit(); //prosedur untuk menerima input dan memisahkan input menjadi 2 bagian
void reverse(); //prosedur untuk membalikkan input bagian kanan dan dimasukan kedalam temp
int check();    //fungsi untuk mengecek apakah input tersebut merupakan kata palindrom atau bukan
void outputpattern(); //prosedur untuk mengeluarkan pola