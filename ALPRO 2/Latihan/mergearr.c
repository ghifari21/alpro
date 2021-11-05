#include <stdio.h>
#include <string.h>

void mergeNotSorted(int n, int arr1[], int m, int arr2[], int arr3[]){
    int i, count=0;
    for ( i = 0; i < n; i++)
    {
        arr3[count] = arr1[i];
        count++;
    }
    for ( i = 0; i < m; i++)
    {
        arr3[count] = arr2[i];
        count++;
    }
}

void mergeSortedAsc(int n, int arr1[], int m, int arr2[], int arr3[]){
    int i=0, j=0, k=0, l=0;
    while ((i < n) && (j < m))
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }else if (arr2[j] < arr1[i])
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
    if (i < n)
    {
        for ( l = i; i < n; l++)
        {
            arr3[k] = arr1[l];
            k++;
        }
    }if (j < m)
    {
        for ( l = j; l < m; l++)
        {
            arr3[k] = arr2[l];
            k++;
        }
    }
}

void printOutput(int arr3[], int n, int m){
    int i;
    for ( i = 0; i < n+m; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n");
}

int main(){
    int i, n, m;
    scanf("%d", &n);
    int arr1[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &m);
    int arr2[i];
    for ( i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int arr3[n+m];
    //mergeNotSorted(n, arr1, m, arr2, arr3);
    mergeSortedAsc(n, arr1, m, arr2, arr3);
    printOutput(arr3, n, m);
}