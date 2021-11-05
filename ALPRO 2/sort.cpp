#include <iostream>
using namespace std;

int main (){
    int i, j, count=6, key;
    int arr[6]={4, 3, 1, 2, 7, 5};

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

    for ( i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}