/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP8           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

int main(){
    char name[50], id[50];      //deklarasi variabel untuk menampung string nama dan id
    char temp[3];               //deklarasi variabel temp untuk menampung 3 karakter
    int result=0;               //deklarasi variabel untuk menandakan kode yang dicari ketemu atau tidak

    scanf("%s %s", &name, &id); //meminta input user untuk nama dan id

    start(id);  //memulai mesin
    while (eop() == 0)          //looping selama pita belum habis
    {
        temp[0] = getCC();        //memasukan nilai karakter yang sedang ditampilkan ke temp dengan indeks 0
        if (eop() == 0)         //jika pita belum habis
        {
            inc(id);            //memajukan 1 karakter pita
            temp[1] = getCC();    //memasukan nilai karakter yang sedang ditampilkan ke temp dengan indeks 1
            if (eop() == 0)     //jika pita belum habis
            {
                inc(id);        //memajukan 1 karakter pita
                temp[2] = getCC();//memasukan nilai karakter yang sedang ditampilkan ke temp dengan indeks 2
                if ((temp[0] == 'x' && ((temp[1] == 'c' && temp[2] == 'v') || (temp[1] == 'a' && temp[2] == 'r'))) || (temp[0] == 'r' && temp[1] == 'a' && temp[2] == 'r'))
                {   //jika nilai dari gabungan temp dengan indeks 0 1 dan 2 adalah 'xcv' atau 'rar' atau 'xar'
                    result = 1; //maka result akan bernilai 1 dan menandakan kode tersebut ketemu
                }
            }
        }
    }
    if (result == 1)    //jika nilai result adalah 1 atau kode ketemu
    {
        printf("%s adalah Agen Rahasia.\n", name);
    }else               //jika nilai result adalah 0 atau kode tidak ketemu
    {
        printf("%s adalah pegawai biasa.\n", name);
    }

    return 0;
}