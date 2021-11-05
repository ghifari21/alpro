/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP10          |
   | dalam mata kuliah Algoritma dan Pemrograman              |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

//============PROSEDUR INPUTSPLIT==============//
void inputsplit(){
    int i, j=0; //deklarasi variabel lokal
    scanf("%s", &word); //meminta input string
    lenword = strlen(word); //memasukan panjang string input ke variabel global lenword
    if (lenword % 2 == 0) //jika panjang string genap
    {
        for ( i = 0; i < (lenword/2); i++) //looping sampai i lebih kecil dari panjang string dibagi 2
        {
            leftword[i]=word[i]; //maka word input sebelah kiri akan dimasukan ke array leftword
        }
        leftword[i+1]='\0'; //menjadikan array leftword menjadi string
        for ( i = lenword/2; i < lenword; i++) //looping dari panjang string dibagi 2 sampai lebih kecil dari panjang string total
        {
            rightword[j++]=word[i]; //maka word input sebelah kanan akan dimasukan ke array rightword
        }
        rightword[j+1]='\0'; //menjadikan array rightword menjadi string
    }
    else //jika panjang string ganjil
    {
        for ( i = 0; i < (lenword/2)+1; i++) //proses yang sama seperti yang genap
        {
            leftword[i]=word[i]; //proses yang sama seperti yang genap
        }
        leftword[i+1]='\0'; //proses yang sama seperti yang genap
        for ( i = (lenword/2); i < lenword; i++) //proses yang sama seperti yang genap
        {
            rightword[j++]=word[i]; //proses yang sama seperti yang genap
        }
        rightword[j+1]='\0'; //proses yang sama seperti yang genap
    }
}
//=================PROSEDUR REVERSE=================//
void reverse(){
    int i, j=0; //deklarasi variabel lokal
    for ( i = strlen(rightword)-1; i >=0; i--) //looping yang dimulai dari belakang rightword
    {
        temp[j++]=rightword[i]; //akan dimasukan kedalam array temp
    }
    temp[j+1]='\0'; //menjadikan array temp menjadi string
}
//================FUNGSI CHECK================//
int check(){
    int x=0; //deklarasi variabel lokal
    if (strcmp(leftword, temp) == 0) //jika string leftword sama dengan string temp atau dengan kata lain palindrom
    {
        x=1; //nilai x menjadi 1
    }else //jika tidak sama atau bukan palindrom
    {
        x=0; //nilai x tetap 0
    }
    return x; //return nilai x
}
//=================PROSEDUR OUTPUTPATTERN=============//
void outputpattern(){
    int i, j, k=0, l;//deklarasi variabel lokal
    if (check() == 1) //jika input merupakan kata palindrom
    {
        if (lenword % 2 == 0) //jika panjang string genap
        {
            l=0; //nilai awal l
            for ( i = 0; i < strlen(leftword); i++) //looping untuk membentuk pola
            {
                for ( j = 0; j < strlen(leftword); j++) //looping untuk membentuk pola
                {
                    printf(" "); //print spasi
                }
                printf("%c", leftword[k++]); //print string leftword
                printf("\n"); //newline
            }
            printf("%s %s\n", leftword, rightword); //print string leftword dan rightword dengan spasi ditengah
            for ( i = 0; i < strlen(rightword); i++) //looping untuk membentuk pola
            {
                for ( j = 0; j < strlen(rightword); j++) //looping untuk membentuk pola
                {
                    printf(" "); //print spasi
                }
                printf("%c", rightword[l++]); //print string rightword
                printf("\n"); //newline
            }
        }
        else //jika panjang string ganjil
        {
            l=1; //nilai awal l
            for ( i = 0; i < strlen(leftword)-1; i++) //looping membentuk pola
            {
                for ( j = 0; j < strlen(leftword)-1; j++) //looping membentuk pola
                {
                    printf(" "); //print spasi
                }
                if (k != strlen(leftword)-1) //selama k bukan panjang string leftword dikurang 1
                {
                    printf("%c", leftword[k++]); //print string leftword
                }
                printf("\n"); //newline
            }
            printf("%s\n", word); //print string word/input
            for ( i = 0; i < strlen(rightword)-1; i++) //looping membentuk pola
            {
                for ( j = 0; j < strlen(rightword)-1; j++) //looping membentuk pola
                {
                    printf(" "); //print spasi
                }
                printf("%c", rightword[l++]); //print string rightword
                printf("\n"); //newline
            }
        }
    }
    else //jika input bukan kata palindrom
    {
        printf("%s\n", word); //print kata tersebut
    }
}