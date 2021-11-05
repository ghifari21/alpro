#include <stdio.h>

int main(){
    int row1, row2;
    int arr1[100], arr2[100];
    int i, j, k;
    int odd1[100], even1[100];
    int odd2[100], even2[100];
    int syarat=0;
    scanf("%d", &row1);
    for ( i = 0; i < row1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &row2);
    for ( i = 0; i < row2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    j=0, k=0;
    for ( i = 0; i < row1; i++)
    {
        if (arr1[i] % 2 == 0)
        {
            even1[j] = i;
            j++;
        }else
        {
            odd1[k] = i;
            k++;
        }        
    }
    j=0, k=0;
    for ( i = 0; i < row2; i++)
    {
        if (arr2[i] % 2 == 0)
        {
            even2[j] = i;
            j++;
        }else
        {
            odd2[k] = i;
            k++;
        }        
    }
    for ( i = 0; i < j+k; i++)
    {
        if ((even1[i] == even2[i]) || (odd1[i] == odd2[i]))
        {
            syarat=1;
        }

    }
    if (syarat == 1)
    {
        printf("valid\n");
    }
    else
    {
        printf("tidak valid\n");
    }
    

    return 0;
}