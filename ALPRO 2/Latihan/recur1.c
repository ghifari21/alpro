#include <stdio.h>

void reverse(int i){
    printf("%d ", i);
    if (i > 0)
    {
        reverse(i-1);
    }
}

int main(){
    int num;
    scanf("%d", &num);
    reverse(num);

    return 0;
}