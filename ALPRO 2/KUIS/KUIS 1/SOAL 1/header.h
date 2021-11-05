/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan KUIS 1        |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include <stdio.h>      //LIBRARY STDIO.H

typedef struct          //tipe data terstruktur
{
   char name[100];      //tempat menampung string nama menu
   int price;           //tempat menampung harga menu
}matrix;

int row, column, orderRowPlayerOne[100], orderColumnPlayerOne[100];  //variabel global yang menampung baris kolom matrix dan baris kolom pesanan pemain pertama
int orderRowPlayerTwo[100], orderColumnPlayerTwo[100];               //variabel global yang menampung baris kolom pesanan pemain kedua
int foodEachPlayer;                                                  //variabel global yang menampung banyaknya pesanan per pemain

void input();              //deklarasi prosedur input
void processAndOutput();   //deklarasi prosedur processAndOutput