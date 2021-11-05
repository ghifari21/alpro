#include <stdio.h>

int main(){
    int x1, x2, x3, x4;
    int y1, y2, y3, y4;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);
    scanf("%d %d", &x4, &y4);

    //counting large rectangle
    int size1;
    int size2;
    size1 = (x2 - x1) * (y1 - y2);
    size2 = (x4 - x3) * (y3 - y4);

    if (((x1,y1 < x3,y3) || (x1,y1 > x3,y3)) && (x1,y1 < x4,y4) || (x1,y1 > x4,y4))
    {
        printf("beririsan\n");
        if (size1 > size2)
        {
            printf("pertama\n");
        }else
        {
            printf("kedua\n");
        }
    }
    else
    {
        printf("tidak beririsan\n");
        if (size1 > size2)
        {
            printf("pertama\n");
        }else
        {
            printf("kedua\n");
        }
    }
    
    return 0;
}