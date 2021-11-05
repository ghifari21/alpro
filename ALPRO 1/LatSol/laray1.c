#include <stdio.h>
int main(){
    int x[5] = {5, 40, 32, 43, 1};
    char arr[3];
    arr[0]='A';
    arr[1]='K';
    arr[2]='U';

    printf("Array Arr : %c %c %c \n", arr[0], arr[1], arr[2]);
    printf("Array x : %d %d %d %d %d", x[0], x[1],x[2],x[3],x[4]);
    return 0;
}