/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP7           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

int main(){
   int i, j, count, search;   //deklarasi variabel
   // ^---^    --> iterator
   //--------^ --> banyaknya siswa
   //---------------^   --> indeks yang dicari
   scanf("%d", &count);    //input banyaknya siswa
   data student[count];    //deklarasi array of bungkusan
   float avg[count];       //deklarasi variabel berbentuk array untuk menyimpan nilai rata rata
   for ( i = 0; i < count; i++)  //looping untuk input nama, banyaknya kegiatan dan nilai
   {
      scanf(" %s %d", &student[i].name, &student[i].activity); //nama dan banyaknya kegiatan
      for ( j = 0; j < student[i].activity; j++)   //looping untuk nilai kegiatan
      {
         scanf("%d", &student[i].activityGrade[j]);   //nilai kegiatan
         avg[i]+=(float)student[i].activityGrade[j];  //menghitung total nilai kegiatan
      }
      avg[i]/=(float)student[i].activity; //menghitung nilai rata rata dari nilai kegiatan
   }
   scanf("%d", &search);      //input indeks yang dicari

   if (checkSorted(avg, count) == 1)      //jika nilai rata rata sudah terurut
   {
      output(student, count);             //menjalankan prosedur output
      binSearch(student, count, search);  //menjalankan prosedur binary search
   }else                                  //jika nilai rata rata belum terurut
   {
      sorting(count, avg, student);       //menjalankan prosedur sorting
      output(student, count);             //menjalanlan prosedur output
      seqSearch(student, count, search);  //menjalankan prosedur sequential search
   }
   
   return 0;
}