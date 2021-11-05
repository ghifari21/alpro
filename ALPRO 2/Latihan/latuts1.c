#include <stdio.h>
#include <string.h>

typedef struct
{
    char string[100];
    int conson;
}array;

void check(int count, array arr[]){
    int i, j;
    for ( i = 0; i < count; i++)
    {
        arr[i].conson = 0;
        for ( j = 0; j < strlen(arr[i].string); j++)
        {
            if (arr[i].string[j] != 'a' && arr[i].string[j] != 'i' && arr[i].string[j] != 'u' && arr[i].string[j] != 'e' && arr[i].string[j] != 'o')
            {
                arr[i].conson++;
            }
        }
    }
}

void mergeSorted(int n, array one[], int m, array two[], array three[]){
    int i=0, j=0, k=0, l=0;

    while (i < n && j < m)
    {
        if (one[i].conson > two[j].conson)
        {
            three[k].conson = one[i].conson;
            strcpy(three[k].string, one[i].string);
            i++;
            k++;
        }else if (two[j].conson > one[i].conson)
        {
            three[k].conson = two[j].conson;
            strcpy(three[k].string, two[j].string);
            j++;
            k++;
        }else
        {
            three[k].conson = one[i].conson;
            strcpy(three[k].string, one[i].string);
            i++;
            k++;
            three[k].conson = two[j].conson;
            strcpy(three[k].string, two[j].string);
            j++;
            k++;
        }
    }
    if (i < n)
    {
        for ( l = i; l < n; l++)
        {
            three[k].conson = one[l].conson;
            strcpy(three[k].string, one[l].string);
            k++;
        }
    }
    if (j < m)
    {
        for ( l = j; l < m; l++)
        {
            three[k].conson = two[l].conson;
            strcpy(three[k].string, two[l].string);
            k++;
        }
    }
}

void insertionSort(int count, array arr[]){
    int i, j, key;
    char keyname[100];
    for ( i = 0; i < count; i++)
    {
        key = arr[i].conson;
        strcpy(keyname, arr[i].string);
        j = i - 1;
        while (j >= 0 && key > arr[j].conson)  // -> while (j>=0 && strcmp(key, arr[j]) < 0) for comparing string
        {               //   ^ '<' for ascending and '>' for descending
            arr[j+1].conson = arr[j].conson;
            strcpy(arr[j+1].string, arr[j].string);
            j--;
        }
        arr[j+1].conson = key;
        strcpy(arr[j+1].string, keyname);
    }
}

void selectionSort(int count, array arr[]){
    int i, j, temp, idx;
    char tempname[100];

    for ( i = 0; i < count - 1; i++)
    {
        idx = i;
        for ( j = i+1; j < count; j++)
        {
            if (arr[idx].conson < arr[j].conson)   // -> if (strcmp(arr[idx], arr[j]) > 0) for comparing string
            {            // ^ '>' for ascending and '<' for descending
                idx = j;
            }
        }
        temp = arr[i].conson;
        arr[i].conson = arr[idx].conson;
        arr[idx].conson = temp;

        strcpy(tempname, arr[i].string);
        strcpy(arr[i].string, arr[idx].string);
        strcpy(arr[idx].string, tempname);
    }
}

void bubbleSort(int count, array arr[]){
    int i, temp, swap;
    char tempname[100];

    do
    {
        swap = 0;
        for ( i = 0; i < count - 1; i++)
        {
            if (arr[i].conson < arr[i+1].conson)  // -> if (strcmp(arr[i], arr[i+1]) > 0) for comparing string
            {       // ^ '>' for ascending and '<' for descending
                temp = arr[i].conson;
                arr[i].conson = arr[i+1].conson;
                arr[i+1].conson = temp;

                strcpy(tempname, arr[i].string);
                strcpy(arr[i].string, arr[i+1].string);
                strcpy(arr[i+1].string, tempname);
                
                swap = 1;
            }
        }
    } while (swap == 1);
}

void quickSort(array arr[], int left, int right){
    int i, j, temp;
    i = left;
    j = right;
    char tempname[100];

    do
    {
        while (arr[i].conson > arr[right].conson && i <= j)   // -> while (strcmp(arr[i], arr[right]) < 0 && i <= j) for comparing string
        {          // ^ '<' for ascending and '>' for descending
            i++;
        }
        while (arr[j].conson < arr[left].conson && i <= j)    // -> while (strcmp(arr[j], arr[left]) > 0 && i <= j) for comparing string
        {          // ^ '>' for ascending and '<' for descending
            j--;
        }
        if (i < j)
        {
            temp = arr[i].conson;
            arr[i].conson = arr[j].conson;
            arr[j].conson = temp;

            strcpy(tempname, arr[i].string);
            strcpy(arr[i].string, arr[j].string);
            strcpy(arr[j].string, tempname);

            i++;
            j--;
        }
    } while (i < j);
    
    if (left < j)
    {
        quickSort(arr, left, j);
    }
    if (i < right)
    {
        quickSort(arr, i, right);
    }
}

void output(int count, array arr[]){
    int i;
    for ( i = 0; i < count; i++)
    {
        printf("%s\n", &arr[i].string);
    }
}

int main(){
    int i, n, m, p;
    char menthod[100];

    scanf(" %s", &menthod);

    scanf("%d", &n);
    array first[n];
    for ( i = 0; i < n; i++)
    {
        scanf(" %s", &first[i].string);
    }
    check(n, first);

    scanf("%d", &m);
    array second[m];
    for ( i = 0; i < m; i++)
    {
        scanf(" %s", &second[i].string);
    }
    check(m, second);

    scanf("%d", &p);
    array third[p];
    for ( i = 0; i < p; i++)
    {
        scanf(" %s", &third[i].string);
    }
    check(p, third);
    
    if (strcmp(menthod, "selectionsort") == 0)
    {
        selectionSort(n, first);
        selectionSort(m, second);
        selectionSort(p, third);
    }else if (strcmp(menthod, "insertionsort") == 0)
    {
        insertionSort(n, first);
        insertionSort(m, second);
        insertionSort(p, third);
    }else if (strcmp(menthod, "bubblesort") == 0)
    {
        bubbleSort(n, first);
        bubbleSort(m, second);
        bubbleSort(p, third);
    }else
    {
        quickSort(first, 0, n-1);
        quickSort(second, 0, m-1);
        quickSort(third, 0, p-1);
    }
    array merge12[n+m];
    array mergeall[n+m+p];
    
    mergeSorted(n, first, m, second, merge12);
    mergeSorted(n+m, merge12, p, third, mergeall);
    
    output(n+m+p, mergeall);

    return 0;
}
