/*
    Saya Sekar Madu Kusumawardani [2007703] mengerjakan 
    soal Kuis 2
    dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin
*/


/*=== Library yang digunakan ==*/
#include<stdio.h>           //berisi fungsi input-output
#include<string.h>          //berisi fungsi pengolah string


/*=== Fungsi/Method utama ==*/
int main(){


/*=== Deklarasi variabel ===*/
    char input[100][100];               //variabel masukan berupa array of string
    int i, j;                           //variabel iterator
    int n;                              //variabel penentu jumlah string pada array masukan
    int min = 100;                      //variabel untuk mendeteksi string terpendek
    int panjang, tanda = 0, index = 0;  //variabel penanda
    //                      ^untuk menandai sampai mana index string yang sudah dicetak ke layar
    //           ^untuk membantu variabel index
    //  ^untuk menenampung jumlah string yang akan digunakan sebagai batasan loop


/*=== Meminta masukan ===*/
    scanf("%d", &n);                    //meminta masukan integer penentu loop
    i = 0;
        while (i < n)                   //di loop sebanyak variabel n
        {
            scanf("%s", &input[i]);     //meminta masukan string untuk disimpan dalam array[i]

            /* proses mendeteksi string terpendek */
            if (strlen(input[i]) < min) //jika panjang string i kurang dari nilai variabel min
            {
                min = strlen(input[i]); //maka simpan panjangnya ke dalam variabel min
            }

            i++;
        }
    panjang = i-1;                      //menyimpan jumlah string yang dimasukkan


/*=== Output pola atas ===*/
    for ( i = 0; i < min; i++)          //di loop sebanyak panjang string terpendek
    {
        for ( j = 0; j < n-(n-i); j++)  //di loop sebanyak n-(n-i) untuk mencetak spasi sebanyak 0++
        {
            printf("  ");               //cetak 2 spasi setiap kondisi loop true
        }
        for ( j = 0; j <= panjang; j++) //di loop sebanyak jumlah string
        {
            printf("%c", input[j][i]);  //cetak karakter pada setiap string satu per satu
            if (j < panjang)            //jika belum mencapai karakter i pada string terakhir
            {
                printf(" ");            //cetak spasi
            }
        }
        tanda++;                        //increment variabel tanda setiap selesai membuat pola kolom
        index = tanda;                  //pindahkan nilai variabel tanda ke variabel index
        printf("\n");
    }


/*=== Output pola bawah ===*/
    i = 0;
    j = 0;
    while (i <= panjang)                                //di loop sebanyak jumlah string
    {
        if (strlen(input[i]) > index)                   //jika masih ada karakter yang belum tercetak pada pola pertama
        {
            for ( j = index; j < strlen(input[i]); j++) //di loop sebanyak karakter yang belum tercetak
            {
                printf("%c", input[i][j]);              //lalu cetak karakter tersebut
            }
            printf("\n");                               //tambahkan new line untuk beralih baris
        }
        i++;
    }
    

/*=== Hentikan program ===*/
    return 0;
}