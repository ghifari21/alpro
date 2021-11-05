/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP4           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

void insertionSorting(int count, char mode[], char sortingBy[]){
    int i, j;           //deklarasi iterator
    char keyName[100];  //deklarasi variabel kunci nama barang
    float keyRating;    //deklarasi variabel kunci penilaian barang
    int keyPrice;       //deklarasi variabel kunci harga barang

    for ( i = 0; i < count; i++)    //looping
    {
        strcpy(keyName, itemName[i]);   //mengkopi isi dari itemname[i] kedalam keyname
        keyRating = itemRating[i];      //memasukan nilai itemrating[i] kedalam keyrating
        keyPrice = itemPrice[i];        //memasukan nilai itemprice[i] kedalam keyprice
        j = i - 1;      //nilai j adalan i dikurang 1
        if (strcmp(sortingBy, "nama") == 0)     //jika patokan sorting adalah nama
        {
            if (strcmp(mode, "asc") == 0)       //jika mode sorting adalah ascending
            {
                while (j>=0 && strcmp(keyName, itemName[j]) < 0)    //selama j lebih besar sama dengan 0 dan string itemname[i] > keyname
                {
                    strcpy(itemName[j+1], itemName[j]); //>>>
                    itemPrice[j+1] = itemPrice[j];      //>>>>>>>   geser ke depan atau pindah posisi
                    itemRating[j+1] = itemRating[j];    //>>>
                    j--;        //j akan terus berkuarang 1
                }
            }
            else                                //jika mode sorting adalah descending
            {
                while (j>=0 && strcmp(keyName, itemName[j]) > 0)    //selama j lebih besar sama dengan 0 dan string itemname[i] < keyname
                {
                    strcpy(itemName[j+1], itemName[j]); //>>>
                    itemPrice[j+1] = itemPrice[j];      //>>>>>>>   geser ke depan atau pindah posisi
                    itemRating[j+1] = itemRating[j];    //>>>
                    j--;        //j akan terus berkuarang 1
                }
            }
        }
        else if (strcmp(sortingBy, "harga") == 0)           //jika patokan sorting adalah harga
        {
            if (strcmp(mode, "asc") == 0)                   //jika mode sorting adalah ascending
            {
                while (j>=0 && keyPrice < itemPrice[j])     //selama j lebih besar sama dengan 0 dan keyprice < itemprice[j]
                {
                    strcpy(itemName[j+1], itemName[j]);     //>>>
                    itemPrice[j+1] = itemPrice[j];          //>>>>>>>   geser ke depan atau pindah posisi
                    itemRating[j+1] = itemRating[j];        //>>>
                    j--;        //j akan terus berkuarang 1
                }
            }
            else                                            //jika mode sorting adalah descending
            {
                while (j>=0 && keyPrice > itemPrice[j])     //selama j lebih besar sama dengan 0 dab keyprice > itemprice[j]
                {
                    strcpy(itemName[j+1], itemName[j]);     //>>>
                    itemPrice[j+1] = itemPrice[j];          //>>>>>>>   geser ke depan atau pindah posisi
                    itemRating[j+1] = itemRating[j];        //>>>
                    j--;        //j akan terus berkuarang 1
                }
            }
        }
        else                                                //jika patokan sorting adalah penilaian
        {
            if (strcmp(mode, "asc") == 0)                   //jika mode sorting adalah ascending
            {
                while (j>=0 && keyRating < itemRating[j])   //selama j lebih besar sama dengan 0 dan keyrating < itemrating[j]
                {
                    strcpy(itemName[j+1], itemName[j]);     //>>>
                    itemPrice[j+1] = itemPrice[j];          //>>>>>>>   geser ke depan atau pindah posisi
                    itemRating[j+1] = itemRating[j];        //>>>
                    j--;        //j akan terus berkuarang 1
                }
            }
            else                                            //jika mode sorting adalah descending
            {
                while (j>=0 && keyRating > itemRating[j])   //selama j lebih besar sama dengan 0 dan keyrating > itemrating[j]
                {
                    strcpy(itemName[j+1], itemName[j]);     //>>>
                    itemPrice[j+1] = itemPrice[j];          //>>>>>>>   geser ke depan atau pindah posisi
                    itemRating[j+1] = itemRating[j];        //>>>
                    j--;        //j akan terus berkuarang 1
                }
            }
        }
        strcpy(itemName[j+1], keyName);                     //menempatkan keyname pada itemname[j+1]
        itemPrice[j+1] = keyPrice;                          //menempatkan keyprice pada itemprice[j+1]
        itemRating[j+1] = keyRating;                        //menempatkan keyrating pada itemrating[j+1]
    }
}

