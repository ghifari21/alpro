#include <stdio.h>
int main(){
    int n;//variabel untuk panjang array
    scanf("%d", &n);//menimta masukan dari user untuk panjang array
    int arr[n];//array dengan panjang n
    int i, j, jumlah;

    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (n % 3 == 0)
    {
        for ( i = 0; i < n; i++)
        {
            i = i / 3;
            for ( j = 0; j < i; j++)
            {
                arr[j]++;
            }
            if (arr[j] == arr[n-1])
            {
                printf("sesuai spesifikasi\n");
            }else
            {
                printf("tidak sesuai spesifikasi\n");
            }
        }
    }
    
    
    return 0;
}