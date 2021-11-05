/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP8           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

void start(char pita[]){    //prosedur untuk memulai mesin
    idx = 0;        //merubah nilai index menjadi 0
    cc = pita[idx]; //karakter yang ditampilkan adalah karakter pertama dari pita
}

void inc(char pita[]){      //prosedur untuk memajukan satu karakter pada pita
    idx++;          //nilai idx akan bertambah 1
    cc = pita[idx]; //karakter yang ditampilkan adalah karakter yang telah diperbarui
}

int eop(){                  //fungsi untuk mengecek akhir dari pita
    if (cc == '.')  //jika karakter yang ditampilkan adalah titik
    {
        return 1;   //akan mereturn nilai 1
    }else           //jika karakter yang ditampilkan bukan titik
    {
        return 0;   //akan mereturn nilai 0
    }
}

char getCC(){               //fungsi untuk mengambil nilai karakter yang sedang ditampilkan
    return cc;      //mereturn nilai cc
}