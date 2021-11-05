/*
    Saya Sekar Madu Kusumawardani [2007703] mengerjakan 
    soal Kuis 2
    dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin
*/

/*=== LIBRARY ===*/
#include<stdio.h> //-------------------------------> library yang berisi fungsi input output
#include<string.h> //------------------------------> library yang berisi fungsi pengolah string

/*=== DEKLARASI VARIABEL GLOBAL ===*/
int panjang; //------------------------------------> untuk menyimpan panjang string setelah dikurang variabel overlap (cuma nama)

/*=== DEKLARASI PROSEDUR ===*/
void Masukan(int n, char str[][100]); //-----------> prosedur masukan
void Keluaran(char str[][100], int *i, int ov); //-> prosedur keluaran untuk membentuk pola