/*
    Saya Sekar Madu Kusumawardani [2007703] mengerjakan 
    soal Kuis 2
    dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin
*/


/*=== LIBRARY ===*/
#include "header.h" //------------------------------> menggunakan header yang dibuat sendiri


/*=== PROSEDUR ===*/

/*=== Prosedur Masukan ===*/
void Masukan(int n, char str[][100]){ //------------> mengolah variabel integer dan array of string
/*--- Deklarasi Variabel Lokal ---*/
    int i; //---------------------------------------> akan digunakan sebagai iterator perulangan
/*--- Proses Masukan ---*/
    for ( i = 0; i < n; i++) //---------------------> akan diulang sebanyak nilai integer n yang diolah
    {
        scanf("%s", str[i]); //---------------------> meminta masukan string untuk disimpan dalam variabel array of string yang diolah
    }
}

/*=== Prosedur Membentuk Pola Keluaran ===*/
void Keluaran(char str[][100], int *i, int ov){ //--> mengolah variabel array of string, integer (iterator pass by reference), dan integer ov
//integer i pass by reference agar saat diolah nilai dimasukkan ke alamat variabel aslinya (yang ada di main)
/*--- Deklarasi Variabel Lokal ---*/
    int j; //---------------------------------------> akan digunakan sebagai iterator
/*--- Proses Menampilkan Pola Spasi ---*/
    for ( j = 0; j < panjang; j++) //---------------> ditampilkan sebanyak nilai dalam variabel panjang (yang nilainya akan terus bertambah di setiap perulangan)
    {
        printf(" "); //-----------------------------> menampilkan karakter spasi
    }
/*--- Proses Menampilkan String ---*/
    printf("%s\n", str[*i]); //---------------------> string normal ditampilkan setelah semua pola spasi ditampilkan dalam satu baris yang sama
    panjang = panjang + strlen(str[*i])-ov; //------> mengupdate nilai dalam variabel panjang (untuk penentu pola spasi di baris berikutnya)
}