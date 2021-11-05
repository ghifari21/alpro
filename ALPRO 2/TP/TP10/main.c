/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP10          |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

int main(){
    int i, count=0;                         //variabel untuk iterator looping dan menampung nilai ascii string
    char pita[200], temp[100];              //variabel string pita dan temp
    char baku[50][100], nonBaku[50][100];   //variabel array of string untuk menyimpan kata baku dan non baku
    int idxBaku=0, idxNonBaku=0;

    scanf(" %199[^\n]s", pita);             //meminta input pita
    start(pita);                            //memulai mesin kata
    strcpy(temp, getCWord());               //memasukan currentWord ke dalam temp
    for ( i = 0; i < getLenWord(); i++)     //looping untuk menghitung nilai ascii string
    {
        count += temp[i];                   //menghitung nilai total ascii string
    }
    if (count % 2 == 0)                     //jika nilai total ascii tersebut genap
    {
        strcpy(baku[idxBaku], temp);        //maka string tersebut dimasukan ke array of string baku
        idxBaku++;                          //idxBaku akan bertambah 1
    }else                                   //jika nilai total ascii tersebut ganjil
    {
        strcpy(nonBaku[idxNonBaku], temp);  //maka string tersebut dimasukan ke array of string non baku
        idxNonBaku++;                       //idxNonBaku akan bertambah 1
    }

    while (EOP(pita) == 0)                  //looping selama EOP mengembalikan nilai 0
    {
        count=0;                            //membuat nilai count menjadi 0
        incWord(pita);                      //memajukan kata
        strcpy(temp, getCWord());           //memasukan currentWord ke dalam temp
        for ( i = 0; i < getLenWord(); i++) //looping untuk menghitung nilai ascii string
        {
            count += temp[i];               //menghitung nilai total ascii string
        }
        if (count % 2 == 0)                 //jika nilai total ascii tersebut genap
        {
            strcpy(baku[idxBaku], temp);    //maka string tersebut dimasukan ke array of string baku
            idxBaku++;                      //idxBaku akan bertambah 1
        }else                               //jika nilai total ascii tersebut ganjil
        {
            strcpy(nonBaku[idxNonBaku], temp);//maka string tersebut dimasukan ke array of string non baku
            idxNonBaku++;                     //idxNonBaku akan bertambah 1
        }
    }
    
    sorting(idxBaku, baku);                 //menjalankan prosedur sorting untuk array of string baku
    sorting(idxNonBaku, nonBaku);           //menjalankan prosedur sorting untuk array of string non baku

    printf("KATA BAKU:\n");
    if (idxBaku != 0)                       //jika ada kata baku maka akan mengeluarkan ouput kata baku
    {
        for ( i = 0; i < idxBaku; i++)
        {
            printf("%s\n", baku[i]);
        }
    }else                                   //jika tidak ada kata baku maka akan mengeluarkan output tidak ada
    {
        printf("TIDAK ADA.\n");
    }
    
    
    printf("\nKATA NON BAKU:\n");
    if (idxNonBaku != 0)                    //jika ada kata non baku maka akan mengeluarkan output kata non baku
    {
        for ( i = 0; i < idxNonBaku; i++)
        {
            printf("%s\n", nonBaku[i]);
        }
    }else                                   //jika tidak ada kata non baku maka akan mengeluarkan output tidak ada
    {
        printf("TIDAK ADA.\n");
    }

    return 0;
}