#include <stdio.h>
#include <string.h>

int space;
char str1[100][100], str2[100][100];

void input(int a);
void output(int a, int b);

int main(){
    int i, count, overlap;
    scanf("%d", &count);
    input(count);
    scanf("%d", &overlap);
    output(count, overlap);
}

void input(int a){
    int i;
    for ( i = 0; i < a; i++)
    {
        scanf("%s", str1[i]);
    }
    for ( i = 0; i < a; i++)
    {
        scanf("%s", str2[i]);
    }
}
void output(int a, int b){
    int i, j;
    space = 0;
    for ( i = 0; i < a; i++)
    {
        if (i != 0)
        {
            for ( j = 0; j < space; j++)
            {
                printf(" ");
            }
        }
        printf("%s\n", str1[i]);
        space += strlen(str1[i]) - b;
        for ( j = 0; j < space; j++)
        {
            printf(" ");
        }
        printf("%s\n", str2[i]);
        space += strlen(str2[i]) - b;
    }
}