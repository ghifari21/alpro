#include <stdio.h>

int main(){
    int i, j, k;
    int matrix1[3][2], matrix2[2][3];
    int newmatrix[3][3];

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            newmatrix[i][j]=0;
            for ( k = 0; k < 2; k++)
            {
                newmatrix[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
            printf("%d", newmatrix[i][j]);
            if (j != 2)
            {
                if (newmatrix[i][j] < 10)
                {
                    printf("    ");
                }
                else if (newmatrix[i][j]>9 && newmatrix[i][j] < 100)
                {
                    printf("   ");
                }
                else if (newmatrix[i][j]>99 && newmatrix[i][j]<1000)
                {
                    printf("  ");
                }
                else if (newmatrix[i][j]>999 && newmatrix[i][j]<10000);
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    

    return 0;
}