/*
    Saya Sekar Madu Kusumawardani [2007703] mengerjakan 
    soal TP9 Alpro 1 C1 2020 - PR12020
    dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin
*/


/*=== Library yang Digunakan ===*/
#include "header.h"         //file header.h yang dijadikan sebagai library

/*=== Fungsi Utama dalam Program ===*/
int main(){

    /*--- Deklarasi Variabel Lokal ---*/
    int i, j;

    /*--- Deklarasi Variabel yang akan Diolah di Prosedur ---*/
    char name[100][100];        //untuk diolah salam prosedur testi menggantikan var nm[][10]
    char anonimo[100][10];      //untuk diolah salam prosedur testi menggantikan an [][5]
    char bintang[100][5];       //untuk diolah salam prosedur testi menggantikan rat [][5]
    char komen[100][50];        //untuk diolah salam prosedur testi menggantikan com [][5]

    /*=== Pemanggilan Prosedur ===*/
    input();                                //memanggil prosedur masukan jumlah review
    testi(name, anonimo, bintang, komen);   //memanggil prosedur masukan review pelanggan
    spasi();                                //memanggil prosedur proses menghapus underscore
    sensor(anonimo);                        //memanggil prosedur menyensor nama anonim
    urut(bintang);                          //memanggil prosedur mengurutkan komentar berdasarkan rating
    tampil(bintang);                        //memanggil prosedur menampilkan output

    /*=== Menghentikan Fungsi Main ===*/
    return 0;       //mengembalikan nilai int menjadi 0
}