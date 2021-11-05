/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan Evaluasi      |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

void mergeSorted(int n, student arr1[], int m, student arr2[], student arr3[]){  //prosedur merge array secara terurut
   int i=0, j=0, k=0, l=0;    //deklarasi iterator

   while (i < n && j < m)     //looping selama syarat terpenuhi
   {
      if (strcmp(arr1[i].name, arr2[j].name) < 0)  //jika string dari array 1 lebih kecil daripada string dari array 2
      {
         strcpy(arr3[k].name, arr1[i].name);       //>>
         arr3[k].grade1 = arr1[i].grade1;          //>>> memasukan nilai dari array 1 ke array 3
         arr3[k].grade2 = arr1[i].grade2;          //>>
         i++;  //i bertambah 1
         k++;  //k bertambah 1
      }else if (strcmp(arr2[j].name, arr1[i].name) < 0)  //jika string dari array 2 lebih kecil daripada string dari array 1
      {
         strcpy(arr3[k].name, arr2[j].name);       //>>
         arr3[k].grade1 = arr2[j].grade1;          //>>> memasukan nilai dari array 2 ke array 3
         arr3[k].grade2 = arr2[j].grade2;          //>>
         j++;  //j bertambah 1
         k++;  //k bertambah 1
      }else                                        //jika string dari array tersebut sama
      {
         strcpy(arr3[k].name, arr1[i].name);       //>>
         arr3[k].grade1 = arr1[i].grade1;          //>>> memasukan nilai dari array 1 ke array 3
         arr3[k].grade2 = arr1[i].grade2;          //>>
         i++;  //i bertambah 1
         k++;  //k bertambah 1
         strcpy(arr3[k].name, arr2[j].name);       //>>
         arr3[k].grade1 = arr2[j].grade1;          //>>> memasukan nilai dari array 2 ke array 3
         arr3[k].grade2 = arr2[j].grade2;          //>>
         j++;  //j bertambah 1
         k++;  //k bertambah 1
      }  
   }
   if (i < n)  //jika array 1 masih memiliki sisa
   {
      for ( l = i; l < n; l++)   //looping untuk memasukan nilai dari array 1 ke array 3
      {
         strcpy(arr3[k].name, arr1[l].name);       //>>
         arr3[k].grade1 = arr1[l].grade1;          //>>> memasukan nilai dari array 1 ke array 3
         arr3[k].grade2 = arr1[l].grade2;          //>>
         k++;  //k bertambah 1
      }
   }
   if (j < m)  //jika array 2 masih memiliki sisa
   {
      for ( l = j; l < m; l++)   //looping untuk memasukan nilai dari array 2 ke array 3
      {
         strcpy(arr3[k].name, arr2[l].name);       //>>
         arr3[k].grade1 = arr2[l].grade1;          //>>> memasukan nilai dari array 2 ke array 3
         arr3[k].grade2 = arr2[l].grade2;          //>>
         k++;  //k bertambah 1
      }
   }
}

void selectionSort(int count, student arr[]){   //prosedur selectionsort
   int i, j, tempGrade, idx;     //deklarasi variabel iterator, menampung nilai grade sementara, dan idx
   char tempName[100];           //deklarasi variabel char penyimpan nilai string nama sementara

   for ( i = 0; i < count - 1; i++) //looping pengecekan
   {
      idx = i;    //nilai idx adalah i
      for ( j = i+1; j < count; j++)   //looping pengecekan
      {
         if (strcmp(arr[idx].name, arr[j].name) > 0)  //jika string dengan indeks idx memiliki nilai yang lebih besar dari string dengan indeks j
         {
            idx = j; //j menjadi nilai baru idx
         }
      }
      strcpy(tempName, arr[i].name);      //>>
      strcpy(arr[i].name, arr[idx].name); //>>> swap nama
      strcpy(arr[idx].name, tempName);    //>>

      tempGrade = arr[i].grade1;          //>>
      arr[i].grade1 = arr[idx].grade1;    //>>> swap nilai 1
      arr[idx].grade1 = tempGrade;        //>>
      
      tempGrade = arr[i].grade2;          //>>
      arr[i].grade2 = arr[idx].grade2;    //>>> swap nilai 2
      arr[idx].grade2 = tempGrade;        //>>
   }
}

void printOutput(int count, student arr[]){  //prosedur output
   int i;   //variabel iterator

   printf("================\n");
   for ( i = 0; i < count; i++)  //looping untuk output gabungan penuh
   {
      printf("%s %d %d\n", arr[i].name, arr[i].grade1, arr[i].grade2);  //output
   }
   printf("================\n");
   for ( i = 0; i < count / 2; i++) //looping untuk output gabungan setengah awal
   {
      printf("%s %d %d\n", arr[i].name, arr[i].grade1, arr[i].grade2);  //output
   }
   printf("================\n");
   for ( i = count / 2; i < count; i++)   //looping untuk output gabungan setengah akhir
   {
      printf("%s %d %d\n", arr[i].name, arr[i].grade1, arr[i].grade2);  //output
   }
}