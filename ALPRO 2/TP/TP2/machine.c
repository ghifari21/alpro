/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP2           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"        //LIBRARY HEADER.H

int checkingGrade(float avg1, float avg2){      //fungsi checkingGrade
   int true=0;          //deklarasi variable lokal dan nilai awal
   if (avg1 >= avg2)    //jika avg1 lebih besar atau sama dengan avg2
   {
      true=1;           //maka nilai true menjadi 1
   }else                //jika avg1 tidak lebih besar atau sama dengan avg2
   {
      true=0;           //maka nilai true akan tetap 0
   }

   return true;         //return nilai true
}

void dataSearch(int n, int m, data student[n][m], int count){     //prosedur dataSearch
   int i, j, k, found=0;                                    //deklarasi variable lokal dan nilai awal
   int rowSearch, columnSearch, rowTarget, columnTarget;    //deklarasi variable lokal
   float avgSearch, avgTarget;                              //deklarasi variable lokal
   data temp;              //membuka bungkusan tipe data terstruktur

   i=0;     //membuat nilai awal i menjadi 0
   while (i < count)    //selama i lebih kecil daripada count
   {
      j=0, found=0;     //membuat nilai awal j dan found menjadi 0
      while ((j < n) && (found == 0))     //selama j lebih kecil daripada n dan found sama dengan 0
      {
         k=0;           //membuat nilai awal k menjadi 0
         while ((k < m) && (found == 0))  //selama k lebih kecil daripada m dan found sama dengan 0
         {
            if (strcmp(student[j][k].name, search[i]) == 0)    //jika string nama sama dengan string yang akan diganti
            {
               rowSearch = j;       //j menjadi nilai rowSearch
               columnSearch = k;    //k menjadi nilai columnSearch
               avgSearch = (student[j][k].grade1 + student[j][k].grade2 + student[j][k].grade3) / 3;     //menghitung rata ratanya
               found=1;             //nilai found menjadi 1 agar langsung keluar dari looping
            }
            k++;     //nilai k akan terus bertambah 1
         } 
         j++;        //nilai j akan terus bertambah 1
      }
      j=0, found=0;  //membuat nilai j dan found menjadi 0
      while ((j < n) && (found == 0))     //selama j lebih kecil daripada n dan found sama dengan 0
      {
         k=0;        //membuat nilai k menjadi 0
         while ((k < m) && (found == 0))  //selama k lebih kecil daripada m dan found sama dengan 0
         {
            if (strcmp(student[j][k].name, target[i]) == 0)    //jika string nama sama dengan string pengganti
            {
               rowTarget = j;       //j akan menjadi nilai rowTarget
               columnTarget = k;    //k akan menjadi nilai columnTarget
               avgTarget = (student[j][k].grade1 + student[j][k].grade2 + student[j][k].grade3) / 3;     //menghitung rata ratanya
               found=1;             //nilai found menjadi 1 akan langsung keluar dari looping
            }
            k++;     //nilai k akan terus bertambah 1
         }
         j++;        //nilai j akan terus bertambah 1
      }
      if (checkingGrade(avgSearch, avgTarget) == 1)      //jika avgSearch lebih besar atau sama dengan avgTarget
      {
         //melakukan proses swap string nama
         strcpy(temp.name, student[rowSearch][columnSearch].name);         //string nama yang akan diganti akan dimasukan kedalam temp
         strcpy(student[rowSearch][columnSearch].name, student[rowTarget][columnTarget].name);     //string nama yang diganti  akan digantikan dengan string nama pengganti
         strcpy(student[rowTarget][columnTarget].name, temp.name);         //string nama pengganti akan diganti oleh isi dari temp
         //melakukan proses swap nilai 1
         temp.grade1 = student[rowSearch][columnSearch].grade1;            //nilai 1 dari string yang akan diganti dimasukan kedalam temp
         student[rowSearch][columnSearch].grade1 = student[rowTarget][columnTarget].grade1;        //nilai 1 yang akan diganti akan digantikan dengan nilai 1 pengganti
         student[rowTarget][columnTarget].grade1 = temp.grade1;            //nilai 1 dari pengganti akan diganti oleh isi dari temp 
         //melakukan proses swap nilai 2
         temp.grade2 = student[rowSearch][columnSearch].grade2;            //nilai 2 dari string yang akan diganti dimasukan kedalam temp
         student[rowSearch][columnSearch].grade2 = student[rowTarget][columnTarget].grade2;        //nilai 2 yang akan diganti akan digantikan dengan nilai 2 pengganti
         student[rowTarget][columnTarget].grade2 = temp.grade2;            //nilai 2 dari pengganti akan diganti oleh isi dari temp 
         //melakukan proses swap nilai 3
         temp.grade3 = student[rowSearch][columnSearch].grade3;            //nilai 2 dari string yang akan diganti dimasukan kedalam temp
         student[rowSearch][columnSearch].grade3 = student[rowTarget][columnTarget].grade3;        //nilai 2 yang akan diganti akan digantikan dengan nilai 2 pengganti
         student[rowTarget][columnTarget].grade3 = temp.grade3;            //nilai 3 dari pengganti akan diganti oleh isi dari temp 
      }
   i++;           //nilai i akan terus bertambah 1
   }
}