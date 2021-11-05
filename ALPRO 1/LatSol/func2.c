#include <stdio.h>

int pangkat(int* a, int b){
    int i;
    int temp = *a;
    for ( i = 0; i < b-1; i++)
    {
        *a = *a * temp;
    }
    return *a;
}
int main(){
    int x, y;
    scanf(" %d %d", &x, &y);
    printf("angka x akhir : %d \n", pangkat(&x,y));
    return 0;
}