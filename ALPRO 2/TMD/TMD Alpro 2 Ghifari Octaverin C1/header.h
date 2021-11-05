/*
    =====================================================================================
    |   Saya Ghifari Octaverin [2000952] mengerjakan evaluasi Tugas Masa Depan          |
    |   dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka         |
    |   saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.    |
    =====================================================================================
*/

//library
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//tipe data terstruktur
typedef struct
{
    char pk[50];        //menampung primary key untuk kolom 1
    char value1[100];   //menampung suatu nilai untuk kolom 2
    char value2[100];   //menampung suatu nilai untuk kolom 3
    char value3[100];   //menampung suatu nilai untuk kolom 4
}universalStruct;

//variabel global
int idx, lenKata, idxQuery, idxProduct, idxBrand;                       //variabel indeks mesin kata, panjang kata mesin kata, indeks query, indeks produk, dan indeks brand
int maxPKBrand, maxValue1Brand, maxValue2Brand, maxValue3Brand;         //variabel panjang string maksimal untuk setiap kolom pada tabel brand
int maxPKProduct, maxValue1Product, maxValue2Product, maxValue3Product; //variabel panjang string maksimal untuk setiap kolom pada tabel produk
char currentKata[50], query[100][100];                                  //variabel untuk menampung string kata mesin kata dan query
FILE *fdata;                                                            //variabel penampung sementara isi file
universalStruct tProduct[200];                                          //struct untuk menampung tabel produk
universalStruct tBrand[200];                                            //struct untuk menampung tabel brand

//prosedur dan fungsi
    //mesin kata
void startKata(char pita[]);
void resetKata();
void incKata(char pita[]);
char *getCKata();
int getLenKata();
int EOP(char pita[]);
    //main features
void insertQuery(char pita[]);                                          //prosedur memasukan query
void resetQuery();                                                      //prosedur untuk mereset query
void queryBridge();                                                     //prosedur untuk jembatan query (menentukan INSERT, SELECT, dan DELETE)
void loadData();                                                        //prosedur untuk membaca file tabel brand dan tabel produk
void saveData();                                                        //prosedur untuk menulis ke dalam file tabel brand dan tabel produk
int seqSearch(universalStruct arr[], int n, char search[]);             //fungsi sequential search
void quickSort(universalStruct arr[], int left, int right);             //prosedur quick sorting
void errorMessage(int error);                                           //prosedur pesan error (menentukan jenis error)
void countMaxLength();                                                  //prosedur menghitung panjang string maksimal setiap kolom pada setiap tabel
void insertData();                                                      //prosedur INSERT data
void selectData();                                                      //prosedur SELECT data
void deleteData();                                                      //prosedur DELETE data
void updateData();                                                      //prosedur UPDATE data