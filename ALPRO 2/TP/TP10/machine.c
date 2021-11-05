/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP10          |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

void start(char pita[]){    //prosedur memulai mesin kata
    idx=0;      //nilai idx dan lenWord disetting menjadi 0
    lenWord=0;
    while (pita[idx] == ' ')    //jika bertemu dengan spasi
    {
        idx++;  //indeks akan dimajukan 1
    }
    while ((pita[idx] != ' ') && (EOP(pita) == 0))  //looping selama tidak bertemu dengan spasi dan EOP mengembalikan nilai 0
    {
        currentWord[lenWord] = pita[idx];   //pita akan dimasukan ke dalam currentWord
        idx++;      //idx bertambah 1
        lenWord++;  //lenWord bertambah 1
    }
    currentWord[lenWord] = '\0';    //menjadikan currentWord sebagai string 
}

void reset(){               //prosedur reset kata
    lenWord = 0;            //panjang kata menjadi 0
    currentWord[lenWord] = '\0';    //dan currentWord dengan panjang kata 0 dimasukan null
}

void incWord(char pita[]){  //prosedur memajukan kata
    lenWord = 0;            //membuat panjang kata menjadi 0
    while (pita[idx] == ' ')    //jika bertemu dengan spasi
    {
        idx++;  //indeks akan dimajukan
    }
    while (pita[idx] != ' ' && EOP(pita) == 0)  //looping selama tidak bertemu dengan spasi dan EOP mengembalikan nilai 0
    {
        currentWord[lenWord] = pita[idx];   //pita akan dimasukan kedalam currentWord
        idx++;      //idx bertambah 1
        lenWord++;  //lenWord bertambah 1
    }
    currentWord[lenWord] = '\0';    //menjadikan currentWord sebagai string
}

char *getCWord(){       //fungsi untuk mengembalikan currentWord
    return currentWord; //mengembalikan string currentWord
}

int getLenWord(){       //fungsi untuk mengembalikan panjang string
    return lenWord; //mengembalikan nilai lenWord
}

int EOP(char pita[]){   //fungsi untuk memeriksa akhir dari pita
    if (pita[idx] == '.')   //jika bertemu dengan titik (.)
    {
        return 1;   //akan mengembalikan nilai 1
    }else                   //jika tidak bertemu dengan titik (.)
    {
        return 0;   //maka mengembalikan nilai 0
    }
}

void sorting(int count, char arr[][100]){   //prosedur sorting
    int i, j;       //iterator looping
    char key[100];  //string kunci

    for ( i = 0; i < count; i++)    //looping pengecekan
    {
        strcpy(key, arr[i]);    //memasukan arr[i] ke dalam string kunci
        j = i - 1;
        while (j >= 0 && strcmp(key, arr[j]) < 0) //looping selama j lebih besar daripada 0 dan string kunci lebih kecil daripada string arr[j]
        {
            strcpy(arr[j+1], arr[j]);   //memasukan string arr[j] ke arr[j+1]
            j--;    //j akan berkurang 1
        }
        strcpy(arr[j+1], key);  //memasukan string kunci ke arr[j+1]
    }
}