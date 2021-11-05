/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan KUIS 2        |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

void insertionSort(int count, kurma arr[], int pricePerGram[]){   //prosedur insertionSort
   int i, j, keyPricePerGram, keyPrice, keyWeight, keyStatus;
   //  ^--^ -------------------------------------------------- > iterator
   //         ^ ---------------------------------------------- > kunci harga per gram
   //                          ^ ----------------------------- > kunci harga
   //                                    ^ ------------------- > kunci berat
   //                                                ^ ------- > kunci status
   char keyName[100];   //kunci nama kurma

   for ( i = 0; i < count; i++)  //looping pengecekan
   {
      keyPricePerGram = pricePerGram[i];  //memasukan harga per gram ke kunci
      strcpy(keyName, arr[i].name);       //memasukan nama kurma ke kunci
      keyWeight = arr[i].weight;          //memasukan berat ke kunci
      keyPrice = arr[i].price;            //memasukan harga ke kunci
      keyStatus = arr[i].status;          //memasukan status ke kunci
      j = i - 1;  //nilai j adalah i - 1
      while (j >= 0 && keyPricePerGram < pricePerGram[j])   //looping selama j lebih besar dari 0 dan kunci harga per gram lebih kecil daripada harga per gram dengan index j
      {
         pricePerGram[j+1] = pricePerGram[j];   //memasukan harga per gram dengan index j ke yang berindex j+1
         strcpy(arr[j+1].name, arr[j].name);    //memasukan nama kurma dengan index j ke yang berindex j+1
         arr[j+1].weight = arr[j].weight;       //memasukan berat dengan index j ke yang berindex j+1
         arr[j+1].price = arr[j].price;         //memasukan harga dengan index j ke yang berindex j+1
         arr[j+1].status = arr[j].status;       //memasukan status dengan index j ke yang berindex j+1
         j--;  //j berkurang 1
      }
      pricePerGram[j+1] = keyPricePerGram;   //memasukan kunci ke harga per gram yang berindex j+1
      strcpy(arr[j+1].name, keyName);        //memasukan kunci ke nama kurma yang berindex j+1
      arr[j+1].weight = keyWeight;           //memasukan kunci ke berat yang berindex j+1
      arr[j+1].price = keyPrice;             //memasukan kunci ke harga yang berindex j+1
      arr[j+1].status = keyStatus;           //memasukan kunci ke status yang berindex j+1
   }
}

int binarySearch(int count, int search, int pricePerGram[]){
   int i=0, k, found=0;
   //  ^----^ -------------- > iterator
   //          ^ ----------- > indikator nilai yang dicari ketemu
   count--; //count berkurang 1

   while (i <= count && found == 0) //selama nilai i lebih kecil sama dengan count dan nilai found sama dengan 0
   {
      k = (int)(i+count) / 2;       //nilai k adalah i + count dibagi 2
      if (pricePerGram[k] == search)   //jika harga per gram dengan index k sama dengan yang dicari
      {
         found = 1;  //nilai found menjadi 1
      }else //jika belum ketemu
      {
         if (pricePerGram[k] > search) //jika harga per gram dengan index k lebih besar daripada yang dicari
         {
            count = k - 1; //nilai count menjadi k - 1
         }else //jika harga per gram dengan index k lebih kecil daripada yang dicari
         {
            i = k + 1;  //nilai i menjadi k + 1
         }
      }
   }
   if (found == 1)   //jika found bernilai 1
   {
      return k;   //akan mereturn nilai k (indexnya)
   }else             //jika found bernilai 0
   {
      return -1;  //akan mereturn nilai -1 (menandakan yang dicari tidak ketemu)
   }
}