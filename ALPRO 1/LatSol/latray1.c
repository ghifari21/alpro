#include <stdio.h>
int main(){
    //mendeklarasikan variabel yang akan digunakan
    int i;//initiator
    int n;//panjang array
    scanf("%d", &n);//meminta masukan dari user untuk panjang array
    int x[n];//array
    int a=0;
    int m=0;
    int arr[50];

    for ( i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    for ( i = 0; i < n; i++)
    {
        if (x[i] % 2 == 1)
        {
            a=1;
            m++;
            arr[m]=i;
            if (arr[m]=m-1)
            {
                printf(" ");
            }
            
        }
        }if (a == 0)
        {
            printf("Tidak ada bilangan ganjil!\n");
        }

    return 0;
}