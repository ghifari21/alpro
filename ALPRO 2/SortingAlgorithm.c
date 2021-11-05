#include <stdio.h>
#include <string.h>

void insertionSort(int count, int arr[]){   // >> ascending algorithm
    int i, j, key;

    for ( i = 0; i < count; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && key < arr[j])  // -> while (j>=0 && strcmp(key, arr[j]) < 0) for comparing string
        {               //   ^ '<' for ascending and '>' for descending
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void selectionSort(int count, int arr[]){   // >> ascending algorithm
    int i, j, temp, idx;
    
    for ( i = 0; i < count - 1; i++)
    {
        idx = i;
        for ( j = i+1; j < count; j++)
        {
            if (arr[idx] > arr[j])   // -> if (strcmp(arr[idx], arr[j]) > 0) for comparing string
            {            // ^ '>' for ascending and '<' for descending
                idx = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[idx];
        arr[idx] = temp;
    }
}

void bubbleSort(int count, int arr[]){  // >> ascending algorithm
    int i, temp, swap;
    
    do
    {
        swap = 0;
        for ( i = 0; i < count - 1; i++)
        {
            if (arr[i] > arr[i+1])  // -> if (strcmp(arr[i], arr[i+1]) > 0) for comparing string
            {       // ^ '>' for ascending and '<' for descending
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                swap = 1;
            }
        }
    } while (swap == 1);
}

void quickSortSidePivot(int arr[], int left, int right){    // >> ascending algorithm
    int i, j, temp;
    i = left;
    j = right;

    do
    {
        while (arr[i] < arr[right] && i <= j)   // -> while (strcmp(arr[i], arr[right]) < 0 && i <= j) for comparing string
        {          // ^ '<' for ascending and '>' for descending
            i++;
        }
        while (arr[j] > arr[left] && i <= j)    // -> while (strcmp(arr[j], arr[left]) > 0 && i <= j) for comparing string
        {          // ^ '>' for ascending and '<' for descending
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] =arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    } while (i < j);
    
    if (left < j)
    {
        quickSortSidePivot(arr, left, j);
    }
    if (i < right)
    {
        quickSortSidePivot(arr, i, right);
    }
}

void quickSortMiddlePivot(int arr[], int left, int right){  // >> ascending algorithm
    int i, j, temp;
    i = left;
    j = right;
    int pivot = arr[(right+left)/2];

    do
    {
        while (arr[i] < pivot && i <= j)    // -> while (strcmp(arr[i], pivot) < 0 && i <= j) for comparing string
        {          // ^ '<' for ascending and '>' for descending
            i++;
        }
        while (arr[j] > pivot && i <= j)    // -> while (strcmp(arr[j], pivot) > 0 && i <= j) for comparing string
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
    int i, count;
    
    scanf("%d", &count);
    int arr[count];
    for ( i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }

    char menthod;
    scanf(" %c", &menthod);
    
    switch (menthod)
    {
    case 'i':
        insertionSort(count, arr);
        break;
    case 's':
        selectionSort(count, arr);
        break;
    case 'b':
        bubbleSort(count, arr);
        break;
    case 'q':
        quickSortMiddlePivot(arr, 0, count-1);
        quickSortSidePivot(arr, 0, count-1);
    default:
        break;
    }

    printOutput(count, arr);

    return 0;
}