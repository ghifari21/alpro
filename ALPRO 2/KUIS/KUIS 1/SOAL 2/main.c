/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan KUIS 1        |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"     //LIBRARY HEADER.H

int main(){
    unsigned long int data1, data2;     //dekalaasi variabel dengan tipe data unsigned long int
    scanf("%lu %lu", &data1, &data2);   //inputan user
    recursive(data1, data2);            //memanngil prosedur recursive
    
    return 0;
}