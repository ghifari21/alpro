#include <stdio.h>

int main(){
    int i, j, temp, minIdx, many;
    scanf("%d", &many);
    int arr[many];
    for ( i = 0; i < many; i++)
    {
        scanf("%d", &arr[i]);
    }
    for ( i = 0; i < many-1; i++)
    {
        minIdx = i;
        for ( j = i+1; j < many; j++)
        {
            if (arr[minIdx] > arr[j])
            {
                minIdx = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
    for ( i = 0; i < many; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}