#include <stdio.h>
#include <string.h>

int n, m; //banyaknya string inputan
char words1[100][100]; //array of string 1
char words2[100][100]; //array of string 2
char merge1[100]; //tempat string disatukan 1
char merge2[100]; //tempat string disatukan 2
int lensen1; //panjang string total 1
int lensen2; //panjang string total 2

int checking(); //fungsi pengecekan apakah inputan merupakan anagram
void input(); //prosedur untuk input
void process(); //prosedur untuk menyatukan array of string menjadi 1
void output(); //prosedur untuk output

int main(){
    input(); //memanggil prosedur input
    process(); //memanggil prosedur process
    output(); //memanggil prosedur output
    return 0;
}

void input(){ //prosedur input
    int i; //deklarasi variabel lokal
    lensen1=0; //nilai awal lensen1
    lensen2=0; //nilai awal lensen2
    scanf("%d", &n); //meminta input untuk banyaknya string 1
    for ( i = 0; i < n; i++) //looping untuk input dan menghitung panjang string 1
    {
        scanf("%s", &words1[i]); //input string 1
        lensen1+=strlen(words1[i]); //menghitung panjang string 1
    }
    scanf("%d", &m); //meminta input untuk banyak string 2
    for ( i = 0; i < m; i++) //looping untuk input dan menghitung panjang string 2
    {
        scanf("%s", &words2[i]); //input string 2
        lensen2+=strlen(words2[i]); //menghitung panjang string 2
    }
}
void process(){ //prosedur proses
    int i, j; //deklarasi variabel
    int index1=0; //deklarasi variabel dan nilai awal
    int index2=0; //deklarasi variabel dan nilai awal
    for ( i = 0; i < n; i++) //looping
    {
        j=0; //nilai awal
        while (j < strlen(words1[i])) //selama j lebih kecil dari panjang string 1
        {
            merge1[index1]=words1[i][j]; //huruf dari words1[i] akan dimasukan kedalam merge untuk disatukan dengan array of string 1 lainnya
            index1++; //index1 akan terus bertambah 1
            j++; //j akan terus bertambah 1
        }
      
    }
    merge1[lensen1]='\0'; //merubah array merge1 menjadi string
    for ( i = 0; i < m; i++) //looping
    {
        j=0; //nilai awal
        while (j < strlen(words2[i])) //selama j lebih kecil dari panjang string 2
        {
            merge2[index2]=words2[i][j]; //huruf dari words1[i] akan dimasukan kedalam merge untuk disatukan dengan array of string 2 lainnya
            index2++; //index 2 akan terus bertambah 1
            j++; //j akan terus bertambah 1
        }
    }
    merge2[lensen2]='\0'; //merubah array merge2 menjadi string
}
int checking(){ //fungsi untuk memeriksa apakah merge2 merupakan anagram dari merge1
    int check=0; //deklarasi variabel dan nilai awal
    int i, j; //deklarasi variabel
    int lensen; //deklarasi variabel
    int found=0; //deklarasi variabel dan nilai awal
    if (lensen1 == lensen2) //jika panjang string1 sama dengan string2
    {
        lensen=lensen1; //maka nilai lensen1 dimasukan kedalam lensen
        for ( i = 0; i < lensen; i++) //looping 
        {
            for ( j = 0; j < lensen; j++) //looping
            {
                if (merge1[i] == merge2[j]) //jika huruf pada merge1 sama dengan merge2
                {
                    merge2[j] = '/'; //huruf pada merge2 akan diganti menjadi '/' agar tidak diperiksa lagi jika huruf tersebut ada lebih dari 1
                    found++; //found akan terus bertambah 1
                }
            }
        }
    }
    if (found == lensen) //jika banyaknya found sama dengan lensen
    {
        check=1; //nilai check akan menjadi 1
    }else //jika panjang found tidak sama dengan lensen
    {
        check=0; //nilai check akan tetap 0
    }
   
    return check; //return nilai check
}
void output(){ //prosedur output
    if (checking() == 1) //jika nilai return fungsi checking sama dengan 1
    {
        printf("Im ready!\n"); //output
    }
    else //jika nilai return fungsi checking sama dengan 0
    {
        printf("Not today!\n"); //output
    }
}