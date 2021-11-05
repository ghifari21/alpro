#include <stdio.h>

void sequenceSearch(int arr[], int n, int search){
    int i=0, found=0;

    while (i < n && found == 0)
    {
        if (arr[i] == search)
        {
            found = 1;
        }else
        {
            i++;
        }
    }
    if (found == 1)
    {
        printf("Angka %d ditemukan.\n", search);
    }else
    {
        printf("Data tidak ditemukan.\n");
    }
}

int binarySearch(int arr[], int n, int search){
    int i=0, k, found=0;
    n--;

    while (i <= n && found == 0)
    {
        k = (int)(i+n) / 2;
        if (arr[k] == search)
        {
            found = 1;
        }else
        {
            if (arr[k] > search)
            {
                n = k - 1;
            }else
            {
                i = k + 1;
            }
        }
    }
    if (found == 1)
    {
        return k;
    }else
    {
        return -1;
    }
}


int main(){
    int i, search, n;
    scanf("%d", &n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (search < arr[i])
        {
            search = arr[i];
        }
    }
    scanf("%d", &search);
    //sequenceSearchTest(arr, n, search);
    //sequenceSearch(arr, n, search);
    i = binarySearch(arr, n, search);
    printf("%d", arr[i]);
    return 0;

}