/*
    Saya Sekar Madu Kusumawardani [2007703] mengerjakan 
    soal TP8 Alpro 1 C1 2020 - KBPW20
    dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin
*/


/*=== Memasukkan Library yang akan digunakan ===*/
#include<stdio.h>       //library berisi fungsi io
#include<string.h>      //library berisi fungsi pengolah string


/*=== Deklarasi fungsi utama ===*/
int main(){


/*=== Deklarasi variabel dan tipe data ===*/
    char input[100][100], baku[100][100], tdkbaku[100][100];    //variabel array 2 dimensi untuk menampung char of string
    //                                    ^untuk menampung string tidak baku
    //                    ^untuk menampung string baku
    //   ^untuk menampung string masukan
    char diganti[100], pengganti[100];                          //variabel char untuk menampung karakter
    //                 ^karakter pengganti
    //   ^karakter yang akan diganti
    int i, j, k, panjang = 0, index = 0;                        //variabel yang nilainya akan di increment
    //                        ^sebagai penanda index huruf yang diganti
    //           ^sebagai penampung panjang string inputan
    //  ^--^--^iterator looping


/*=== Proses input ===*/
    i = 0;
    do                                                  //jalankan minimal sekali
    {
        scanf("%s", &input[i]);                         //meminta masukan string
        if (strcmp(input[i], "santuy") != 0)            //jika inputan string index ke i bukan "santuy"
        {
            scanf(" %c %c", &diganti[i], &pengganti[i]);//minta masukan karakter yang diganti dan karakter pengganti
        }
        i++;
        panjang++;                                      //increment nilai var panjang untuk mendapatkan panjang array string input
    } while (strcmp(input[i-1], "santuy") != 0);        //program diulang selama masukan string index ke i-1 bukan "santuy"


/*=== Proses pengecekan dan penggantian huruf pada string ===*/
    int letakP = panjang+1, letakG = panjang+1;         //variabel yang digunakan untuk mendeteksi letak karakter
    //                      ^letak karakter yang akan diganti di awal adalah angka yang melebihi panjang stringnya (bukan 0-strlen(string))
    //  ^letak karakter pengganti di awal adalah angka yang melebihi panjang stringnya (bukan 0-strlen(string))
    i = 0;
    while (i < panjang-1)                               //diulang sebanyak jumlah string pada array input
    {
        j = 0;
        while (j < strlen(input[i]))                    //diulang sebanyak panjang string ke i
        {
            if (input[i][j] == pengganti[i])            //jika karakter pada string i ada yang sama dengan karakter pengganti
            {
                letakP = j;                             //maka tampung letak dari karakter yang sama tersebut
            }
            if (input[i][j] == diganti[i])              //jika karakter pada string i ada yang sama dengan karakter yang akan diganti
            {
                letakG = j;                             //maka tampung letak dari karakter tersebut
                index = j;                              //tandai indexnya
                if (letakP < letakG)                    //jika letak karakter pengganti lebih dulu dari karakter yang diganti
                {
                    input[i][index] = input[i][index];  //jangan ubah karakternya
                }
                else                                    //selain kondisi tadi
                {
                    input[i][index] = pengganti[i];     //ubah karakter yang diganti dengan karakter pengganti
                }
            }
        j++;
        }
        letakP = panjang+1; letakG = panjang+1; j = 0;  //mengembalikan nilai variabel ke nilai awal
        i++;
    }


/*=== Proses pengecekan jumlah ASCII dan pemindahan string ===*/
    int Jumlah = 0, adabaku = 0, adatdkbaku = 0;//deklarasi variabel yang akan digunakan pada proses ini
    //                           ^untuk mendeteksi ada tidaknya string yang jumlah dari ASCII karakternya ganjil (tidak baku)
    //              ^^untuk mendeteksi ada tidaknya string yang jumlah dari ASCII karakternya genap (baku)
    //  ^untuk menjumlahkan ASCII dari setiap karakter pada setiap string
    int b = 0, tb = 0;                          //deklarasi variabel yang akan digunakan sebagai penanda index string baku dan tidak baku
    i = 0;
    while (i < panjang-1)                       //diulang sebanyak jumlah string dari array input
    {
        j = 0;
        while (j < strlen(input[i]))            //diulang sebanyak jumlah karakter setiap string pada array input
        {
            Jumlah += input[i][j];              //menjumlahkan ascii setiap karakter
            j++;
        }
        if (Jumlah % 2 == 0)                    //jika hasil jumlah ASCII genap (kondisi true)
        {
            strcpy(baku[b], input[i]);          //pindahkan string yang genap ke array of string baku
            b++;                                //tandai indexnya
            adabaku++;                          //increment jika kondisi true
        }
        else                                    //jika hasil jumlah ASCII ganjil (kondisi false)
        {
            strcpy(tdkbaku[tb], input[i]);      //pindahkan string yang ganjil ke array of string tidak baku
            tb++;                               //tandai indexnya
            adatdkbaku++;                       //increment jika kondisi false
        }
        i++;
        Jumlah = 0;                             //kembalikan nilai variabel jumlah ke awal
    }


/*=== Proses output ===*/
    i = 0;
    printf("=== KATA BAKU ===\n");              //mencetak ke layar
    if (adabaku == 0)                           //jika tidak ada string pada array string baku (kondisi true)
    {
        printf("TIDAK ADA.\n");                 //mencetak ke layar
    }
    else                                        //jika ada string pada array of string baku (kondisi false)
    {
        i = 0;
        while (i < adabaku)                     //diulang sebanyak jumlah string yang ada
        {
            printf("%s\n", baku[i]);            //cetak string pada array of string baku ke layar
            i++;
        }
    }
    i = 0;
    printf("\n=== KATA NON BAKU ===\n");        //mencetak ke layar
    if (adatdkbaku == 0)                        //jika tidak ada string pada array string tidak baku (kondisi true)
    {
        printf("TIDAK ADA.\n");                 //mencetak ke layar
    }
    else                                        //jika ada string pada array of string baku (kondisi false)
    {
        i = 0;
        while (i < adatdkbaku)                  //jika ada string pada array of string tidak baku (kondisi false)
        {
            printf("%s\n", tdkbaku[i]);         //cetak string pada array of string tidak baku ke layar
            i++;
        }
    }


/*=== Menghentikan program ===*/
    return 0;   //mengembalikan nilai integer ke fungsi awal
}