/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan Evaluasi      |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

void insert(char pita[]){
   idxQuery=0;
   startKata(pita);
   strcpy(query[idxQuery], getCKata());
   idxQuery++;
   while (EOP(pita) == 0)
   {
      incKata(pita);
      strcpy(query[idxQuery], getCKata());
      idxQuery++;
   }
}

void reset(){
   int i;
   for ( i = 0; i < idxQuery; i++)
   {
      strcpy(query[i], "\0");
   }
}

void sorting(data arr[], int left, int right){
   int i, j;
   char temp[100];
   i = left;
   j = right;

   do
   {
      while (strcmp(arr[i].id, arr[right].id) < 0 && i <= j)
      {
         i++;
      }
      while (strcmp(arr[j].id, arr[left].id) > 0 && i <= j)
      {
         j--;
      }
      if (i < j)
      {
         //swap
         strcpy(temp, arr[i].id);
         strcpy(arr[i].id, arr[j].id);
         strcpy(arr[j].id, temp);
         //swap
         strcpy(temp, arr[i].name);
         strcpy(arr[i].name, arr[j].name);
         strcpy(arr[j].name, temp);
         //swap
         strcpy(temp, arr[i].class);
         strcpy(arr[i].class, arr[j].class);
         strcpy(arr[j].class, temp);

         i++;
         j--;
      }
   } while (i < j);
   
   if (left < j)
   {
      sorting(arr, left, j);    //rekursif
   }
   if (i < right)
   {
      sorting(arr, i, right);   //rekursif
   }
}

void startKata(char pita[]){
   idx=0;
   lenKata=0;
   while (pita[idx] == ' ')
   {
      idx++;
   }
   while ((pita[idx] != ' ') && (EOP(pita) == 0))
   {
      currentKata[lenKata] = pita[idx];
      idx++;
      lenKata++;
   }
   currentKata[lenKata] = '\0';
}

void resetKata(){
   lenKata = 0;
   currentKata[lenKata] = '\0';
}

void incKata(char pita[]){
   lenKata = 0;
   while (pita[idx] == ' ')
   {
      idx++;
   }
   while (pita[idx] != ' ' && EOP(pita) == 0)
   {
      currentKata[lenKata] = pita[idx];
      idx++;
      lenKata++;
   }
   currentKata[lenKata] = '\0';
}

char *getCKata(){
   return currentKata;
}

int getLenKata(){
   return lenKata;
}

int EOP(char pita[]){
   if (pita[idx] == ';')
   {
      return 1;
   }else
   {
      return 0;
   }
}