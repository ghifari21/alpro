/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan UAS           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

int main(){
    char pita[300], temp[50];           //variabel
    int i, index=0, count=0, found, len;    //variabel

    scanf(" %299[^\n]s", pita); //input
    startKata(pita);    //memulai mesin kata

    while (EOP(pita) == 0)  //looping selama eop bernilai 1
    {
        strcpy(temp, getCKata());   //memasukan currentkata kedalam temp
        len = getLenKata();     //memasukan panjang currentkata ke dalam len
        incKata(pita);
        i=0, found=0;
        while (i < len-4 && found == 0) //looping
        {
            if ((temp[i] == 'a') || (temp[i] == 'i') || (temp[i] == 'u') || (temp[i] == 'e') || (temp[i] == 'o')) //jika huruf pertama vokal
            {
                if ((temp[i+1] != 'a') && (temp[i+1] != 'i') && (temp[i+1] != 'u') && (temp[i+1] != 'e') && (temp[i+1] != 'o')) //jika huruf kedua konsonan
                {
                    if ((temp[i+2] != 'a') && (temp[i+2] != 'i') && (temp[i+2] != 'u') && (temp[i+2] != 'e') && (temp[i+2] != 'o')) //jika huruf ketiga konsonan
                    {
                        if ((temp[i+3] != 'a') && (temp[i+3] != 'i') && (temp[i+3] != 'u') && (temp[i+3] != 'e') && (temp[i+3] != 'o')) //jika huruf keempat konsonan
                        {
                            if ((temp[i+4] == 'a') || (temp[i+4] == 'i') || (temp[i+4] == 'u') || (temp[i+4] == 'e') || (temp[i+4] == 'o')) //jika huruf kelima vokal
                            {
                                printf("%s\n", temp);
                                count++;
                                found++;
                            }
                        }
                    }
                }
            }
            i++;
        }
    }
    strcpy(temp, getCKata());   //memasukan currentkata kedalam temp
    len = getLenKata();     //memasukan panjang currentkata ke dalam len
    incKata(pita);
    i=0, found=0;
    while (i < len-4 && found == 0) //looping
    {
        if ((temp[i] == 'a') || (temp[i] == 'i') || (temp[i] == 'u') || (temp[i] == 'e') || (temp[i] == 'o')) //jika huruf pertama vokal
        {
            if ((temp[i+1] != 'a') && (temp[i+1] != 'i') && (temp[i+1] != 'u') && (temp[i+1] != 'e') && (temp[i+1] != 'o')) //jika huruf kedua konsonan
            {
                if ((temp[i+2] != 'a') && (temp[i+2] != 'i') && (temp[i+2] != 'u') && (temp[i+2] != 'e') && (temp[i+2] != 'o')) //jika huruf ketiga konsonan
                {
                    if ((temp[i+3] != 'a') && (temp[i+3] != 'i') && (temp[i+3] != 'u') && (temp[i+3] != 'e') && (temp[i+3] != 'o')) //jika huruf keempat konsonan
                    {
                        if ((temp[i+4] == 'a') || (temp[i+4] == 'i') || (temp[i+4] == 'u') || (temp[i+4] == 'e') || (temp[i+4] == 'o')) //jika huruf kelima vokal
                        {
                            printf("%s\n", temp);
                            count++;
                            found++;
                        }
                    }
                }
            }
        }
        i++;
    }
    printf("%d\n", count);

    return 0;
}