#include <stdio.h>

int main(){
    int i, j=0, k=0;
    char input[100];
    char alphabet[100];
    char number[100];
    for ( i = 0; i < 6; i++)
    {
        scanf(" %c", &input[i]);
    }
    for ( i = 0; i < 6; i++)
    {
        if ((input[i]>=65 && input[i]<=90) || (input[i]>=97 && input[i]<=122))
        {
            alphabet[j] = input[i];
            j++;
        }
        else
        {
            number[k] = input[i];
            k++; 
        }
    }
    if (j == k)
    {
        for ( i = 0; i < 3; i++)
        {
            printf("%c\n", alphabet[i]);
            printf("%c\n", number[i]);
        }
    }
    else
    {
        printf("tidak valid\n");
    }

    return 0;
}