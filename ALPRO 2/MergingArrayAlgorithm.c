#include <stdio.h>

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

void mergeSorted(int n, int arr1[], int m, int arr2[], int arr3[]){
    int i=0, j=0, k=0, l=0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else if (arr2[j] < arr1[i])
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
        else
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
        for ( l = i; l < n; l++)
        {
            arr3[k] = arr1[l];
            k++;
        }
    }
    if (j < m)
    {
        for ( l = j; l < m; l++)
        {
            arr3[k] = arr2[l];
            k++;
        }
    }
}

void quickSortMiddlePivot(int arr[], int left, int right){  // >> ascending algorithm
    int i, j, temp;
    i = left;
    j = right;
    int pivot = arr[(right+left)/2];

    do
    {
        while (arr[i] < pivot && i <= j)
        {          // ^ '<' for ascending and '>' for descending
            i++;
        }
        while (arr[j] > pivot && i <= j)
        {          // ^ '>' for ascending and '<' for descending
            j--;
        }
        
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    } while (i < j);
    
    if (left < j && j < right)
    {
        quickSortMiddlePivot(arr, left, j);
    }
    if (i < right && i > left)
    {
        quickSortMiddlePivot(arr, i, right);
    }
}

void printOutput(int count, int arr[]){
    int i;
    for ( i = 0; i < count; i++)
    {
        printf("%d", arr[i]);
        if (i != count-1)
        {
            printf(" ");
        }
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
    quickSortMiddlePivot(arr1, 0, n-1);
    scanf("%d", &m);
    int arr2[m], arr3[n+m];
    for ( i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    quickSortMiddlePivot(arr2, 0, m-1);
    mergeSorted(n, arr1, m, arr2, arr3);
    mergeNotSorted(n, arr1, m, arr2, arr3);
    printOutput(n+m, arr3);

    return 0;
}