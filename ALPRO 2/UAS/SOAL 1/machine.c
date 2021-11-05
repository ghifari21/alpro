/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan UAS           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

void start(char pita[]){    //memulai mesin
    idx = 0;
    cc = pita[idx]; //memasukan pita ke cc
}

void inc(char pita[]){  //memajukan karakter
    idx++;
    cc = pita[idx];
}

int eop(){          //memeriksa eop
    if (cc == '.')
    {
        return 1;
    }else
    {
        return 0;
    }
}

void adv(char pita[]){  //memajukan karakter jika ada spasi
    idx++;
    cc = pita[idx];

    while (cc == ' ' && eop() == 0)
    {
        idx++;
        cc = pita[idx];
    }
}

char getCC(){   //fungsi untuk mereturn cc
    return cc;
}