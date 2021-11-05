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
    int i, j;
    float key, array[100];
    int n;
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        scanf("%f", &array[i]);
    }
    

    for ( i = 0; i < n; i++)
    {
        key =array[i];
        j = i - 1;
        while (j>=0 && key < array[j])
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
    printArray(n, array);
    return 0;
}