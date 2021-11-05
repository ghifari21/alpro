#include <stdio.h>
typedef struct
{
    char kode;
    int nilai;
    int r_biner[50];
}data;
int main(){
    int i, j, n;
    scanf("%d", &n);
    data huruf[n];
    data angka[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%c %d", &huruf[i].kode, &angka[i].nilai);
    }
    i=0;
    while (/* condition */)
    {
        /* code */
    }
    
}
