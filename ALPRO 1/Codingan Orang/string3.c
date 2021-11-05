#include <stdio.h>
#include <string.h>

int main(){
    int n, i, j, k;
    char str1[100]; //masukan string dari user
    char str2[100]; //tempat kalimat
    char str3[100]; //tempat kata kunci

    char str4[100]; //tempat hasil setelah menghilangkan kata kunci
    int index_str4=0;

    scanf("%s", str1); //memasukan string
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
    char str2cpy[100];
    int masukan;
    int indexstr2;
    //printf("%s\n",str2);
    //printf("%s\n",str3);
    i=0;
    while (i < lensen)
    {
        j=0;
        indexstr2=0;
        while (j < lenkey)
        {
            str2[j] = str2cpy[indexstr2];
            printf("%c", str2cpy[indexstr2]);
            j++;
            indexstr2++;
        }
        /*str2cpy[indexstr2]='\0';
        masukan=strcmp(str2cpy, str3);
        printf("%s", str2cpy);
        if (masukan == 1)
        {
            i+=lenkey-1;
        }else
        {
            i++;
        }*/
        i++;
    }
    







    //str4[i+1]='\0';
    //printf("%s", str4);
    
    return 0;
}