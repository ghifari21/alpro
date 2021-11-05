#include <stdio.h>
int main(){
    int i, n;
    scanf("%d", &n);
    int arr[n];

    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    i=0;
    int cek=0;
    int jumlah;
    while (i<n && cek==0)
    {
        jumlah=0;
        while (jumlah<n && cek==0)
        {
            if (i != jumlah)
            {
                if (arr[i] % arr[jumlah] == 0)
                {
                    cek=1;
                }
            }
            jumlah++;
        }
        i++;
    }
    if (cek==1)
    {
        printf("ada kelipatan\n");
    }else
    {
        printf("tidak ada kelipatan\n");
    }
    return 0;    
}