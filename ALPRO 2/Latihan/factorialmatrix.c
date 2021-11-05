#include <stdio.h>

int main(){
    int i, j;
    char sign1, sign2;
    int matrix[100][100];
    int row, column;
    int rowraw[100], columnraw[100];
    int fac1[100], fac2[100];

    scanf(" %c", &sign1);
    if (sign1 == 'K')
    {
        scanf("%d", &column);
        for ( i = 0; i < column; i++)
        {
            scanf("%d", &columnraw[i]);
            fac2[i] = columnraw[i];
        }
    }else
    {
        scanf("%d", &row);
        for ( i = 0; i < row; i++)
        {
            scanf("%d", &rowraw);
            fac1[i] = rowraw[i];
        }
    }
    scanf(" %c", &sign2);
    if (sign1 == 'K')
    {
        scanf("%d", &column);
        for ( i = 0; i < column; i++)
        {
            scanf("%d", &columnraw[i]);
            fac2[i] = columnraw[i];
        }
    }else
    {
        scanf("%d", &row);
        for ( i = 0; i < row; i++)
        {
            scanf("%d", &rowraw);
            fac1[i] = rowraw[i];
        }
    }

    for ( i = 0; i < row; i++)
    {
        for ( j = rowraw[i]-1; j >= 1; j--)
        {
            fac1[i] *= j;
        }
    }
    for ( i = 0; i < column; i++)
    {
        for ( j = columnraw[i]-1; j >= 1; j--)
        {
            fac2[i] *= j;
        }
    }
    int idx1=0, idx2=0;
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            matrix[i][j] = fac1[idx1] * fac2[idx2];
            idx2++;
        }
        idx2=0;
        idx1++;
    }
    for ( i = 0; i < row; i++)
    {
        printf("%d\n", fac1[i]);
    }
    
    
    

    return 0;
}