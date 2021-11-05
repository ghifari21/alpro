#include <stdio.h>

void binaryRec(int);
int binary(int);

int main(){
    int num;
    printf("enter a decimal number\n");
    scanf("%d", &num);
    printf("\nrecursive logic\n");
    printf("binary equivalent of %d is ", num);
    binaryRec(num);
    printf("\n");

    return 0;
}

void binaryRec(int num){
    if (num == 1)
    {
        printf("1");
    }else
    {
        binaryRec(num/2);
        printf("%d", num%2);
    }
}