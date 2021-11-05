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
    //variabel
    char pita[300], tempStr[50];
    int count=0, i, index, j;
    
    scanf(" %299[^\n]s", pita); //input
    start(pita);    //memulai mesin kata
    while (eop() == 0)
    {
        if (getCC() == ' ') //jika ketemu spasi
        {
            inc(pita);  //maju
        }
        index=1;
        tempStr[0] = getCC(); //memasukan cc
        inc(pita);  //memajukan karakter
        while (eop() == 0 && getCC() != ' ') //selama nilai eop = 0 dan tidak bertemu spasi
        {
            if (getCC() != 0)   //jika tidak bertemu spasi
            {
                tempStr[index] = getCC();   //memasukan cc
                inc(pita);  //maju
            }
            index++;    //index bertambah 1
        }
        tempStr[index] = '\0';  //menjadikan tempStr menjadi string
        i=0;
        while (i < index-3) //looping
        {
            if ((tempStr[i] == 'a') || (tempStr[i] == 'i') || (tempStr[i] == 'u') || (tempStr[i] == 'e') || (tempStr[i] == 'o'))    //jika vokal
            {
                if ((tempStr[i+1] != 'a') && (tempStr[i+1] != 'i') && (tempStr[i+1] != 'u') && (tempStr[i+1] != 'e') && (tempStr[i+1] != 'o') && (tempStr[i+1] != ' ')) //jika konsonan
                {
                    if ((tempStr[i+2] != 'a') && (tempStr[i+2] != 'i') && (tempStr[i+2] != 'u') && (tempStr[i+2] != 'e') && (tempStr[i+2] != 'o') && (tempStr[i+2] != ' ')) //jika konsonan
                    {
                        if ((tempStr[i+4] == 'a') || (tempStr[i+4] == 'i') || (tempStr[i+4] == 'u') || (tempStr[i+4] == 'e') || (tempStr[i+4] == 'o')) //jika vokal
                        {
                            for (j = 0; j < 4; j++)
                            {
                                printf("%c", tempStr[j]);
                            }
                            printf("\n");
                            count++;
                        }
                    }
                }
            }
            i++;
        }
    }
    printf("%d\n", count);

    return 0;
}