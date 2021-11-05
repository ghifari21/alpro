/*
============================================================
| Saya Ghifari Octaverin 2000952 mengerjakan Evaluasi      |
| dalam mata kuliah Algoritma dan Pemrograman II           |
| untuk keberkahanNya maka saya tidak melakukan kecurangan |
| seperti yang telah dispesifikasikan. Aamiin              |
============================================================
*/

#include "header.h"

void startKata(char pita[]){    //prosedur memulai mesin kata
   idx=0;      //nilai idx dan lenKata disetting menjadi 0
   lenKata=0;
   while (pita[idx] == ' ')    //jika bertemu dengan spasi
   {
      idx++;  //indeks akan dimajukan 1
   }
   while ((pita[idx] != ' ') && (EOP(pita) == 0))  //looping selama tidak bertemu dengan spasi dan EOP mengembalikan nilai 0
   {
      currentKata[lenKata] = pita[idx];   //pita akan dimasukan ke dalam currentKata
      idx++;      //idx bertambah 1
      lenKata++;  //lenKata bertambah 1
   }
   currentKata[lenKata] = '\0';    //menjadikan currentKata sebagai string 
}

void resetKata(){               //prosedur reset kata
   lenKata = 0;            //panjang kata menjadi 0
   currentKata[lenKata] = '\0';    //dan currentKata dengan panjang kata 0 dimasukan null
}

void incKata(char pita[]){  //prosedur memajukan kata
   lenKata = 0;            //membuat panjang kata menjadi 0
   while (pita[idx] == ' ')    //jika bertemu dengan spasi
   {
      idx++;  //indeks akan dimajukan
   }
   while (pita[idx] != ' ' && EOP(pita) == 0)  //looping selama tidak bertemu dengan spasi dan EOP mengembalikan nilai 0
   {
      currentKata[lenKata] = pita[idx];   //pita akan dimasukan kedalam currentKata
      idx++;      //idx bertambah 1
      lenKata++;  //lenKata bertambah 1
   }
   currentKata[lenKata] = '\0';    //menjadikan currentKata sebagai string
}

char *getCKata(){       //fungsi untuk mengembalikan currentKata
   return currentKata; //mengembalikan string currentKata
}

int getLenKata(){       //fungsi untuk mengembalikan panjang string
   return lenKata; //mengembalikan nilai lenKata
}

int EOP(char pita[]){   //fungsi untuk memeriksa akhir dari pita
   if (pita[idx] == ';')   //jika bertemu dengan titik (.)
   {
      return 1;   //akan mengembalikan nilai 1
   }else                   //jika tidak bertemu dengan titik (.)
   {
      return 0;   //maka mengembalikan nilai 0
   }
}