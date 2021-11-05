/*
    Saya Sekar Madu Kusumawardani [2007703] mengerjakan 
    soal Kuis 1
    dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin
*/

/*=== LIBRARY ===*/
#include "header.h" //-------------------------------> menggunakan library yang dibuat sendiri

/*=== FUNGSI UTAMA ===*/
int main(){ //---------------------------------------> fungsi yang akan dijalankan pertama kali
/*--- Deklarasi dan Inisialisasi Variabel ---*/
    int n1 = 0, n2 = 0; //---------------------------> variabel penentu banyak string yang dimasukkan
    //----------^penentu banyak string masukan kedua
    //--^penentu banyak string masukan pertama
    char str1[100][100], str2[100][100], sub[50]; //-> variabel array untuk menyimpan string
    //-----------------------------------^untuk menyimpan string subkata
    //-------------------^untuk menyimpan array of string masukan kedua
    //---^untuk menyimpan array of string masukan pertama
/*--- Proses Input ---*/
    scanf("%d", &n1); //-----------------------------> meminta masukan angka untuk menentukan perulangan masukan string pertama
    Masukan(str1, n1); //----------------------------> memanggil prosedur penginput string (mengolah variabel str1 dan n1)
    scanf("%d", &n2); //-----------------------------> meminta masukan angka untuk menentukan perulangan masukan string kedua
    Masukan(str2, n2); //----------------------------> memanggil prosedur penginput string (mengolah variabel str2 dan n2)
    scanf("%s", sub); //-----------------------------> meminta masukan string subkata
/*--- Proses Output ---*/
    if(Cek(str1, sub, n1) > Cek(str2, sub, n2)) //---> jika jumlah subkata pada masukan pertama lebih banyak dari masukan kedua
    {
        printf("%d\n", Cek(str1, sub, n1)); //-------> maka tampilkan nilai jumlah subkata masukan pertama
    }
    else //------------------------------------------> jika selain itu (sebaliknya)
    {
        printf("%d\n", Cek(str2, sub, n2)); //-------> maka tampilkan nilai jumlah subkata masukan kedua
    }
/*--- Hentikan Program ---*/
    return 0; //-------------------------------------> mengembalikan nilai 0 ke fungsi main
}