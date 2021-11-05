#include <stdio.h>
typedef struct
{
    int pembilang;
    int penyebut;
}pecahan;
int main(){
    int i, n;
    scanf("%d", &n);
    pecahan bil[n];
    for ( i = 0; i < n; i++)
    {
        printf("masukan pembilang dan penyebut pecahan ke-%d\n", i+1);
        scanf("%d", &bil[i].pembilang);
        scanf("%d", &bil[i].penyebut);
    }
    int max=0;
    i=0;
    while ((max < 3) && (i<n))
    {
        if (bil[i].pembilang % bil[i].penyebut == 0)
        {
            printf("pecahan yang merupakan bilangan bulat adalah pecahan ke-%d\n", i+1);
            printf(">> pembilang = %d, penyebut = %d, hasil = %d\n", bil[i].pembilang, bil[i].penyebut, bil[i].pembilang/bil[i].penyebut);
            max++;
        }
        i = i+1;
    }
    
    return 0;
}
