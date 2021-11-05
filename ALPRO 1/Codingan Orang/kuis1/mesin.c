#include "header.h"

int Cari(int n, char str[][100], char sub[]){
    int i, j, k, sama = 0;
    int jumlah;
    int panjangsub = strlen(sub);
    jumlah = 0;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < strlen(str[i]); j++)
        {
            for ( k = 0; k < panjangsub; k++)
            {
                if (str[i][j+k] == sub[k])
                {
                    sama++;
                }
            }
            if (sama == panjangsub)
            {
                jumlah++;
            }
            sama = 0;
        }
    }
    //return jumlah;
    return jumlah;
    //return panjangsub;
}