/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP4           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

int main(){
    int i, j, count;                                //deklarasi variabel untuk iterator dan banyaknya barang
    char mode[50], sortingBy[50], menthod[50];      //deklarasi variabel untuk string mode, patokan sorting, dan metode sorting
    scanf("%d", &count);                            //meminta input user untuk banyaknya barang
    for ( i = 0; i < count; i++)    //looping
    {
        scanf("%s", &itemName[i]);                  //input nama barang
        scanf("%d", &itemPrice[i]);                 //input harga barang
        scanf("%f", &itemRating[i]);                //input penilaian barang
    }
    scanf("%s", &menthod);                          //input metode sorting
    scanf("%s", &mode);                             //input mode sorting (asc/desc)
    scanf("%s", &sortingBy);                        //input patokan sorting (nama/harga/penilaian)

    if (strcmp(menthod, "insertion") == 0)          //jika input metode sorting adalah insertion
    {
        insertionSorting(count, mode, sortingBy);   //maka akan menjalankan prosedur insertionSorting
    }
    else if (strcmp(menthod, "selection") == 0)     //jika input metode sorting adalah selection
    {
        selectionSorting(count, mode, sortingBy);   //maka akan menjalankan prosedur selectionSorting
    }
    
    printOutput(count);                             //menjalankan prosedur printOutput

    return 0;
}