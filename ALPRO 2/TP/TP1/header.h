/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP1           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include <stdio.h>              //Library stdio.h

int originalmatrix[100][100];   //Deklarasi variabel integer dalam bentuk array dua dimensi untuk menyimpan matrix masukan atau matrix pertama
int mirrormatrix[100][100];     //Deklarasi variabel integer dalam bentuk array dua dimensi untuk menyimpan matrix yang sudah direfleksikan
int transposematrix[100][100];  //Deklarasi variabel integer dalam bentuk array dua dimensi untuk menyimpan matrix yang sudah ditranspose
int rotatematrix[100][100];     //Deklarasi variabel integer dalam bentuk array dua dimensi untuk menyimpan matrix yang telah diputar
int row, column;                //Deklarasi variabel integer untuk menyimpan baris dan kolom matrix

void input();                   //Deklarasi prosedur untuk menginput matrix
void processing();              //Deklarasi prosedur untuk memproses matrix sesuai yang diarahkan pada soal
void output();                  //Deklarasi prosedur untuk mengeluarkan hasil
int oddeven(int a);             //Deklarasi fungsi untuk mengecek apakah jumlah kolom terakhir setelah matrix ditranspose adalah ganjil atau genap