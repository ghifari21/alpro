/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP8           |
   | dalam mata kuliah Algoritma dan Pemrograman              |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    char kata[100]; //tempat kata masukan
    char pengganti; //huruf yang menjadi pengganti
    char pilihan; //huruf yang diganti
    int indexpilihan[100]; //tempat menampung index huruf yang diganti
    int indexpengganti; //tempat menampung index huruf pengganti
    int index; //untuk menampung index dari index huruf yang akan diganti
    int ascii; //menampung nilai ascii
}kamus;


int main(){
    int i, j, k, n;

    kamus input[50]; //membuka bungkusan kamus
    n=0;
    do
    {
        scanf("%s", &input[n].kata); //masukan untuk string
        if (strcmp(input[n].kata,"santuy") != 0) //selama string masukan bukan "santuy" maka akan meminta masukan untuk huruf yang akan diganti dan penggantinya
        {
            scanf(" %c", &input[n].pilihan); //meminta masukan untuk huruf yang akan diganti
            scanf(" %c", &input[n].pengganti); //meminta masukan untuk huruf yang menjadi pengganti
            n++; //nilai n akan terus bertambah 1 jika string masukan bukan "santuy"
        }
    } while (strcmp(input[n].kata, "santuy") != 0); //akan terus melakukan perulangan selama string masukan bukan "santuy"
    /*i=0;
    while (i < n)
    {
        printf("%s %c %c\n", input[i].kata, input[i].pilihan, input[i].pengganti); //test output
        i++;
    }*/
    i=0;
    while (i < n)
    {
        input[i].indexpengganti=100; //deklarasi nilai awal index huruf pengganti yang kemudian akan berubah jika huruf pengganti ada di string
        input[i].index=0; //deklarasi nilai awal index dari index huruf yang akan diganti
        j=0;
        while (j < strlen(input[i].kata))
        {
            if (input[i].kata[j] == input[i].pengganti) //jika huruf pengganti ada di dalam string
            {
                if (input[i].indexpengganti > j) //jika index dari huruf pengganti lebih besar dari j
                {
                    input[i].indexpengganti = j; //maka index dari huruf pengganti akan berubah menjadi j
                }
            }
            if (input[i].kata[j] == input[i].pilihan) //jika huruf yang akan diganti ada didalam string
            {
                input[i].indexpilihan[input[i].index++] = j; //maka indexnya akan disimpan
            }
            j++;
        }
        i++;
    }
    /*i=0;
    while (i < n)
    {
        j=0;
        while (j < input[i].index)
        {
            //printf("INDEX================ %d\n", i);
            printf("%d %d\n", input[i].indexpilihan[j], input[i].indexpengganti); //test output index
            //printf("%d\n", input[i].index);
            j++;
        }
        //printf("%d ", strlen(input[i].kata));
        //printf("\n");
        //printf("%d ", input[i].huruf);
        ++i;
    }*/
    i=0;
    while (i < n)
    {
        input[i].index=0; //deklarasi nilai awal index dari index huruf yang akan diganti
        if (input[i].kata[input[i].indexpengganti] == input[i].pengganti) //saat huruf pengganti ada didalam string
        {
            j=0;
            while (j < input[i].indexpengganti)
            {
                if (input[i].kata[j] == input[i].pilihan) //jika huruf yang akan diganti ada didalam string
                {
                    input[i].kata[j] = input[i].pengganti; //maka huruf tersebut akan diganti dengan huruf pengganti
                }
                j++;   
            }
        i++;
        }
        if (input[i].kata[input[i].indexpengganti] == input[i].pengganti)
        {
            if (input[i].indexpengganti < input[i].indexpilihan[input[i].index++]) //jika index pengganti mendahului index huruf yang diganti
            {
                i++; //maka huruf tersebut tidak bisa diganti dan di lewati
            }
        }
        if (input[i].indexpengganti == 100) //jika index pengganti bernilai 100 atau tidak ada didalam string
        {
            k=0;
            while (k < strlen(input[i].kata))
            {
                if (input[i].kata[k] == input[i].pilihan) //jika huruf yang akan diganti ada didalam string
                {
                    input[i].kata[k] = input[i].pengganti; //maka huruf itu akan diganti dengan huruf pengganti
                }
                k++;
            }
            i++;
        }
        //i++;
    }
    
    /*i=0;
    while (i < n)
    {
        printf("%s\n", input[i].kata); //test output
        i++;
    }*/

    i=0;
    while (i < n)
    {
        input[i].ascii=0; //deklarasi nilai awal ascii
        j=0;
        while (j < strlen(input[i].kata))
        {
            input[i].ascii+=input[i].kata[j]; //akan menjumlahkan ascii;
            j++;
        }
        i++;
    }
    /*i=0;
    while (i < n)
    {
        printf("%d", input[i].ascii);
        i++;
    }*/
    printf("=== KATA BAKU ===\n");
    i=0;
    k=0;
    while (i < n)
    {
        if (input[i].ascii % 2 == 0) //jika jumlah ascii genap
        {
            printf("%s\n", input[i].kata); //akan mengeluarkan kata yang tergolong baku
            k++; //dan k akan terus bertambah
        }
        i++;
    }
    if (k == 0) //jika k bernilai 0, maka akan mengeluarkan output tidak ada
    {
        printf("TIDAK ADA.\n");
    }
    printf("\n");
    printf("=== KATA NON BAKU ===\n");
    i=0;
    k=0;
    while (i < n)
    {
        if (input[i].ascii % 2 == 1) //jika jumlah ascii ganjil
        {
            printf("%s\n", input[i].kata); //akan mengeluarkan output kata yang non baku
            k++; //dan k akan terus bertambah
        }
        i++;
    }
    if (k == 0) //jika k bernilai 0, maka akan mengeluarkan output tidak ada
    {
        printf("TIDAK ADA.\n");
    }
    //printf("\n");

    return 0;
}
// gcc KBPW20.c -o KBPW20.exe && KBPW20.exe