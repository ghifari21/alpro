#include <stdio.h>

int main(){
    int i, j, k;
    int len1, len2;

    scanf("%d", &len1);
    int arr1[len1];
    for ( i = 0; i < len1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &len2);
    int arr2[len2], arr3[len1+len2];
    for ( i = 0; i < len2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    
    i=0, j=0, k=0;
    while (i < len1 && j < len2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }else if (arr1[i] > arr2[j])
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }else
        {
            arr3[k] = arr1[i];
            i++;
            k++;
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }
    int idx;
    if (i < len1)
    {
        for ( idx = i; idx < len1; idx++)
        {
            arr3[k] = arr1[idx];
            k++;
        }
    }
    if (j < len2)
    {
        for ( idx = 0; idx < len2; idx++)
        {
            arr3[k] = arr2[idx];
            k++;
        }
        
    }
    
    for ( i = 0; i < len1+len2; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n");
    return 0;
}