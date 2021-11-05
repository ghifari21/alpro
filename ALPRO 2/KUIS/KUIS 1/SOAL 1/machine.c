/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan KUIS 1        |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

matrix food[100][100];        //deklarasi membuka tipe data terstruktur

void input(){
   int i, j;      //deklarasi iterator
   int numFood, rowFood, columnFood;   //deklarasi variabel lokal

   scanf("%d %d %d", &row, &column, &numFood);  //input baris kolom dan banyaknya makanan yang ada di menu

   for ( i = 0; i < numFood; i++)      //looping
   {
      scanf("%d %d", &rowFood, &columnFood);          //input baris kolom makanan
      scanf("%s", &food[rowFood][columnFood].name);   //input nama makanan
      scanf("%d", &food[rowFood][columnFood].price);  //input harga makanan
   }

   scanf("%d", &foodEachPlayer);             //input banyaknya pesanan per pemain
   for ( i = 0; i < foodEachPlayer; i++)     //looping untuk pemain pertama
   {
      scanf("%d %d", &orderRowPlayerOne[i], &orderColumnPlayerOne[i]);  //inputan berupa baris dan kolom
   }
   for ( i = 0; i < foodEachPlayer; i++)     //looping untuk pemain kedua
   {
      scanf("%d %d", &orderRowPlayerTwo[i], &orderColumnPlayerTwo[i]);  //inputan berupa baris dan kolom
   }
}

void processAndOutput(){
   int i;      //deklarasi iterator
   int playerOneCost=0, playerTwoCost=0;     //deklarasi variabel dan nilai awalnya untuk jumlah harga pemain pertama dan kedua
   
   for ( i = 0; i < foodEachPlayer; i++)     //looping untuk pemain pertama
   {
      playerOneCost += food[orderRowPlayerOne[i]][orderColumnPlayerOne[i]].price;   //akan menjumlahkan harga makanan yang dipesan pemain pertama
   }
   for ( i = 0; i < foodEachPlayer; i++)     //looping untuk pemain kedua
   {
      playerTwoCost += food[orderRowPlayerTwo[i]][orderColumnPlayerTwo[i]].price;   //akan menjumlahkan harga makanan yang dipesan pemain kedua
   }

   printf("pemain pertama %d\n", playerOneCost);   //output harga total pemain pertama
   printf("pemain kedua %d\n", playerTwoCost);     //output harga total pemain kedua
   if (playerOneCost < playerTwoCost)              //jika total harga pemain pertama lebih kecil daripada pemain kedua
   {
      printf("pemenangnya pemain pertama\n");      //pemain pertama yang menang
   }else if (playerTwoCost < playerOneCost)        //jika total harga pemain kedua lebih kecil daripada pemain pertama
   {
      printf("pemenangnya pemain kedua\n");        //pemain kedua yang menang
   }
   else                                            //jika total harga mereka sama
   {
      printf("tidak ada pemenang\n");              //tidak ada pemenang
   }
}