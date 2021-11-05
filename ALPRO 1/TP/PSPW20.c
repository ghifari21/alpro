/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP7           |
   | dalam mata kuliah Algoritma dan Pemrograman              |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include <stdio.h>
#include <string.h>

int main(){
    int n, i, j, k;
    char str1[100]; //masukan string dari user
    char str2[100]; //tempat kalimat
    char str3[100]; //tempat kata kunci
    char str4[100]; //tempat hasil setelah menghilangkan kata kunci

    scanf("%s", &str1); //memasukan string
    strcpy(str2, str1); //copy isi string 1 ke 2
    n = strlen(str1); //panjang string 1
    i=0;
    while (i<n) //mengeluarkan kalimat utama dari string masukan
    {
        if (str1[i] == '|')
        {
            str2[i] ='\0';
        }
        i++;
    }
    /*i=0;
    do
    {
        scanf(" %c", &str1[i]); //masukan berupa array yang akan diubah menjadi string
        i++;
    } while (str1[i-1] != '|');
    for ( i = 0; str1[i] != '|'; i++)
    {
        printf("%c", str1[i]);
    }
    str1[i-1] = '\0';
    printf("%s", str2); //output string
    printf("\n");*/
    i=0;
    while (i<n) //mengeluarkan kata kunci dari string masukan
    {
        if (str1[i] == '|')
        {
            j=i;
            k=0;
            while (j<n)
            {
                //printf("%c", str1[j+1]);
                str3[k]=str1[j+1];
                k++;
                j++;
            }
            str3[n-k+1]='\0'; //mengubah array menjadi string
        }
        i++;
    }
    //printf("%s", str3); //output string
    int lensen = strlen(str2);
    int lenkey = strlen(str3);
    int syarat;
    int arrIndex[100];
    int index3=0;
    i=0;
    while (i < lensen)
    {
        syarat=0;
        
        if (str2[i] == str3[0]) //memeriksa apakah string kalimat utama ada yang sama dengan kata kunci
        {
            syarat=1;
            int index1=0, index2=i;
            j=0;
            while (j < lenkey && syarat == 1) //memeriksa untuk array selanjutnya
            {
                if (str2[index2] != str3[index1]) //jika huruf tidak sama maka nilai syarat akan kembali ke 0
                {
                    syarat=0;
                }
                index1++;
                index2++;
                j++;
            }
        }
        if (syarat == 1) //jika syarat bernilai 1 maka indexnya akan disimpan pada sebuah array
        {
            arrIndex[index3++]=i; //memasukan index yang bernilai benar
            i+=lenkey; //i akan ditambah dengan panjang kata kunci agar tidak diperiksa lagi
        }
        else //jika syarat bernilai 0
        {
            i++; //i akan bertambah nilainya sebesar 1
        }
    }
    /*for( i=0;i<index3;i++){
        printf("%d ",arrIndex[i]); //tes output index dari elemen yang sama
    }*/

    index3=0;
    int index4=0;
    i=0;
    while (i<lensen)
    {
        if (i == arrIndex[index3]) //jika nilai i sama dengan index dari kalimat utama yang sama dengan kata kunci yang sama
        {
            i += lenkey; //maka i akan ditambahkan dengan panjang kata kunci
            index3++;
        }else //jika tidak sama dengan kata kunci akan dimasukan ke sebuah array
        {
            str4[index4++]=str2[i++]; //menampung kata yang tidak sama dengan kata kunci ke sebuah array
        }
    }
    str4[index4]='\0'; //membuat array yang menampung kata yg tidak sama dengan kata kunci menjadi string
    int len=strlen(str4); //panjang kalimat yang sudah dikurangi kata kunci
    //printf("%s", str4); //tes output kata katanya
    //printf("%d", len);
    int baris, kolom;
    int indexpola1;
    int indexpola2;
    //jika kalimat utama habis dikurangi kata kunci
    if (len == 0)
    {
        printf("=== Kalimat Hilang ===\n");
    }
    //jika kalimat utama masih ada
    else
    {
        printf("Tanpa kata kunci: %s\n", str4);
        printf("\n");
        if (len % 2 == 0) //jika panjang kalimat berjumlahkan genap
        {
            baris=0;
            i=len;
            indexpola1=0;
            indexpola2=i-1;
            while (baris<=(i/2)-2) //pola untuk bagian atas
            {
                kolom=0;
                while (kolom < baris)
                {
                    printf(" ");
                    kolom++;
                }
                printf("%c", str4[indexpola1++]); //output string pola 1
                kolom=(i/2)-2-baris;
                while (kolom>=0)
                {
                    printf(" ");
                    kolom--;
                }
                kolom=(i/2)-baris-2;
                while (kolom>=0)
                {
                    printf(" ");
                    kolom--;
                }
                printf("%c", str4[indexpola2--]); //output string pola 2
                printf("\n");
                baris++;
            }
            indexpola2-=2; //agar index berlanjut setelah setengahnya terprint untuk di print kembali dibagian bawah
            indexpola1+=2; //agar index berlanjut setelah setengahnya terprint untuk di print kembali dibagian bawah
            baris=0;
            while (baris < i/2-1)
            {
                printf(" ");
                baris++;
            }
            printf("%c%c", str4[i/2-1], str4[i/2]); //output string pola bagian tengah
            printf("\n");
            baris=0;
            while (baris < i/2-1) //pola untuk bagian bawah
            {
                kolom=(i/2)-baris;
                while (kolom>=3)
                {
                    printf(" ");
                    kolom--;
                }
                printf("%c", str4[indexpola2--]); //output string melanjutkan pola 2
                kolom=0;
                while (kolom < baris+2)
                {
                    printf(" ");
                    kolom++;
                }
                kolom=0;
                while (kolom < baris)
                {
                    printf(" ");
                    kolom++;
                }
                printf("%c", str4[indexpola1++]); //output string melanjutkan pola 1
                printf("\n");
                baris++;
            }
        }
        else //jika panjang kalimat berjumlahkan ganjil
        {
            baris=0;
            i=len;
            indexpola1=0;
            indexpola2=i-1;
            while (baris <= (i/2)-1)
            {
                //untuk pola bagian atas
                kolom=0;
                while (kolom < baris)
                {
                    printf(" ");
                    kolom++;
                }
                printf("%c", str4[indexpola1++]); //output string pola 1
                kolom=(i/2)-baris-1;
                while (kolom>=0)
                {
                    printf(" ");
                    kolom--;
                }
                kolom=(i/2)-baris-2;
                while (kolom>=0)
                {
                    printf(" ");
                    kolom--;
                }
                printf("%c", str4[indexpola2--]); //output string pola 1
                printf("\n");
                baris++;
            }
            indexpola2--; //agar index berlanjut setelah setengahnya terprint untuk di print kembali dibagian bawah
            indexpola1++; //agar index berlanjut setelah setengahnya terprint untuk di print kembali dibagian bawah
            baris = 0;
            while (baris < i/2)
            {
                printf(" ");
                baris++;
            }
            printf("%c", str4[i/2]); //output string untuk pola bagian tengah
            printf("\n");
            baris=0;
            while (baris < i/2)
            {
                kolom=i/2-baris-2;
                while (kolom >=0)
                {
                    printf(" ");
                    kolom--;
                }
                printf("%c", str4[indexpola2--]); //output string melanjutkan pola 2
                kolom=0;
                while (kolom < baris+1)
                {
                    printf(" ");
                    kolom++;
                }
                kolom=0;
                while (kolom < baris)
                {
                    printf(" ");
                    kolom++;
                }
                printf("%c", str4[indexpola1++]); //output string melanjutkan pola 1
                printf("\n");
                baris++;
            }
        }
    }
    return 0;
}
//gcc PSPW20.c -o PSPW20.exe && PSPW20.exe