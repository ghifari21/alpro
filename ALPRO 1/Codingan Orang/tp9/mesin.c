/*
    Saya Sekar Madu Kusumawardani [2007703] mengerjakan 
    soal TP9 Alpro 1 C1 2020 - PR12020
    dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin
*/


/*=== Library yang Digunakan ===*/
#include "header.h"     //file header.h yang dijadikan sebagai library

/*=== Prosedur Masukan Jumlah Review ===*/
void input(){
    scanf("%d", &n);    //meminta masukan integer n untuk menentukan jumlah masukan
}

/*=== Prosedur Masukan Review Pelanggan ===*/
void testi(char nm[][100], char an[][10], char rat[][5], char com[][50]){

    /*--- Deklarasi Variabel Lokal ---*/
    int i, j;   //variabel iterator

    /*--- Proses Perulangan Input ---*/
    for ( i = 0; i < n; i++)            //proses input diulang sebanyak n
    {
        /*--- Proses Input Nama ---*/
        j = 0;
        do                              //lakukan minimal sekali
        {
            scanf(" %c", &nm[i][j]);    //meminta masukan karakter untuk array of string nm (untuk nama)
            j++;
        } while (nm[i][j-1] != '/');    //diulang selama karakter yang dimasukkan bukan '/'
        nm[i][j-1] = '\0';              //membuat null karakter '/'
        pNama[i] = j-1;                 //menyimpan panjang string dalam variabel pNama
        strcpy(Nama[i], nm[i]);         //memindahkan isi string dari var lokal ke var global

        /*--- Proses Input Keterangan Anonim ---*/
        j = 0;
        do                              //lakukan minimal sekali
        {
            scanf(" %c", &an[i][j]);    //meminta masukan karakter untuk array of string an (untuk ket.anonim)
            j++;
        } while (an[i][j-1] != '/');    //diulang selama karakter yang dimasukkan bukan '/'
        an[i][j-1] = '\0';              //membuat null karakter '/'

        /*--- Proses Input Rating ---*/
        j = 0;
        do                              //lakukan minimal sekali
        {
            scanf("%c", &rat[i][j]);    //meminta masukan karakter untuk array of string rat (untuk rating)
            j++;
        } while (rat[i][j-1] != '/');   //membuat null karakter '/'
        rat[i][j-1] = '\0';             //membuat null karakter '/'

        /*--- Proses Input Komentar ---*/
        scanf("%s", com[i]);            //meminta masukan string untuk array of string com (untuk komentar)
        pKomen[i] = strlen(com[i]);     //menyimpan panjang string dalam variabel pNama
        strcpy(Komentar[i], com[i]);    //memindahkan isi string dari var lokal ke var global
    }
}

/*=== Prosedur Proses Menghapus Underscore (_) ===*/
void spasi(){

    /*--- Deklarasi Variabel Lokal ---*/
    int i, j;   //variabel iterator

    /*--- Perulangan Mengganti Underscore dengan Spasi ---*/
    for ( i = 0; i < n; i++)            //diulang sebanyak n
    {
        /*--- Mengubah Underscore di var Nama ---*/
        for ( j = 0; j < pNama[i]; j++) //diulang sebanyak panjang Nama ke i
        {
            if (Nama[i][j] == '_')      //jika isi ke j dari string ke i adalah underscore '_'
            {
                Nama[i][j] = ' ';       //maka ubah menjadi spasi ' '
            }
        }

        /*--- Mengubah Underscore di var Komentar ---*/
        for ( j = 0; j < pKomen[i]; j++)//diulang sebanyak panjang Komentar ke i
        {
            if (Komentar[i][j] == '_')  //jika isi ke j dari string ke i adalah underscore '_'
            {
                Komentar[i][j] = ' ';   //maka ubah menjadi spasi ' '
            }
        }
    }
}

