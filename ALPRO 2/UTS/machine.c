/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan UTS           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

void mergeSorted(int n, country arr1[], int m, country arr2[], country arr3[]){  //prosedur merge array secara terurut descending
   int i=0, j=0, k=0, l=0;    //iterator

   while (i < n && j < m)     //looping untuk pengecekan
   {
      if (arr1[i].calPerGram > arr2[j].calPerGram)       //jika kalori per gram array 1 lebih besar daripada array 2
      {
         arr3[k].calPerGram = arr1[i].calPerGram;           //>>
         arr3[k].calorie = arr1[i].calorie;                 //>>
         arr3[k].gram = arr1[i].gram;                       //>>> memasukan nilai dari array 1 ke array 3
         arr3[k].price = arr1[i].price;                     //>>
         strcpy(arr3[k].name, arr1[i].name);                //>>
         strcpy(arr3[k].countryName, arr1[i].countryName);  //>>
         i++;  //i bertambah 1
         k++;  //k bertambah 1
      }
      else if (arr2[j].calPerGram > arr1[i].calPerGram)  //jika kalori per gram array 2 lebih besar daripada array 1
      {
         arr3[k].calPerGram = arr2[j].calPerGram;           //>>
         arr3[k].calorie = arr2[j].calorie;                 //>>
         arr3[k].gram = arr2[j].gram;                       //>>> memasukan nilai dari array 2 ke array 3
         arr3[k].price = arr2[j].price;                     //>>
         strcpy(arr3[k].name, arr2[j].name);                //>>
         strcpy(arr3[k].countryName, arr2[j].countryName);  //>>
         j++;  //j bertambah 1
         k++;  //k bertambah 1
      }
     else                                                //jika kalori per gram array 1 sama dengan array 2
      {
         arr3[k].calPerGram = arr1[i].calPerGram;           //>>
         arr3[k].calorie = arr1[i].calorie;                 //>>
         arr3[k].gram = arr1[i].gram;                       //>>> memasukan nilai dari array 1 ke array 3
         arr3[k].price = arr1[i].price;                     //>>
         strcpy(arr3[k].name, arr1[i].name);                //>>
         strcpy(arr3[k].countryName, arr1[i].countryName);  //>>
         i++;  //i bertambah 1
         k++;  //k bertambah 1
         arr3[k].calPerGram = arr2[j].calPerGram;           //>>
         arr3[k].calorie = arr2[j].calorie;                 //>>
         arr3[k].gram = arr2[j].gram;                       //>>> memasukan nilai dari array 2 ke array 3
         arr3[k].price = arr2[j].price;                     //>>
         strcpy(arr3[k].name, arr2[j].name);                //>>
         strcpy(arr3[k].countryName, arr2[j].countryName);  //>>
         j++;  //j bertambah 1
         k++;  //k bertambah 1
      }
   }
   if (i < n)  //jika array 1 masih bersisa
   {
     for ( l = i; l < n; l++) //looping untuk memasukan ke array 3
      {
         arr3[k].calPerGram = arr1[l].calPerGram;           //>>
         arr3[k].calorie = arr1[l].calorie;                 //>>
         arr3[k].gram = arr1[l].gram;                       //>>> memasukan nilai dari array 1 ke array 3
         arr3[k].price = arr1[l].price;                     //>>
         strcpy(arr3[k].name, arr1[l].name);                //>>
         strcpy(arr3[k].countryName, arr1[l].countryName);  //>>
         k++;  //k bertambah 1
      }
   }
   if (j < m)  //jika array 2 masih bersisa
   {
     for ( l = j; l < m; l++) //looping untuk memasukan ke array 3
      {
         arr3[k].calPerGram = arr2[l].calPerGram;           //>>
         arr3[k].calPerGram = arr2[l].calPerGram;           //>>
         arr3[k].calorie = arr2[l].calorie;                 //>>> memasukan nilai array 2 ke array 3
         arr3[k].gram = arr2[l].gram;                       //>>
         arr3[k].price = arr2[l].price;                     //>>
         strcpy(arr3[k].name, arr2[l].name);                //>>
         strcpy(arr3[k].countryName, arr2[l].countryName);  //>>
         k++;  //k bertambah 1
      }
   }
}

