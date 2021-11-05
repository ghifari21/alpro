/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP4           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include <stdio.h>          //library stdio.h
#include <string.h>         //library string.h

float itemRating[100];      //deklarasi variabel global untuk menampung rating barang
int itemPrice[100];         //deklarasi variabel global untuk menampung harga barang
char itemName[100][100];    //deklarasi variabel global untuk menampung nama barang

void insertionSorting(int count, char mode[], char sortingBy[]);    //prosedur untuk melakukan sorting dengan cara insertion
void selectionSorting(int count, char mode[], char sortingBy[]);    //prosedur untuk melakukan sorting dengan cara selection
void printOutput(int count);                                        //prosedur untuk melakukan print output