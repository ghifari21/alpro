/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP3           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"     //library header.h

int main(){
    int i, j, num, bacteri0[100], bacteri1[100], time[100];         //deklarasi variabel lokal
    //  ^--^---^------^---------------^-----------^-----> iterator, banyak bakteri, banyak bakteri pada jam ke - 0, ke - 1, dan ke - n
    scanf("%d", &num);          //meminta input berapa banyak bakteri yang akan diperiksa
    for ( i = 0; i < num; i++)  //looping untuk meminta input banyak bakteri
    {
        scanf("%d %d %d", &bacteri0[i], &bacteri1[i], &time[i]);    //meminta input banyaknya bakteri pada jam ke 0, jam ke 1, dan index jam ke n
    }
    for ( i = 0; i < num; i++)          //looping untuk mengeluarkan output
    {
        zeroHour = bacteri0[i];         //nilai zeroHour sama dengan bacteri0
        firstHour = bacteri1[i];        //nilai firstHour sama dengan bacteri1
        printf("%d\n", count(time[i])); //output banyaknya bakteri pada jam ke n
    }
    return 0;
}