/*=== Prosedur Menyensor Nama Anonim ===*/
void sensor(char an[][10]){

    /*--- Deklarasi Variabel Lokal ---*/
    int spc = 0, tanda = 0, i, j, k;                //variabel penanda dan iterator
    //           ^untuk menandai index yang sudah terpakai
    //  ^untuk menghitung jumlah spasi dalam 1 string

    /*--- Perulangan Menyensor Nama Anonim ---*/
    for ( i = 0; i < n; i++)
    {
        /*--- Proses Pengecekan Apakah Anonim ---*/
        if (strcmp(an[i], "A") == 0)                //jika string an ke i = A
        {
            /*--- Perulangan Mengecek Jumlah Spasi dalam 1 kalimat ---*/
            for ( j = 0; j < pNama[i]; j++)         //diulang sebanyak panjang string ke i
            {
                if (Nama[i][j] == ' ')              //jika karakter ke j dari string ke i adalah spasi
                {
                    spc++;                          //nilai var penanda spasi bertambah
                }
            }

            /*--- Pengecekan Apakah Ada Spasi dalam String ke i ---*/
            if (spc == 0)                       //jika tidak ada (spc = 0)
            {
                for ( j = 1; j < pNama[i]; j++) //diulang sebanyak panjang string ke i
                {
                    Nama[i][j] = '*';           //maka ubah karakter kedua-terakhir dalam string menjadi *
                }
            }
            if (spc > 0)                        //jika ada (spc > 0)
            {
                /*--- Perulangan menyensor kata pertama ---*/
                j = 1;
                while (Nama[i][j] != ' ')       //diulang selama karakter bukan spasi
                {
                    Nama[i][j] = '*';           //karakter kedua-terakhir dalam KATA PERTAMA diubah menjadi *
                    j++;
                }
                tanda = j+2;                    //menandai index yang sudah diubah menjadi *
                //        ^plus 2 karena karakter spasi dan karakter pertama kata selanjutnya tidak perlu diubah menjadi *

                /*--- Perulangan menyensor kata selanjutnya (kedua dst) ---*/
                for ( k = 0; k < spc; k++)                      //diulang sebanyak jumlah spasi dalam kalimat tsb
                {
                    j = tanda;                                  //memasukkan penanda index ke dalam var j
                    while (Nama[i][j] != ' ' && j != pNama[i])  //diulang selama tidak bertemu spasi dan index yang terpakai != panjang string
                    {
                        Nama[i][j] = '*';                       //karakter kedua sampai terakhir dalam kata diubah menjadi *
                        j++;
                    }
                    tanda = j+2;                                //mengupdate nilai penanda
                }
            }
            
            /*--- mengembalikan nilai var ke semula
            agar perhitungan perulangan berikutnya
            mulai dari nol lagi ---*/
            tanda = 0;
            j = 0;
            spc = 0;
        }
    }
}

/*=== Prosedur Mengurutkan Komentar berdasarkan Rating ===*/
void urut(char rat[][5]){

    /*--- Deklarasi Variabel Lokal ---*/
    int i, j, idx = 0;                          //variabel iterator dan penanda index

    /*--- Inisiasi Nilai Variabel Global ---*/
    lima = 0, empat = 0, tiga = 0, dua = 0, satu = 0;

    /*--- Perulangan Mengurutkan Nama dan Komentar Berdasarkan Rating ---*/
    /*--- Rating 5 ---*/
    for ( i = 0; i < n; i++)                    //diulang sebanyak n
    {
        if (strcmp(rat[i], "5") == 0)           //jika rating ke i = 5
        {
            strcpy(urutNama[idx], Nama[i]);     //pindahkan string ke i pada Nama ke string ke idx pada urutNama
            strcpy(urutKomen[idx], Komentar[i]);//pindahkan string ke i pada Komentar ke string ke idx pada urutKomentar
            idx++;                              //tambah nilai idx setiap indexnya terisi
            lima++;                             //tambah nilai var lima untu menyimpan jumlah nama yang memberi rating 5
        }
    }

    /*--- Rating 4 ---*/
    //alur proses sama seperti pada Rating 5
    for ( i = 0; i < n; i++)
    {
        if (strcmp(rat[i], "4") == 0)
        {
            strcpy(urutNama[idx], Nama[i]);
            strcpy(urutKomen[idx], Komentar[i]);
            idx++;
            empat++;
        }
    }

    /*--- Rating 3 ---*/
    //alur proses sama seperti pada Rating 5
    for ( i = 0; i < n; i++)
    {
        if (strcmp(rat[i], "3") == 0)
        {
            strcpy(urutNama[idx], Nama[i]);
            strcpy(urutKomen[idx], Komentar[i]);
            idx++;
            tiga++;
        }
    }

    /*--- Rating 2 --*/
    //alur proses sama seperti pada Rating 5
    for ( i = 0; i < n; i++)
    {
        if (strcmp(rat[i], "2") == 0)
        {
            strcpy(urutNama[idx], Nama[i]);
            strcpy(urutKomen[idx], Komentar[i]);
            idx++;
            dua++;
        }
    }

    /*--- Rating 1 --*/
    //alur proses sama seperti pada Rating 5
    for ( i = 0; i < n; i++)
    {
        if (strcmp(rat[i], "1") == 0)
        {
            strcpy(urutNama[idx], Nama[i]);
            strcpy(urutKomen[idx], Komentar[i]);
            idx++;
            satu++;
        }
    }
}

