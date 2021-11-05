/*
    Saya Sekar Madu Kusumawardani [2007703] mengerjakan 
    soal Kuis 2
    dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin
*/

/*=== LIBRARY ===*/
#include "header.h" //----------------------> menggunakan header yang dibuat sendiri

/*=== FUNGSI UTAMA ===*/
int main(){ //------------------------------> fungsi yang pertama kali dijalankan
/*--- Deklarasi Variabel Lokal ---*/
    int i, n = 0, overlap = 0; //-----------> variabel tipe integer
    //------------^untuk menyimpan jumlah m dimana 0 <= m <= jumlah huruf overlap dalam string terpendek
    //-----^untuk menentukan banyak string yang dimasukkan
    //--^untuk iterator
    char str1[100][100], str2[100][100]; //-> variabel array of string penampung array of string pertama dan kedua
/*--- Inisialisasi Variabel Global ---*/
    panjang = 0; //-------------------------> inisialisasi nilai var global penentu jumlah spasi dengan 0
/*--- Proses Masukan --*/
    scanf("%d", &n); //---------------------> meminta masukan jumlah string pertama
    Masukan(n, str1); //--------------------> memanggil prosedur untuk memasukkan array of string pertama
    Masukan(n, str2); //--------------------> memanggil prosedur untuk memasukkan array of string kedua
    scanf("%d", &overlap); //---------------> meminta masukan jumlah m (dalam soal disebut m) sebagai kunci pola
/*--- Proses Keluaran ---*/
    for ( i = 0; i < n; i++) //-------------> menampilkan pola diulang sesuai n, pola ditampilkan selang seling (str1, str2, str1, dst)
    {
        Keluaran(str1, &i, overlap); //-----> memanggil prosedur untuk menampilkan pola str1 ke i
        Keluaran(str2, &i, overlap); //-----> memanggil prosedur untuk menampilkan pola str2 ke i
        //variabel i dibuat pass by reference agar alamat dari variabel i diolah di dalam prosedur Keluaran
    }
/*--- Menghentika Program ---*/
    return 0;
}