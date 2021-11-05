/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan Evaluasi      |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

int main(){
   int i, j, idxTrain=0, idxSelect=0, found=0;  //variabel iterator, index, dan penanda
   char pita[200];   //pita
   data train[100];  //struct untuk menampung semua data
   data select[100]; //struct untuk menampung data yang akan ditampilkan

   while (found == 0)   //looping selama nilai found = 0
   {
      scanf(" %199[^\n]s", pita);   //input
      startKata(pita);  //memulai mesin kata
      if (EOP(pita) == 0)  //jika bukan akhir pita
      {
         if (strcmp(getCKata(), "INSERT") == 0) //jika currentkata adalah insert
         {
            //memasukan data kedalam struct
            incKata(pita);
            strcpy(train[idxTrain].id, getCKata());
            incKata(pita);
            strcpy(train[idxTrain].name, getCKata());
            incKata(pita);
            strcpy(train[idxTrain].class, getCKata());
            idxTrain++; //index bertambah 1
         }else if (strcmp(getCKata(), "CARI") == 0)   //jika currentkata adalah cari
         {
            incKata(pita); //memajukan kata
            if (strcmp(getCKata(), "id") == 0)  //jika pencarian berdasarkan kolom id
            {
               //memasukan id, nama, dan kelas yang dicari kedalam struct select
               incKata(pita);
               for ( i = 0; i < idxTrain; i++)
               {
                  if (strcmp(train[i].id, getCKata()) == 0)
                  {
                     strcpy(select[idxSelect].id, train[i].id);
                     strcpy(select[idxSelect].name, train[i].name);
                     strcpy(select[idxSelect].class, train[i].class);
                     idxSelect++;   //index bertambah 1
                  }
               }
            }else if (strcmp(getCKata(), "nama") == 0)   //jika pencarian berdasarkan kolom nama
            {
               //memasukan id, nama, dan kelas yang dicari kedalam struct select
               incKata(pita);
               for ( i = 0; i < idxTrain; i++)
               {
                  if (strcmp(train[i].name, getCKata()) == 0)
                  {
                     strcpy(select[idxSelect].id, train[i].id);
                     strcpy(select[idxSelect].name, train[i].name);
                     strcpy(select[idxSelect].class, train[i].class);
                     idxSelect++;   //index bertambah 1
                  }
               }
            }else if (strcmp(getCKata(), "kelas") == 0)  //jika pencarian berdasarkan kolom kelas
            {
               //memasukan id, nama, dan kelas yang dicari kedalam struct select
               incKata(pita);
               for ( i = 0; i < idxTrain; i++)
               {
                  if (strcmp(train[i].class, getCKata()) == 0)
                  {
                     strcpy(select[idxSelect].id, train[i].id);
                     strcpy(select[idxSelect].name, train[i].name);
                     strcpy(select[idxSelect].class, train[i].class);
                     idxSelect++;   //index bertambah 1
                  }
               }
            }
         }
      }
      if (strcmp(getCKata(), "TAMPILKAN") == 0) //jika currentkata adalah tampilkan
      {
         found = 1;  //nilai found menjadi 1 untuk keluar dari looping
      }
   }

   int maxID=0, maxName=0, maxClass=0; //variabel nilai max kolom id, nama, dan kelas
   //looping untuk mencari panjang string max
   for ( i = 0; i < idxSelect; i++)
   {
      //untuk kolom id
      if (strlen(select[i].id) > maxID)
      {
         maxID = strlen(select[i].id);
         if (strlen("ID Kereta") > maxID)
         {
            maxID = strlen("ID Kereta");
         }
      }
      //untuk kolom nama
      if (strlen(select[i].name) > maxName)
      {
         maxName = strlen(select[i].name);
         if (strlen("Nama Kereta") > maxName)
         {
            maxName = strlen("Nama Kereta");
         }
      }
      //untuk kolom kelas
      if (strlen(select[i].class) > maxClass)
      {
         maxClass = strlen(select[i].class);
         if (strlen("Kelas") > maxClass)
         {
            maxClass = strlen("Kelas");
         }
      }
   }
   //output dalam bentuk tabel
   printf("TABEL HASIL PENCARIAN\n");
   for ( i = 0; i < maxID+maxName+maxClass+10; i++)
   {
      printf("=");
   }
   printf("\n| ID Kereta");
   for ( i = 0; i < maxID-strlen("ID Kereta"); i++)
   {
      printf(" ");
   }
   printf(" | Nama Kereta");
   for ( i = 0; i < maxName-strlen("Nama Kereta"); i++)
   {
      printf(" ");
   }
   printf(" | Kelas");
   for ( i = 0; i < maxClass-strlen("Kelas"); i++)
   {
      printf(" ");
   }
   printf(" |\n");
   for ( i = 0; i < maxID+maxName+maxClass+10; i++)
   {
      printf("=");
   }
   printf("\n");
   for ( i = 0; i < idxSelect; i++)
   {
      printf("| %s", select[i].id);
      for ( j = 0; j < maxID-strlen(select[i].id); j++)
      {
         printf(" ");
      }
      printf(" | %s", select[i].name);
      for ( j = 0; j < maxName-strlen(select[i].name); j++)
      {
         printf(" ");
      }
      printf(" | %s", select[i].class);
      for ( j = 0; j < maxClass-strlen(select[i].class); j++)
      {
         printf(" ");
      }
      printf(" |\n");
   }
   for ( i = 0; i < maxID+maxName+maxClass+10; i++)
   {
      printf("=");
   }
   printf("\n%d data dalam tabel.\n", idxSelect);

   return 0;
}