/*=== Prosedur Menampilkan Output ===*/
void tampil(char rat[][5]){

    /*--- Deklarasi Variabel Lokal ---*/
    int i, j;                                               //variabel iterator

    /*--- Proses Menampilkan Nama dan Komentar
    Berdasarkan Rating ---*/
    i = 0;                                                  //inisialisati nilai i untuk penanda output

    /*--- Rating 5 ---*/
    //jika ada yang memberi rating 5
    if (lima != 0)
    {
        if (i != 0)                                         //untuk keluaran baris pertama, jangan buat baris baru
        {
            printf("\n");                                   //jika bukan baris pertama, buat baris baru
        }
        printf(">>> Review Bintang 5 <<<\n");               //menampilkan format jenis rating
        printf("--------------------\n");                   //menampilkan pembatas
        for ( j = 0; j < lima; j++)                         //diulang sebanyak jumlah nama yang memberi rating 5
        {
            printf("%s\n%s\n", urutNama[i], urutKomen[i]);  //tampilkan nama dan komentarnya
            printf("--------------------\n");               //menampilkan pembatas
            i++;                                            //tambahkan nilai i sebagai penanda index string yang telah ditampilkan
        }
    }
    
    /*--- Rating 4 ---*/
    //alur proses sama seperti pada tampilan Rating 5
    if (empat != 0)
    {
        if (i != 0)
        {
            printf("\n");            
        }
        printf(">>> Review Bintang 4 <<<\n");
        printf("--------------------\n");
        for ( j = 0; j < empat; j++)
        {
            printf("%s\n%s\n", urutNama[i], urutKomen[i]);
            printf("--------------------\n");
            i++;
        }
    }

    /*--- Rating 3 ---*/
    //alur proses sama seperti pada tampilan Rating 5
    if (tiga != 0)
    {
        if (i != 0)
        {
            printf("\n");            
        }
        printf(">>> Review Bintang 3 <<<\n");
        printf("--------------------\n");
        for ( j = 0; j < tiga; j++)
        {
            printf("%s\n%s\n", urutNama[i], urutKomen[i]);
            printf("--------------------\n");
            i++;
        }
    }

    /*--- Rating 2 ---*/
    //alur proses sama seperti pada tampilan Rating 5
    if (dua != 0)
    {
        if (i != 0)
        {
            printf("\n");            
        }
        printf(">>> Review Bintang 2 <<<\n");
        printf("--------------------\n");
        for ( j = 0; j < dua; j++)
        {
            printf("%s\n%s\n", urutNama[i], urutKomen[i]);
            printf("--------------------\n");
            i++;
        }
    }

    /*--- Rating 1 ---*/
    //alur proses sama seperti pada tampilan Rating 5
    if (satu != 0)
    {
        if (i != 0)
        {
            printf("\n");            
        }
        printf(">>> Review Bintang 1 <<<\n");
        printf("--------------------\n");
        for ( j = 0; j < satu; j++)
        {
            printf("%s\n%s\n", urutNama[i], urutKomen[i]);
            printf("--------------------\n");
            i++;
        }
    }
}