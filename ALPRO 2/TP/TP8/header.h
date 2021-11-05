/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP8           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include <stdio.h>      //library stdio.h
#include <string.h>     //library string.h
#include <stdlib.h>

typedef struct
{
    char id[10];        //variabel untuk menampung string kode
    char title[100];    //variabel untuk menampung string judul
    char genre[100];    //variabel untuk menampung string genre
    char director[100]; //variabel untuk menampung string nama sutradara
    char cinema[100];   //variabel untuk menampung string nama bioskop
}dataFilm;

FILE *fList;            //menampung sementara isi file
dataFilm listFilm[100], listDirector[100], listGenre[100], listCinema[100]; //array of bungkusan
int countFilm, countGenre, countDirector, countCinema;                      //variabel untuk menampung banyaknya elemen

void readRecords();     //prosedur membaca file
void appendListFilm();  //prosedur untuk menambahkan data pada file ListFilm.dat
void appendSutradara(); //prosedur untuk menambahkan data pada file Sutradara.dat
void appendGenre();     //prosedur untuk menambahkan data pada file Genre.dat
void appendBioskop();   //prosedur untuk menambahkan data pada file Bioskop.dat
void output(int maxTitle, int maxDirect, int maxGenre, int maxCinema);      //prosedur untuk mengeluarkan output ListFilmFinal dalam bentuk tabel