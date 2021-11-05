/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP9           |
   | dalam mata kuliah Algoritma dan Pemrograman              |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

//=================PROSEDUR INPUT===========================//
void input(){
    int i; //deklarasi iterator
    scanf("%d", &n); //meminta input banyaknya string
    for ( i = 0; i < n; i++) //looping untuk input string sebanyak n
    {
        scanf("%s", &inputname[i]); //meminta input string
    }
}
//=====================PROSEDUR SPLITTINGPROCESS===================//
void splittingprocess(){
    int i, j, k, index[100]; //deklarasi variabel
    for ( i = 0; i < n; i++) //looping sebanyak n kali
    {
        strcpy(name[i], inputname[i]); //mengkopi isi dari string inputname ke string name
        for ( j = 0; j < strlen(inputname[i]); j++) //looping sebanyak panjang dari string kali
        {
            if (inputname[i][j] == '/') //jika bertemu dengan tanda '/' didalam string
            {
                name[i][j] = '\0'; //maka akan diubah menjadi null
            }
            if (inputname[i][j] == '/' && inputname[i][j+2] == '/') //jika bertemu dengan tanda'/' didalam string dam 2 index didepannya juga tanda '/'
            {
                if (inputname[i][j+1] == 'A' || inputname[i][j+1] == 'T') //jika index j+1 merupakan kode A atau T
                {
                    code[i][0] = inputname[i][j+1]; //maka kode tersebut akan dimasukan kedalam string code
                    code[i][1] = '\0'; //agar array tersebut menjadi string
                }
                if ((inputname[i][j+1] == '1') || (inputname[i][j+1] == '2') || (inputname[i][j+1] == '3') || (inputname[i][j+1] == '4') || (inputname[i][j+1] == '5')) //jika index j+1 merupakan bintang
                {
                    star[i][0] = inputname[i][j+1]; //maka bintang tersebut akan dimasukan kedalam string star
                    star[i][1] = '\0'; //agar array tersebut menjadi string
                }
            }
            if (inputname[i][j] == '/' && inputname[i][j+2] != '/') //jika bertemu dengan tanda '/' dan 2 index didepannya bukanlah '/'
            {
                index[i]=0; //deklarasi nilai awal
                k=j; //deklarasi nilai k sama dengan nilai j
                while (k < strlen(inputname[i])) //looping sebanyak panjang string input kali
                {
                    comment[i][index[i]]=inputname[i][k+1]; //maka huruf-huruf tersebut akan dimasukan kedalam string comment
                    index[i]++; //nilai index akan terus bertambah 1
                    k++; //nilai k akan terus bertambah 1
                }
            }
        }
        comment[i][index[i]+1] = '\0'; //agar array tersebut menjadi string
    }
}
//=====================PROSEDUR CHANGINGPROCESS========================//
void changingprocess(){
    int i, j; //deklarasi iterator
    for ( i = 0; i < n; i++) //looping sebanyak n kali
    {
        for ( j = 0; j < strlen(name[i]); j++) //looping sebanyak panjang string name kali
        {
            if (name[i][j] == '_') //jika ada tanda '_'
            {
                name[i][j] = ' '; //maka akan diganti menjadi spasi
            }
        }
        for ( j = 0; j < strlen(comment[i]); j++) //looping sebanyak panjang string comment kali
        {
            if (comment[i][j] == '_') //jika ada tanda '_'
            {
                comment[i][j] = ' '; //maka akan diganti menjadi spasi
            }
        }
    }
    for ( i = 0; i < n; i++) //looping sebanyak n kali
    {
        if (code[i][0] == 'A') //jika code nya adalah 'A'
        {
            j=1; //deklarasi nilai awal
            while (j < strlen(name[i])) //looping sebanyak panjang string name kali
            {
                if (name[i][j] == ' ') //jika bertemu dengan spasi
                {
                    j+=2; //nilai j akan ditambah 2 agar spasi dan 1 huruf setelah spasi tidak disensor
                    name[i][j] = '*'; //menyensor nama
                }else //jika tidak bertemu dengan spasi
                {
                    name[i][j] = '*'; //menyensor nama
                    j++; //j akan terus bertambah sebanyak 1
                }
            }
        }   
    }
}
//======================PROSEDUR SORTINGPROCESS===============//
void sortingprocess(){
    int i; //deklarasi iterator
    five=0, four=0, three=0, two=0, one=0; //deklarasi nilai awal
    for ( i = 0; i < n; i++) //looping sebanyak n kali
    {
        if (star[i][0] == '5') //jika star sama dengan 5
        {
            five++; //nilai five akan bertambah 1
        }
        if (star[i][0] == '4') //jika star sama dengan 4
        {
            four++; //nilai four akan bertambah 1
        }
        if (star[i][0] == '3') //jika star sama dengam 3
        {
            three++; //nilai three akan bertambah 1
        }
        if (star[i][0] == '2') //jika star sama dengan 2
        {
            two++; //nilai two akan bertambah 1

        }
        if (star[i][0] == '1') //jika star sama dengan 1
        {
            one++; //nilai one akan bertambah 1
        }
    }
}
//=========================PROSEDUR OUTPUT=======================/
void output(){
    int i; //deklarasi iterator
    if (five != 0) //jika nilai five bukan 0
    {
        printf(">>> Review Bintang 5 <<<\n");
        printf("--------------------\n");
        for ( i = 0; i < n; i++) //looping sebanyak n kali
        {
            if (star[i][0] == '5') //jika star sama dengan 5
            {
                printf("%s\n", name[i]);
                printf("%s\n", comment[i]);
                printf("--------------------\n");
            }
        }
        if ((four != 0) || (three != 0) || (two != 0) || (one != 0)) //jika setelah bintang 5 ada bintang yang lain
        {
            printf("\n"); //printf newline
        }
    }
    if (four != 0) //jika four bukan 0
    {
        printf(">>> Review Bintang 4 <<<\n");
        printf("--------------------\n");
        for ( i = 0; i < n; i++) //looping sebanyak n kali
        {
            if (star[i][0] == '4') //jika star sama dengan 4
            {
                printf("%s\n", name[i]);
                printf("%s\n", comment[i]);
                printf("--------------------\n");
            }
        }
        if ((three != 0) || (two != 0) || (one != 0)) //jika setelah bintang 4 ada bintang yang lain
        {
            printf("\n"); //printf newline
        }
    }
    if (three != 0) //jika three bukan 0
    {
        printf(">>> Review Bintang 3 <<<\n");
        printf("--------------------\n");
        for ( i = 0; i < n; i++) //looping sebanyak n kali
        {
            if (star[i][0] == '3') //jika star sama dengan 3
            {
                printf("%s\n", name[i]);
                printf("%s\n", comment[i]);
                printf("--------------------\n");
            }
        }
        if ((two != 0) || (one != 0)) //jika setelah bintang 3 ada bintang yang lain
        {
            printf("\n"); //printf newline
        }
    }
    if (two != 0) //jika two bukan 0
    {
        printf(">>> Review Bintang 2 <<<\n");
        printf("--------------------\n");
        for ( i = 0; i < n; i++) //looping sebanyak n kali
        {
            if (star[i][0] == '2') //jika star sama dengan 2
            {
                printf("%s\n", name[i]);
                printf("%s\n", comment[i]);
                printf("--------------------\n");
            }
        }
        if (one != 0) //jika setelah bintang 2 ada bintang yang lain
        {
            printf("\n"); //printf newline
        }
    }
    if (one != 0) //jika one bukan 0
    {
        printf(">>> Review Bintang 1 <<<\n");
        printf("--------------------\n");
        for ( i = 0; i < n; i++) //looping sebanyak n kali
        {
            if (star[i][0] == '1') //jika star sama dengan 1
            {
                printf("%s\n", name[i]);
                printf("%s\n", comment[i]);
                printf("--------------------\n");
            }
        }
    }
}