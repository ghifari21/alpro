#include <stdio.h>
#include <string.h>

typedef struct 
{
    char kata[100];
}kalimat;


int main(void){
    int n, i;
    n=0;
    kalimat input[50];
    do
    {
        scanf("%s", &input[n].kata);
        if (strcmp(input[n].kata, "mantul") != 0)
        {
            n++;
        }
    } while (strcmp(input[n].kata, "mantul") != 0);

    if (n > 0)
    {
        printf("=============\n");
        for ( i = 0; i < n; ++i)
        {
            printf("%d\n", strlen(input[i].kata));
        }
    }
    
    return 0;
}