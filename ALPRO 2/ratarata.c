#include <stdio.h>

int main(){
    int i=0;
    float count, total=0;
    do
    {
        scanf("%f", &count);
        if (count != -1)
        {
            total += count;
            i++;
        }
    } while (count != -1);

    float average = total / i;
    
    printf("%f", average);

    return 0;
}