void insertionSort(int count, country arr[]){   //prosedur insertionsort descending
   int i, j, keyCal, keyGram, keyPrice;   //iterator dan variabel kunci
   float keyCalPerGram; //variabel kunci
   char keyName[100];   //variabel kunci

   for ( i = 0; i < count; i++)  //looping pengecekan
   {
      keyCalPerGram = arr[i].calPerGram;  //>>
      keyCal = arr[i].calorie;            //>>
      keyGram = arr[i].gram;              //>>> memasukan nilai array ke variabel kunci
      keyPrice = arr[i].price;            //>>
      strcpy(keyName, arr[i].name);       //>>
      j = i - 1;  //nilai awal j
      while (j >= 0 && keyCalPerGram > arr[j].calPerGram)   //selama j lebih besar 0 dan kunci kalori per gram lebih besar daripada array
      {
         arr[j+1].calPerGram = arr[j].calPerGram;  //>>
         arr[j+1].calorie = arr[j].calorie;        //>>
         arr[j+1].gram = arr[j].gram;              //>>> memasukan nilai array ke 1 indeks di depannya
         arr[j+1].price = arr[j].price;            //>>
         strcpy(arr[j+1].name, arr[j].name);       //>>
         j--;  //j berkurang 1
      }
      arr[j+1].calPerGram = keyCalPerGram;         //>>
      arr[j+1].calorie = keyCal;                   //>>
      arr[j+1].gram = keyGram;                     //>>> memasukan nilai kunci ke array dengan indeks j+1
      arr[j+1].price = keyPrice;                   //>>
      strcpy(arr[j+1].name, keyName);              //>>
   }
}

void selectionSort(int count, country arr[]){   //prosedur selectionsort descending
   int i, j, tempInt, idx; //iterator, variabel temporary dan indeks
   float tempFloat;        //variabel temporary
   char tempChar[100];     //variabel temporary

   for ( i = 0; i < count - 1; i++) //looping pengecekan
   {
      idx = i;             //nilai idx adalah i
      for ( j = i + 1; j < count; j++) //looping mencari nilai terbesar
      {
         if (arr[idx].calPerGram < arr[j].calPerGram) //jika array dengan indeks idx lebih kecil daripada dengan yang indeks j
         {
            idx = j;    //j menjadi nilai baru idx (karena j adalah indeks elemen terbesar)
         }
      }
      tempFloat = arr[i].calPerGram;            //>>
      arr[i].calPerGram = arr[idx].calPerGram;  //>>> swap nilai kalori per gram
      arr[idx].calPerGram = tempFloat;          //>>
      
      tempInt = arr[i].calorie;                 //>>
      arr[i].calorie = arr[idx].calorie;        //>>> swap nilai kalori
      arr[idx].calorie = tempInt;               //>>
      
      tempInt = arr[i].gram;                    //>>
      arr[i].gram = arr[idx].gram;              //>>> swap nilai berat
      arr[idx].gram = tempInt;                  //>>
      
      tempInt = arr[i].price;                   //>>
      arr[i].price = arr[idx].price;            //>>> swap nilai harga
      arr[idx].price = tempInt;                 //>>
      
      strcpy(tempChar, arr[i].name);            //>>
      strcpy(arr[i].name, arr[idx].name);       //>>> swap nama desserts
      strcpy(arr[idx].name, tempChar);          //>>
   }
}

