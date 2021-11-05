/*
    =====================================================================================
    |   Saya Ghifari Octaverin [2000952] mengerjakan evaluasi Tugas Masa Depan          |
    |   dalam mata kuliah Algoritma dan Pemrograman I untuk keberkahanNya maka          |
    |   saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.    |
    =====================================================================================
*/
#include "header.h" //library header yang telah dibuat

/*==========================PROSEDUR INPUT START=========================*/
void input(){
    int i; //deklarasi iterator
    scanf("%d", &mode); //input untuk mode yang diinginkan (1 atau 2)
    scanf("%d", &many); //input banyaknya string yang akan dimasukan
    for ( i = 0; i < many; i++) //looping untuk input array of string dan panjang string
    {
        scanf("%s", &word[i]); //input string
        lenword[i]=strlen(word[i]); //memasukan panjang string yang telah diinput kedalam array lenword
    }
    scanf("%d", &thick); //input untuk tebal pola output
}
/*==========================PROSEDUR INPUT END=========================*/
/*=====================================================================*/
/*==========================FUNGSI CHECKING START======================*/
int checking(int a){
    int true=0; //nilai awal true = 0
    int i; //deklarasi variabel lokal
    if (a == many-1) //jika a sama dengan index terakhir dari array of string
    {
        true = 1; //nilai true akan berubah menjadi 1
    }else //jika a tidak sama dengan index terakhir dari array of string
    {
        true = 0; //nilai true akan tetap 0
    }
    return true; //return nilai true
}
/*==========================FUNGSI CHECKING END======================*/
/*=======================================================================*/
/*========================PROSEDUR PATTERN START=========================*/
void pattern_blank(){ //BLANK PATTERN
    int i; //deklarasi variabel lokal
    for ( i = 0; i < thick; i++) //looping dari i = 0 sampai i kurang dari tebal
    {
        printf(" "); //print blank
    }
}
void pattern_fill(){ //FILLED PATTERN
    int i; //deklarasi variabel lokal
    for ( i = 0; i < thick; i++) //looping dari i = 0 sampai i kurang dari tebal
    {
        printf("H"); //print H
    }
}
/*========================PROSEDUR PATTERN END=========================*/
/*=====================================================================*/
/*========================PROSEDUR ROW START===========================*/
void row1(){
    int i, j; //deklarasi variabel lokal
    for ( i = 0; i < thick; i++)    //LOOPING UNTUK MEMBENTUK POLA
    {
        if (mode == 1) //JIKA MASUKAN MODE = 1 ATAU MENGGUNAKAN MODE +628
        {
            /*======================================================*/
            pattern_blank();
            pattern_blank();        //POLA +
            pattern_blank();
            /*======================================================*/
            pattern_blank();        //SPASI
            /*======================================================*/
            pattern_blank();
            pattern_fill();         //POLA ANGKA 6
            pattern_blank();
            /*======================================================*/
            pattern_blank();         //SPASI
            /*======================================================*/
            pattern_blank();
            pattern_fill();         //POLA ANGKA 2
            pattern_blank();
            /*======================================================*/
            pattern_blank();        //SPASI
            /*======================================================*/
            pattern_blank();
            pattern_fill();         //POLA ANGKA 8
            pattern_blank();
            /*======================================================*/
        }else //JIKA MASUKAN MODE = 2 ATAU MENGGUNAKAN MODE 08
        {
            /*======================================================*/
            pattern_blank();
            pattern_fill();         //POLA ANGKA 0
            pattern_blank();
            /*======================================================*/
            pattern_blank();        //SPASI
            /*======================================================*/
            pattern_blank();
            pattern_fill();         //POLA ANGKA 8
            pattern_blank();
            /*======================================================*/
        }
        for ( j = 0; j < many; j++) //LOOPING SEBANYAK INPUT
        {
            pattern_blank();        //SPASI
            if (lenword[j] == 1)    //JIKA PANJANG STRING SAMA DENGAN 1
            {
                /*======================================================*/
                pattern_fill();
                /*======================================================*/
            }
            else if (lenword[j] == 3)    //JIKA PANJANG STRING SAMA DENGAN 3
            {
                /*======================================================*/
                pattern_fill();
                if (checking(j) != 1)   //JIKA INDEX DARI ARRAY OF STRING BUKAN YANG TERAKHIR
                {                           
                    pattern_blank();    //MAKA AKAN ADA SPASI
                }
                /*======================================================*/
            }
            else if (lenword[j] == 0 || lenword[j] == 2 || lenword[j] == 5 || lenword[j] == 6 || lenword[j] == 8 || lenword[j] == 9)
            {       // ^^^ JIKA PANJANG STRING 0 ATAU 2 ATAU 5 ATAU 6 ATAU 8 ATAU 9
                /*======================================================*/
                pattern_blank();
                pattern_fill();
                if (checking(j) != 1)   //JIKA INDEX DARI ARRAY OF STRING BUKAN YANG TERAKHIR
                {
                    pattern_blank();    //MAKA AKAN ADA SPASI
                }
                /*======================================================*/
            }
            else if (lenword[j] == 4)      //JIKA PANJANG STRING SAMA DENGAN 4
            {
                /*======================================================*/
                pattern_fill();
                pattern_blank();
                pattern_fill();
                /*======================================================*/
            }
            else if (lenword[j] == 7)   //JIKA PANJANG STRING SAMA DENGAN 7
            {
                /*======================================================*/
                pattern_fill();
                pattern_fill();
                if (checking(j) != 1) //JIKA INDEX DARI ARRAY OF STRING BUKAN YANG TERAKHIR
                {
                    pattern_blank();
                }
                /*======================================================*/
            }
        }
        printf("\n"); //NEWLINE
    }
}
void row2(){
    int i, j; //deklarasi variabel lokal
    for ( i = 0; i < thick; i++)    //LOOPING UNTUK MEMBENTUK POLA
    {
        if (mode == 1)  //JIKA MASUKAN MODE = 1 ATAU MENGGUNAKAN MODE +628
        {
            /*======================================================*/
            pattern_blank();
            pattern_fill();         //POLA +
            pattern_blank();
            /*======================================================*/
            pattern_blank();        //SPASI
            /*======================================================*/
            pattern_fill();
            pattern_blank();        //POLA ANGKA 6
            pattern_blank();
            /*======================================================*/
            pattern_blank();        //SPASI
            /*======================================================*/
            pattern_blank();
            pattern_blank();        //POLA ANGKA 2
            pattern_fill();
            /*======================================================*/
            pattern_blank();        //SPASI
            /*======================================================*/
            pattern_fill();
            pattern_blank();        //POLA ANGKA 8
            pattern_fill();
            /*======================================================*/
        }else           //JIKA MASUKAN MODE = 2 ATAU MENGGUNAKAN MODE 08
        {
            /*======================================================*/
            pattern_fill();
            pattern_blank();         //POLA ANGLA 0
            pattern_fill();
            /*======================================================*/
            pattern_blank();        //SPASI
            /*======================================================*/
            pattern_fill();
            pattern_blank();        //POLA ANGKA 8
            pattern_fill();
            /*======================================================*/
        }
        for ( j = 0; j < many; j++) //LOOPING SEBANYAK INPUT
        {
            pattern_blank();        //SPASI
            if (lenword[j] == 1)    //JIKA PANJANG STRING SAMA DENGAN 1
            {
                /*======================================================*/
                pattern_fill();
                /*======================================================*/
            }
            else if (lenword[j] == 2 || lenword[j] == 7)    //JIKA PANJANG STRING SAMA DENHAM 2 ATAU 7
            {
                /*======================================================*/
                pattern_blank();
                pattern_blank();
                pattern_fill();
                /*======================================================*/
            }
            else if (lenword[j] == 3)       //JIKA PANJANG STRING SAMA DENGAN 3
            {
                /*======================================================*/
                pattern_blank();
                pattern_fill();
                /*======================================================*/
            }
            else if (lenword[j] == 0 || lenword[j] == 4 || lenword[j] == 8 || lenword[j] == 9)     //JIKA PANJANG STRING SAMA DENGAN 0 ATAU 4 ATAU 8 ATAU 9
            {
                /*======================================================*/
                pattern_fill();
                pattern_blank();
                pattern_fill();
                /*======================================================*/
            }
            else if (lenword[j] == 5 || lenword[j] == 6)        //JIKA PANJANG STRING SAMA DENGAN 5 ATAU 8
            {
                /*======================================================*/
                pattern_fill();
                if (checking(j) != 1)       //JIKA INDEX PANJANG STRING BUKAN YANG TERAKHIR
                {
                    pattern_blank();
                    pattern_blank();
                }
                /*======================================================*/
            }   
        }
        printf("\n");   //NEWLINE
    }
}
void row3(){
    int i, j; //deklarasi variabel lokal
    for ( i = 0; i < thick; i++) //LOOPING UNTUK MEMBENTUK POLA
    {
        if (mode == 1)      //JIKA MASUKAN MODE = 1 ATAU MENGGUNAKAN MODE +628
        {
            /*======================================================*/
            pattern_fill();
            pattern_fill();         //POLA +
            pattern_fill();
            /*======================================================*/
            pattern_blank();        //SPASI
            /*======================================================*/
            pattern_blank();
            pattern_fill();         //POLA ANGKA 6
            pattern_blank();
            /*======================================================*/
            pattern_blank();        //SPASI
            /*======================================================*/
            pattern_blank();
            pattern_fill();        //POLA ANGKA 2
            pattern_blank();
            /*======================================================*/
            pattern_blank();        //SPASI
            /*======================================================*/
            pattern_blank();
            pattern_fill();        //POLA ANGKA 8
            pattern_blank();
            /*======================================================*/
        }else           //JIKA MASUKAN MODE = 2 ATAU MENGGUNAKAN MODE 08
        {
            /*======================================================*/
            pattern_fill();
            pattern_blank();        //POLA ANGKA 0
            pattern_fill();
            /*======================================================*/
            pattern_blank();        //SPASI
            /*======================================================*/
            pattern_blank();
            pattern_fill();         //POLA ANGKA 8
            pattern_blank();
            /*======================================================*/
        }
        for ( j = 0; j < many; j++) //LOOPING SEBANYAK INPUT
        {
            pattern_blank();        //SPASI
            if (lenword[j] == 1)    //JIKA PANJANG STRING SAMA DENGAN 1
            {
                /*======================================================*/
                pattern_fill();
                /*======================================================*/
            }
            else if (lenword[j] == 0)   //JIKA PANJANG STRING SAMA DENGAN 0
            {
                /*======================================================*/
                pattern_fill();
                pattern_blank();
                pattern_fill();
                /*======================================================*/
            }
            else if (lenword[j] == 2 || lenword[j] == 4 || lenword[j] == 5 || lenword[j] == 6 || lenword[j] == 8 || lenword[j] == 9)
            {           //^^^ JIKA PANJANG STRING SAMA DENGAN 2 ATAU 4 ATAU 5 ATAU 6 ATAU 8 ATAU 9
                /*======================================================*/
                pattern_blank();
                pattern_fill();
                if (checking(j) != 1)       //JIKA INDEX PANJANG STRING BUKAN INDEX TERAKHIR
                {
                    pattern_blank();
                }
                /*======================================================*/
            }
            else if (lenword[j] == 3)       //JIKA PANJANG STRING SAMA DENGAN 3
            {
                /*======================================================*/
                pattern_fill();
                if (checking(j) != 1)       //JIKA INDEX PANJANG STRING BUKAN INDEX TERAKHIR
                {
                    pattern_blank();
                }
                /*======================================================*/
            }
            else if (lenword[j] == 7)       //JIKA PANJANG STRING SAMA DENGAN 7
            {
                /*======================================================*/
                pattern_blank();
                pattern_blank();
                pattern_fill();
                /*======================================================*/
            }
        }
        printf("\n");       //NEWLINE
    }
}
void row4(){
    int i, j; //deklarasi variabel lokal
    for ( i = 0; i < thick; i++)    //LOOPING UNTUK MEMBENTUK POLA
    {
        if (mode == 1)  //JIKA MASUKAN MODE = 1 ATAU MENGGUNAKAN MODE +628
        {
            /*======================================================*/
            pattern_blank();
            pattern_fill();         //POLA +
            pattern_blank();
            /*======================================================*/
            pattern_blank();        //SPASI
            /*======================================================*/
            pattern_fill();
            pattern_blank();        //POLA ANGKA 6
            pattern_fill();
            /*======================================================*/
            pattern_blank();        //SPASI
            /*======================================================*/
            pattern_fill();
            pattern_blank();        //POLA ANGKA 2
            pattern_blank();
            /*======================================================*/
            pattern_blank();        //SPASI
            /*======================================================*/
            pattern_fill();
            pattern_blank();        //POLA ANGKA 8
            pattern_fill();
            /*======================================================*/
        }else         //JIKA MASUKAN MODE = 2 ATAU MENGGUNAKAN MODE 08
        {
            /*======================================================*/
            pattern_fill();
            pattern_blank();        //POLA ANGKA 0
            pattern_fill();
            /*======================================================*/
            pattern_blank();        //SPASI
            /*======================================================*/
            pattern_fill();
            pattern_blank();        //POLA ANGKA 8
            pattern_fill();
            /*======================================================*/
        }
        for ( j = 0; j < many; j++)     //LOOPING SEBANYAK INPUT
        {
            pattern_blank();            //SPASI
            if (lenword[j] == 1)        //JIKA PANJANG STRING SAMA DENGAN 1
            {
                /*======================================================*/
                pattern_fill();
                /*======================================================*/
            }
            else if (lenword[j] == 2)   //JIKA PANJANG STRING SAMA DENGAN 2
            {
                /*======================================================*/
                pattern_fill();
                if (checking(j) != 1)   //JIKA INDEX PANJANG STRING BUKAN YANG TERAKHIR
                {
                    pattern_blank();
                    pattern_blank();
                }
                /*======================================================*/
            }
            else if (lenword[j] == 3)   //JIKA PANJANG STRING SAMA DENGAN 3
            {
                /*======================================================*/
                pattern_blank();
                pattern_fill();
                /*======================================================*/
            }
            else if (lenword[j] == 4 || lenword[j] == 5 || lenword[j] == 7 || lenword[j] == 9)     //JIKA PANJANG STRING SAMA DENGAN 4 ATAU 5 ATAU 7 ATAU 9
            {
                /*======================================================*/
                pattern_blank();
                pattern_blank();
                pattern_fill();
                /*======================================================*/
            }
            else if (lenword[j] == 0 || lenword[j] == 6 || lenword[j] == 8)     //JIKA PANJANG STRING SAMA DENGAN 0 ATAU 6 ATAU 8
            {
                /*======================================================*/
                pattern_fill();
                pattern_blank();
                pattern_fill();
                /*======================================================*/
            }
        }
        printf("\n");       //NEWLINE
    }
}
void row5(){
    int i, j; //deklarasi variabel lokal
    for ( i = 0; i < thick; i++)     //LOOPING UNTUK MEMBENTUK POLA
    {
        if (mode == 1)      //JIKA MASUKAN MODE = 1 ATAU MENGGUNAKAN MODE +628
        {
            /*======================================================*/
            pattern_blank();
            pattern_blank();        //POLA +
            pattern_blank();
            /*======================================================*/
            pattern_blank();        //SPASI
            /*======================================================*/
            pattern_blank();
            pattern_fill();         //POLA ANGKA 6
            pattern_blank();
            /*======================================================*/
            pattern_blank();        //SPASI
            /*======================================================*/
            pattern_blank();
            pattern_fill();         //POLA ANGKA 2
            pattern_blank();
            /*======================================================*/
            pattern_blank();        //SPASI
            /*======================================================*/
            pattern_blank();
            pattern_fill();         //POLA ANGKA 8
            pattern_blank();
            /*======================================================*/
        }else           //JIKA MASUKAN MODE = 2 ATAU MENGGUNAKAN MODE 08
        {
            /*======================================================*/
            pattern_blank();
            pattern_fill();         //POLA ANGKA 0
            pattern_blank();
            /*======================================================*/
            pattern_blank();        //SPASI
            /*======================================================*/
            pattern_blank();
            pattern_fill();         //POLA ANGKA 8
            pattern_blank();
            /*======================================================*/
        }
        for ( j = 0; j < many; j++)     //LOOPING SEBANYAK INPUT
        {
            pattern_blank();        //SPASI
            if (lenword[j] == 1)    //JIKA PANJANG STRING SAMA DENGAN 1
            {
                /*======================================================*/
                pattern_fill();
                /*======================================================*/
            }
            else if (lenword[j] == 0 || lenword[j] == 2 || lenword[j] == 5 || lenword[j] == 6 || lenword[j] == 8 || lenword[j] == 9)
            {       //^^^ JIKA PANJANG STRING SAMA DENGAN 0 ATAU 2 ATAU 5 ATAU 6 ATAU 8 ATAU 9
                /*======================================================*/
                pattern_blank();
                pattern_fill();
                if (checking(j) != 1)       //JIKA INDEX PANJANG STRING BUKAN YANG TERAKHIR
                {
                    pattern_blank();
                }
                /*======================================================*/
            }
            else if (lenword[j] == 3)       //JIKA PANJANG STRING SAMA DENGAN 3
            {
                /*======================================================*/
                pattern_fill();
                if (checking(j) != 1)       //JIKA INDEX PANJANG STRING BUKAN YANG TERAKHIR
                {
                    pattern_blank();
                }
                /*======================================================*/
            }
            else if (lenword[j] == 4 || lenword[j] == 7)        //JIKA PANJANG STRING SAMA DENGAN 4 ATAU 7
            {
                /*======================================================*/
                pattern_blank();
                pattern_blank();
                pattern_fill();
                /*======================================================*/
            }
        }
        printf("\n");
    }
}
/*========================PROSEDUR ROW END============================*/
/*====================================================================*/
/*========================PROSEDUR OUTPUT START=======================*/
void output(){
    row1(); //memanggil prosedur row 1
    row2(); //memanggil prosedur row 2
    row3(); //memanggil prosedur row 3
    row4(); //memanggil prosedur row 4
    row5(); //memanggil prosedur row 5
}
/*========================PROSEDUR OUTPUT END==========================*/