/*
    =====================================================================================
    |   Saya Ghifari Octaverin [2000952] mengerjakan evaluasi Tugas Masa Depan          |
    |   dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka         |
    |   saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.    |
    =====================================================================================
*/

#include "header.h"

int main(){
    //membersihkan cmd / terminal
    #ifdef _WIN32
        system("cls");      //windows
    #else
        system("clear");    //linux
    #endif

    //deklarasi variabel
    char pita[500];
    int i;

    printf("Welcome to the DMBS Ghifari's Computer Shop\nVersion 1.0\n\n");
    while (1)
    {
        printf("Ghifari's DBMS > ");
        insertQuery(pita);  //memanggil prosedur insertQuery

        if (strcmp(pita, "jangan lupa bahagia hari ini;") == 0 || strcmp(pita, "exit;") == 0)   //jika pita berisi string perintah keluar program
        {
            printf("Bye!\n");
            exit(0);    //keluar program
        }else
        {
            if (((strcmp(query[1], "UPDATE") == 0 || strcmp(query[1], "update") == 0) && idxQuery <= 7) || ((strcmp(query[1], "UPDATE") != 0 || strcmp(query[1], "update") != 0) && idxQuery <= 6))
            {   //jika panjang query pas
                queryBridge();      //memanggil prosedur jembatan query
            }else   //jika panjang query berlebih
            {
                errorMessage(3);    //memanggil prosedur pesan error
            }
        }
    }

    return 0;
}