void bubbleSort(int count, country arr[]){      //prosedur bubblesort descending
   int i, tempInt, swap;   //iterator, variabel temporary dan penanda
   float tempFloat;        //variabel temporary
   char tempChar[100];     //variabel temporary

   do
   {
      swap = 0;   //nilai awal swap
      for ( i = 0; i < count - 1; i++) //looping pengecekan
      {
         if (arr[i].calPerGram < arr[i+1].calPerGram) //jika kalori per gram lebih kecil daripada dengan indeks didepannya
         {
            tempFloat = arr[i].calPerGram;            //>>
            arr[i].calPerGram = arr[i+1].calPerGram;  //>>> swap nilai kalori per gram
            arr[i+1].calPerGram = tempFloat;          //>>
            
            tempInt = arr[i].calorie;                 //>>
            arr[i].calorie = arr[i+1].calorie;        //>>> swap nilai kalori
            arr[i+1].calorie = tempInt;               //>>
            
            tempInt = arr[i].gram;                    //>>
            arr[i].gram = arr[i+1].gram;              //>>> swap nilai berat
            arr[i+1].gram = tempInt;                  //>>
            
            tempInt = arr[i].price;                   //>>
            arr[i].price = arr[i+1].price;            //>>> swap nilai harga
            arr[i+1].price = tempInt;                 //>>
            
            strcpy(tempChar, arr[i].name);            //>>
            strcpy(arr[i].name, arr[i+1].name);       //>>> swap nama desserts
            strcpy(arr[i+1].name, tempChar);          //>>
            swap = 1;   //nilai swap menjadi 1 (yang menandakan adanya pertukaran)
         }
      }
   } while (swap == 1); //kode didalam akan dijalankan sampai tidak ada lagi pertukaran
}

void quickSort(country arr[], int left, int right){      //prosedur quicksort pivot pinggir descending
   int i, j, tempInt;   //iterator dan variabel temporary
   float tempFloat;     //variabel temporary
   char tempChar[100];  //variabel temporary
   i = left;   //nilai left dimasukan ke i
   j = right;  //nilai right dimasukan ke j

   do
   {
      while (arr[i].calPerGram > arr[right].calPerGram && i <= j) //selama nilai array dengan indeks i lebih besar daripada yang indeks right dan i <= j
      {
         i++;  //i bertambah 1
      }
      while (arr[j].calPerGram < arr[left].calPerGram && i <= j)  //selama nilai array dengan indeks j lebih kecil daripada yang indeks left dan i <= j
      {
         j--;  //j berkurang 1
      }
      if (i < j)  //jika i lebih kecil daripada j
      {
         tempFloat = arr[i].calPerGram;         //>>
         arr[i].calPerGram = arr[j].calPerGram; //>>> swap nilai kalori per gram
         arr[j].calPerGram = tempFloat;         //>>
         
         tempInt = arr[i].calorie;              //>>
         arr[i].calorie = arr[j].calorie;       //>>> swap nilai kalori
         arr[j].calorie = tempInt;              //>>
         
         tempInt = arr[i].gram;                 //>>
         arr[i].gram = arr[j].gram;             //>>> swap nilai berat
         arr[j].gram = tempInt;                 //>>
         
         tempInt = arr[i].price;                //>>
         arr[i].price = arr[j].price;           //>>> swap nilai harga
         arr[j].price = tempInt;                //>>
         
         strcpy(tempChar, arr[i].name);         //>>
         strcpy(arr[i].name, arr[j].name);      //>>> swap nama desserts
         strcpy(arr[j].name, tempChar);         //>>
         i++;  //i bertambah 1
         j--;  //j berkurang 1
      }
   } while (i < j);  //kode didalam akan dijalankan selama syarat terpenuhi

   if (left < j)  //jika left lebih kecil daripada j
   {
      quickSort(arr, left, j);   //rekursif dengan j sebagai parameter right
   }
   if (i < right) //jika i lebih kecil daripada right
   {
      quickSort(arr, i, right);  //rekursif dengan i sebagai parameter left
   }
}