/*
    Saya Sekar Madu Kusumawardani [2007703] mengerjakan 
    soal TP9 Alpro 1 C1 2020 - PR12020
    dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin
*/


/*=== Library yang digunakan ===*/
#include<stdio.h>       //library yg berisi fungsi input-output
#include<string.h>      //library yg berisi fungsi manipulasi string

/*=== Deklarasi Variabel Global ===*/
int n;                              //untuk menentukan jumlah review
char Nama[100][100];                //untuk menyimpan nama yang sudah dihapus underscore nya
char Komentar[100][50];             //untuk menyimpan komentar yang sudah dihapus underscore nya
int pNama[100];                     //untuk menyimpan panjang string nama
int pKomen[100];                    //untuk menyimpan panjang string komentar
char urutNama[100][100];            //untuk menyimpan nama yang sudah diurutkan berdasarkan rating
char urutKomen[100][50];            //untuk menyimpan komentar yang sudah diurutkan berdasarkan rating
int lima, empat, tiga, dua, satu;   //untuk menandai jumlah nama yang memberikan rating pada setiap rating
//                          ^jumlah yang memberi rating 1
//                     ^jumlah yang memberi rating 2
//               ^jumlah yang memberi rating 3
//        ^jumlah yang memberi rating 4
//  ^jumlah yang memberi rating 1

/*=== Deklarasi Prosedur ===*/
void input();   //prosedur masukan jumlah review
void testi(char nm[][100], char an[][10], char rat[][5], char com[][50]);   //prosedur masukan review pelanggan
void spasi();   //prosedur proses menghapus underscore
void sensor(char an[][10]);     //prosedur menyensor nama anonim
void urut(char rat[][5]);       //prosedur mengurutkan komentar berdasarkan rating
void tampil(char rat[][5]);     //prosedur menampilkan output