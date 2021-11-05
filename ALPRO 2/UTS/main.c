/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan UTS           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

int main(){
   int i, count1, count2, count3;   //iterator dan jumlah elemen negara 1, 2, dan 3
   char menthod[50], countryName1[100], countryName2[100], countryName3[100];    //metode dan nama negara 1, 2, dan 3

   scanf(" %s", &menthod);          //input metode sorting

   scanf(" %s", &countryName1);     //input nama negara 1
   scanf("%d", &count1);            //input banyaknya elemen array 1
   country dessertsOne[count1];     //array 1
   for ( i = 0; i < count1; i++)    //looping untuk input array 1
   {
      scanf("%s %d %d %d", &dessertsOne[i].name, &dessertsOne[i].calorie, &dessertsOne[i].gram, &dessertsOne[i].price);    //input nama, kalori, berat, dan harga
      dessertsOne[i].calPerGram = (float) dessertsOne[i].calorie / dessertsOne[i].gram;   //menghitung kalori per gram
      strcpy(dessertsOne[i].countryName, countryName1);  //memasukan nama negara 1 ke array 1
   }
   
   scanf(" %s", &countryName2);     //input nama negara 2
   scanf("%d", &count2);            //input banyaknya elemen array 2
   country dessertsTwo[count2];     //array 2
   for ( i = 0; i < count2; i++)    //looping untuk input array 2
   {
      scanf("%s %d %d %d", &dessertsTwo[i].name, &dessertsTwo[i].calorie, &dessertsTwo[i].gram, &dessertsTwo[i].price);    //input nama, kalori, berat, dan harga
      dessertsTwo[i].calPerGram = (float) dessertsTwo[i].calorie / dessertsTwo[i].gram;   //menghitung kalori per gram
      strcpy(dessertsTwo[i].countryName, countryName2);  //memasukan nama negara 2 ke array 2
   }
   
   scanf(" %s", &countryName3);     //input nama negara 3
   scanf("%d", &count3);            //input banyaknya elemen array 3
   country dessertsThree[count3];   //array 3
   for ( i = 0; i < count3; i++)    //looping untuk input array 3
   {
      scanf("%s %d %d %d", &dessertsThree[i].name, &dessertsThree[i].calorie, &dessertsThree[i].gram, &dessertsThree[i].price);  //input nama, kalori, berat, dan harga
      dessertsThree[i].calPerGram = (float) dessertsThree[i].calorie / dessertsThree[i].gram;   //menghitung kalori per gram
      strcpy(dessertsThree[i].countryName, countryName3);   //memasukan nama negara 3 ke array 3
   }
   
   if (strcmp(menthod, "is") == 0)  //jika input metode sortingnya insertionsort
   {
      insertionSort(count1, dessertsOne);    //>>
      insertionSort(count2, dessertsTwo);    //>>> menjalankan prosedur insertionsort
      insertionSort(count3, dessertsThree);  //>>
   }else if (strcmp(menthod, "ss") == 0)  //jika input metode sortingnya selectionsort
   {
      selectionSort(count1, dessertsOne);    //>>
      selectionSort(count2, dessertsTwo);    //>>> menjalankan prosedur selectionsort
      selectionSort(count3, dessertsThree);  //>>
   }else if (strcmp(menthod, "bs") == 0)  //jika input metode sortingnya bubblesort
   {
      bubbleSort(count1, dessertsOne);       //>>
      bubbleSort(count2, dessertsTwo);       //>>> menjalankan prosedur bubblesort
      bubbleSort(count3, dessertsThree);     //>>
   }else                                  //jika input metode sortingnya quicksort
   {
      quickSort(dessertsOne, 0, count1-1);   //>>
      quickSort(dessertsTwo, 0, count2-1);   //>>> menjalankan prosedur quicksort
      quickSort(dessertsThree, 0, count3-1); //>>
   }

   country mergeOneTwo[count1+count2], mergeAll[count1+count2+count3];        //array gabungan 1 2 dan array gabungan semuanya
   mergeSorted(count1, dessertsOne, count2, dessertsTwo, mergeOneTwo);        //menjalankan prosedur merge array untuk array 1 dan 2
   mergeSorted(count1+count2, mergeOneTwo, count3, dessertsThree, mergeAll);  //menjalankan prosedur merge array untuk gabungan array 1 2 dan 3
   
   printf("Per Negara:\n");
   printf("%s:\n", countryName1);   //output negara 1
   int temp;   //variabel untuk menyimpan nilai sementara
   for ( i = 0; i < count1; i++)    //looping untuk output array 1
   {
      temp = (int) dessertsOne[i].calPerGram;   //menjadikan kalori per gram menjadi integer dan dimasukan ke temp
      if (dessertsOne[i].calPerGram - temp == 0)   //jika kalori per gram (float) dikurang temp (integer) sama dengan 0 maka kalori per gram merupakan bilangan bulat
      {
         printf("- %s %d %d %d - %0.0f\n", dessertsOne[i].name, dessertsOne[i].calorie, dessertsOne[i].gram, dessertsOne[i].price, dessertsOne[i].calPerGram); //output jika kalori per gram adalah integer
      }else                                        //jika kalori per gram (float) dikurang temp (integer) tidak sama dengan 0 maka kalori per gram merupakan bilangan desimal
      {
         printf("- %s %d %d %d - %0.2f\n", dessertsOne[i].name, dessertsOne[i].calorie, dessertsOne[i].gram, dessertsOne[i].price, dessertsOne[i].calPerGram); //output jika kalori per gram adalah float
      }
   }
   printf("\n%s:\n", countryName2); //output negara 2
   for ( i = 0; i < count2; i++)    //looping untuk output array 2
   {
      temp = (int) dessertsTwo[i].calPerGram;   //menjadikan kalori per gram menjadi integer dan dimasukan ke temp
      if (dessertsTwo[i].calPerGram - temp == 0)   //jika kalori per gram (float) dikurang temp (integer) sama dengan 0 maka kalori per gram merupakan bilangan bulat
      {
         printf("- %s %d %d %d - %0.0f\n", dessertsTwo[i].name, dessertsTwo[i].calorie, dessertsTwo[i].gram, dessertsTwo[i].price, dessertsTwo[i].calPerGram); //output jika kalori per gram adalah integer
      }else                                        //jika kalori per gram (float) dikurang temp (integer) tidak sama dengan 0 maka kalori per gram merupakan bilangan desimal
      {
         printf("- %s %d %d %d - %0.2f\n", dessertsTwo[i].name, dessertsTwo[i].calorie, dessertsTwo[i].gram, dessertsTwo[i].price, dessertsTwo[i].calPerGram); //output jika kalori per gram adalah float
      }
   }
   printf("\n%s:\n", countryName3); //output negara 3
   for ( i = 0; i < count3; i++)    //looping untuk output array 3
   {
      temp = (int) dessertsThree[i].calPerGram; //menjadikan kalori per gram menjadi integer dan dimasukan ke temp
      if (dessertsThree[i].calPerGram - temp == 0) //jika kalori per gram (float) dikurang temp (integer) sama dengan 0 maka kalori per gram merupakan bilangan bulat
      {
         printf("- %s %d %d %d - %0.0f\n", dessertsThree[i].name, dessertsThree[i].calorie, dessertsThree[i].gram, dessertsThree[i].price, dessertsThree[i].calPerGram);   //output jika kalori per gram adalah integer
      }else                                        //jika kalori per gram (float) dikurang temp (integer) tidak sama dengan 0 maka kalori per gram merupakan bilangan desimal
      {
         printf("- %s %d %d %d - %0.2f\n", dessertsThree[i].name, dessertsThree[i].calorie, dessertsThree[i].gram, dessertsThree[i].price, dessertsThree[i].calPerGram);   //output jika kalori per gram adalah float
      }
   }
   printf("\nSemua:\n");
   for ( i = 0; i < count1+count2+count3; i++)  //looping untuk output array gabungan
   {
      temp = (int) mergeAll[i].calPerGram;   //menjadikan kalori per gram menjadi integer dan dimasukan ke temp
      if (mergeAll[i].calPerGram - temp == 0)   //jika kalori per gram (float) dikurang temp (integer) sama dengan 0 maka kalori per gram merupakan bilangan bulat
      {
         printf("- %s %s %d %d %d - %0.0f\n", mergeAll[i].countryName, mergeAll[i].name, mergeAll[i].calorie, mergeAll[i].gram, mergeAll[i].price, mergeAll[i].calPerGram);   //output jika kalori per gram adalah integer
      }else                                        //jika kalori per gram (float) dikurang temp (integer) tidak sama dengan 0 maka kalori per gram merupakan bilangan desimal
      {
         printf("- %s %s %d %d %d - %0.2f\n", mergeAll[i].countryName, mergeAll[i].name, mergeAll[i].calorie, mergeAll[i].gram, mergeAll[i].price, mergeAll[i].calPerGram);   //output jika kalori per gram adalah float
      }
   }
   

   return 0;
}