#include <stdio.h>

void printArray(int n, float arr[]){
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%0.1f ", arr[i]);
    }
    printf("\n");
}

int main(){
    int i, j, minIdx;
    float array[100], temp;
    int n;
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        scanf("%f", &array[i]);
    }
    
    for ( i = 0; i < n-1; i++)
    {
        minIdx = i;
        for ( j = i + 1; j < n; j++)
        {
            if (array[minIdx] > array[j])
            {
                minIdx = j;
            }
        }
        temp = array[i];
        array[i] = array[minIdx];
        array[minIdx] = temp;
    }
    
    printArray(n, array);
    return 0;
}