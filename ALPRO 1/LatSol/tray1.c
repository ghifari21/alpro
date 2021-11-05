#include <stdio.h>
int main(){
    int n, m;
    int i, j;
    int jumlah1=0;
    int jumlah2=0;
    scanf("%d", &n);
    char nama[n];
    for ( i = 0; i < n; i++)
    {
        scanf(" %c", &nama[i]);
    }
    scanf("%d", &m);
    char kode[m];
    for ( j = 0; j < m; j++)
    {
        scanf(" %c", &kode[j]);
    }
    for ( i = 0; i < n; i++)
    {
        if (((nama[i] >= 65) && (nama[i] <= 90)) || ((nama[i] >= 97) && (nama[i] <= 122)))
        {
            jumlah1++;
        }
        if (((nama[i] >= 65) && (nama[i] <= 90)) || ((nama[i] >= 97) && (nama[i] <= 122)))
        {
            if ((nama[i] == 65) || (nama[i] == 97) || (nama[i] == 73) || (nama[i] == 105)
            || (nama[i] == 69) || (nama[i] == 101) || (nama[i] == 69) || (nama[i] == 111)
            || (nama[i] == 85) || (nama[i] == 117))
            {
                jumlah1=jumlah1+4;
            }else
            {
                jumlah1=jumlah1+5;
            }
        }
    }
    for ( j = 0; j < m; j++)
    {
        if (((kode[j] >= 65) && (kode[j] <= 90)) || ((kode[j] >= 97) && (kode[j] <= 122)))
        {
            jumlah2++;
        }
    }
    
    if (((jumlah1 % 2 == 1) && (jumlah2 % 2 == 1)) || ((jumlah1 % 2 == 0) && (jumlah2 % 2 == 0)))
    {
        printf("%d-%d ", jumlah1, jumlah2);
        for ( i = 0; i < n; i++)
        {
            
        }
        
    }else
    {
        for ( i = 0; i < n; i++)
        {
            printf("%d-%d %c bukan pelakunya.\n", jumlah1, jumlah2, nama[i]);
        }
    }
    return 0;
}