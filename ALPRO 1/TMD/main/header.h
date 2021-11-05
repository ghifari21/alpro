/*
    =====================================================================================
    |   Saya Ghifari Octaverin [2000952] mengerjakan evaluasi Tugas Masa Depan          |
    |   dalam mata kuliah Algoritma dan Pemrograman I untuk keberkahanNya maka          |
    |   saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.    |
    =====================================================================================
*/
#include <stdio.h> //library stdio.h
#include <string.h> //library string.h

int thick, many, mode; //deklarasi variabel untuk ketebalan output, banyaknya string, dan mode yang akan digunakan
char word[100][100]; //deklarasi variabel berupa array 2 dimensi untuk menampung string input
int lenword[100]; //deklarasi variabel berupa array 1 dimensi untuk menampung panjang string input

int checking(int a); //fungsi pengecekan untuk index terakhir atau bukan
void input(); //deklarasi prosedur untuk input mode, banyaknya string, string beserta memasukkan panjangnya ke lenword, dan tebal output
void pattern_blank(); //deklarasi prosedur yang berupa pola kosong dengan panjang * lebar adalah tebal * tebal
void pattern_fill(); //deklarasi prosedur yang berupa pola yang berisi 'H' dengan panjang * lebar adalah tebal * tebal
void row1(); //deklarasi prosedur yang menampung pola untuk baris 1
void row2(); //deklarasi prosedur yang menampung pola untuk baris 2
void row3(); //deklarasi prosedur yang menampung pola untuk baris 3
void row4(); //deklarasi prosedur yang menampung pola untuk baris 4
void row5(); //deklarasi prosedur yang menampung pola untuk baris 5
void output(); //deklarasi prosedur yang berisi prosedur row1-row5 untuk dipanggil di dalam main