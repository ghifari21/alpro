/*
    Saya Sekar Madu Kusumawardani [2007703] mengerjakan 
    soal Kuis 1
    dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin
*/


/*=== LIBRARY ===*/
#include "header.h" //-----------------------------> menggunakan library yang dibuat sendiri


/*=== PROSEDUR DAN FUNGSI ===*/

/*=== Prosedur Masukan String ===*/
void Masukan(char str[][100], int n){ //-----------> mengolah array of string dan integer
/*--- Deklarasi Var Lokal ---*/
    int i; //--------------------------------------> akan digunakan sebagai iterator looping
/*--- Perulangan Masukan String ---*/
    for (i = 0; i < n; i++) //---------------------> diulang sebanyak nilai integer (n)
    {
        scanf("%s", str[i]); //--------------------> meminta masukan string untuk disimpan dalam var array of string
    }
}

/*=== Fungsi Pengecekan Jumlah Subkata dalam String ===*/
int Cek(char str[][100], char sub[], int n){ //----> mengolah array of string, array of char, dan integer
/*--- Deklarasi Var Lokal ---*/
    int i, j; //-----------------------------------> akan digunakan sebagai iterator looping
    int total = 0, sama; //------------------------> variabel penampung jumlah
    //-------------^untuk menampung jumlah karakter yang sama
    //--^untuk menampung jumlah subkata yang sama
/*--- Perulangan Pengecekan Subkata ---*/
    for (i = 0; i < n; i++) //---------------------> diulang sebanyak n (untuk mengecek semua string)
    {
        sama = 0; //-------------------------------> inisialisasi nilai awal var sama
        for (j = 0; j < strlen(str[i]); j++) //----> pengecekan per karakter, diulang sebanyak panjang setiap string
        {
        /*--- Pengecekan Karakter ---*/
            if (str[i][j] == sub[sama]){ //--------> jika karakter sama
                sama++; //-------------------------> increment nilai variabel sama sebanyak 1
            } else { //----------------------------> jika sebaliknya
                sama = 0; //-----------------------> nilai variabel sama = 0
            }
        /*--- Pengecekan Jika Karakter yang
              Sama Letaknya Berurutan atau
              Membentuk Subkata ---*/
            if (sama == strlen(sub)) //------------> jika nilai variabel sama = panjang sub kata
            total++; //----------------------------> increment nilai variabel total sebanyak 1
        }
    }
/*--- Mengembalikan Nilai Variabel Total ke Fungsi Cek ---*/
    return total;
}