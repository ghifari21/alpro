#include <stdio.h>
int main(){
    int n;
    int i;
    int j;
    printf("masukan nilai array pertama : ");
    scanf("%d", &n);
    printf("\n");
    int tab1[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &tab1[i]);
    }
    int a;
    printf("masukan nilai array kedua : ");
    scanf("%d", &a);
    printf("\n");
    int tab2[a];
    for ( j = 0; j < a; j++)
    {
        scanf("%d", &tab2[j]);
    }
    int max = tab1[0];
    int min = tab2[0];
    for ( i = 1; i < n; i++)
    {
        if (max < tab1[i])
        {
            max = tab1[i];
        }
    }   
    for ( j = a; j > 1; j--)
    {
        if (min > tab2[j])
        {
            min = tab2[j];
        }
        
    }
    
    int hasil;
    hasil=max+min;
    printf("nilai maksimal array pertama : %d\n", max);
    printf("nilai minimal array kedua : %d\n", min);
    printf("hasil penjumlahan array maksimal dan array minimal : %d", hasil);
    return 0;
}