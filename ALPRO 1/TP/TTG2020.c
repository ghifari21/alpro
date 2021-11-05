/*Saya Ghifari Octaverin 2000952 mengerjakan TP5 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
#include <stdio.h>
int main(){
    int i;//variabel yang digunakan unruk perulangan
    int n;//panjang array yang akan dimasukan user
    scanf("%d", &n);//masukan dari user untuk panjang array
    char x[n];//array
    int m = 0;//memuat nilai ascii

    for ( i = 0; i < n; i++)//perulangan untuk mengisi array
    {
        scanf(" %c", &x[i]);//scan untuk mengisi array
        if ((x[i] >= 65) && (x[i] <= 90))//jika huruf kapital
        {
            if (n > 26)//jika panjang kata lebih dari 26
            {
                m = n % 26;
                x[i] = x[i] - m;
                if (x[i] < 65)//jika nilai ascii dibawah 65 atau dibawah huruf A kapital
                {
                    x[i] = x[i] + 26;
                }
            }if (n <= 26)//jika panjang kata kurang dari atau sama dengan 26
            {
                x[i] = x[i] - n;
                if (x[i] < 65)//jika nilai ascii dibawah 65 atau dibawah huruf A kapital
                {
                    x[i] = x[i] + 26;
                }
            }
        }
        if ((x[i] >= 97) && (x[i] <= 122))//jika huruf kecil
        {
            if (n > 26)//jika panjang kata lebih dari 26
            {
                m = n % 26;
                x[i] = x[i] + m;
                if ((unsigned char)x[i] > 122)//jika nilai ascii diatas 122 atau huruf z kecil
                {
                    x[i] = x[i] - 26;
                }
            }if (n <= 26)//jika panjang kata kurang dari atau sama dengan 26
            {
                x[i] = x[i] + n;
                if ((unsigned char)x[i] > 122)//jika nilai ascii diatas 122 atau huruf z kecil
                {
                    x[i] = x[i] - 26;
                }
            }
        }
        printf("%c", x[i]);//menampilkan kata yang sebenarnya
    }
    printf("\n");
    return 0;
}