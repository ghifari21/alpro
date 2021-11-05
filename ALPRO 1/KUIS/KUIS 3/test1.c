#include <stdio.h>
#include <string.h>

int n, m;
char word1[100][100], word2[100][100];
int len1[100], len2[100];

void input();
void output();

int main(){
    input();
    output();

    return 0;
}

void input(){
    int i;
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        scanf("%s", &word1[i]);
        len1[i] = strlen(word1[i]);
    }
    for ( i = 0; i < n; i++)
    {
        scanf("%s", &word2[i]);
        len2[i] = strlen(word2[i]);
    }
    scanf("%d", &m);
}
void output(){
    int i, j, space = 0;
    for ( i = 0; i < n; i++)
    {
        printf("%s\n", word1[i]);
        space += len1[i] - m;
        for ( j = 0; j < space; j++)
        {
            printf(" ");
        }
        printf("%s\n", word2[i]);
        space += len2[i] - m;
        if (i != n-1)
        {
            for ( j = 0; j < space; j++)
            {
                printf(" ");
            }
        }
    }
}