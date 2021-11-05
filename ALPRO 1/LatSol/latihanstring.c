#include <stdio.h>
#include <string.h>

int main(){
    int i, max=0;
    char box[100];
    char boxmax[100];
    do
    {
        scanf("%s", box);
        if (strlen(box) > max)
        {
            max = strlen(box);
            strcpy(boxmax, box);
        }
        
    } while (strcmp(box, "udah") != 0);
    printf("-------------------------");
    printf("\n");
    printf("string terpanjang adalah %s", boxmax);

    return 0;
}