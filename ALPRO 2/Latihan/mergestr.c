#include <stdio.h>
#include <string.h>


int main(){
    int i, j, k, l;
    int n, m, minIdx;
    scanf("%d", &n);
    char matkul1[n][100];
    for ( i = 0; i < n; i++)
    {
        scanf("%s", &matkul1[i]);
    }
    scanf("%d", &m);
    char matkul2[m][100];
    for ( i = 0; i < m; i++)
    {
        scanf("%s", &matkul2[i]);
    }
    char merge[n+m][100];
    char temp[100];

    for ( i = 0; i < n-1; i++)
    {
        minIdx=i;
        for ( j = i+1; j < n; j++)
        {
            if (strcmp(matkul1[minIdx], matkul1[j]) > 0)
            {
                minIdx=j;
            }
        }
        strcpy(temp, matkul1[i]);
        strcpy(matkul1[i], matkul1[minIdx]);
        strcpy(matkul1[minIdx], temp);
    }
    for ( i = 0; i < m-1; i++)
    {
        minIdx=i;
        for ( j = i+1; j < m; j++)
        {
            if (strcmp(matkul2[minIdx], matkul2[j]) > 0)
            {
                minIdx=j;
            }
        }
        strcpy(temp, matkul2[i]);
        strcpy(matkul2[i], matkul2[minIdx]);
        strcpy(matkul2[minIdx], temp);
    }

    

    return 0;
}