void selectionSorting(int count, char mode[], char sortingBy[]){
    int i, j, minIdx, maxIdx;       //deklarasi iterator dan variabel untuk menampung min dan max index
    int tempPrice;                  //deklarasi variabel tempPrice
    float tempRating;               //deklarasi variabel tempRating
    char tempName[100];             //deklarasi variabel tempName

    if (strcmp(mode, "asc") == 0)           //jika mode sorting adalah ascending
    {
        for ( i = 0; i < count-1; i++)      //looping
        {
            minIdx = i;                     //nilai minIdx adalah i
            for ( j = i+1; j < count; j++)  //looping
            {
                if (strcmp(sortingBy, "nama") == 0)                 //jika patokan sorting adalah nama
                {
                    if (strcmp(itemName[minIdx], itemName[j]) > 0)  //jika itemname[minIdx] > itemname[j]
                    {
                        minIdx = j;         //j menjadi nilai minIdx baru
                    }
                }
                else if (strcmp(sortingBy, "harga") == 0)           //jika patokan sorting adalah harga
                {
                    if (itemPrice[minIdx] > itemPrice[j])           //jika itemprice[minIdx] > itemprice[j]
                    {
                        minIdx = j;         //j menjadi nilai minIdx baru
                    }
                }
                else                                                //jika patokan sorting adalah penilaian
                {
                    if (itemRating[minIdx] > itemRating[j])         //jika itemraing[minIdx] > itemrating[j]
                    {
                        minIdx = j;         //j menjadi nilai minIdx baru
                    }
                }
            }
            strcpy(tempName, itemName[i]);          //>>>
            strcpy(itemName[i], itemName[minIdx]);  //>>>>>>>   swap posisi
            strcpy(itemName[minIdx], tempName);     //>>>
            tempPrice = itemPrice[i];               //>>>
            itemPrice[i] = itemPrice[minIdx];       //>>>>>>>   swap posisi
            itemPrice[minIdx] = tempPrice;          //>>>
            tempRating = itemRating[i];             //>>>
            itemRating[i] = itemRating[minIdx];     //>>>>>>>   swap posisi
            itemRating[minIdx] = tempRating;        //>>>
        }
    }
    else                                    //jika mode sorting adalah descending
    {
        for ( i = 0; i < count-1; i++)      //looping
        {
            maxIdx = i;                     //nilai maxIdx adalah i
            for ( j = i+1; j < count; j++)     //looping
            {
                if (strcmp(sortingBy, "nama") == 0)                     //jika patokan sorting adalah nama
                {
                    if (strcmp(itemName[maxIdx], itemName[j]) < 0)      //jika itemname[maxIdx] < itemname[j]
                    {
                        maxIdx = j;         //j menjadi nilai maxIdx
                    }
                }
                else if (strcmp(sortingBy, "harga") == 0)               //jika patokan sorting adalah harga
                {
                    if (itemPrice[maxIdx] < itemPrice[j])               //jika itemprice[maxIdx] < itemprice[j]
                    {
                        maxIdx = j;         //j menjadi nilai maxIdx
                    }
                }
                else                                                    //jika patokan sorting adalah penilaian
                {
                    if (itemRating[maxIdx] < itemRating[j])             //jika itemrating[maxIdx] < itemprice[j]
                    {
                        maxIdx = j;         //j menjadi nilai maxIdx
                    }
                }
            }
            strcpy(tempName, itemName[i]);              //>>>
            strcpy(itemName[i], itemName[maxIdx]);      //>>>>>>>   swap posisi
            strcpy(itemName[maxIdx], tempName);         //>>>
            tempPrice = itemPrice[i];                   //>>>
            itemPrice[i] = itemPrice[maxIdx];           //>>>>>>>   swap posisi
            itemPrice[maxIdx] = tempPrice;              //>>>
            tempRating = itemRating[i];                 //>>>
            itemRating[i] = itemRating[maxIdx];         //>>>>>>>   swap posisi
            itemRating[maxIdx] = tempRating;            //>>>
        }
    }
}

void printOutput(int count){
    int i;      //deklarasi iterator
    for ( i = 0; i < count; i++)    //looping
    {
        printf("%s %d %0.1f\n", itemName[i], itemPrice[i], itemRating[i]);      //print output
    }
}