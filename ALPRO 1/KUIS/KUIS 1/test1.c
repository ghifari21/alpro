#include <stdio.h>

int main(){
    int j1, j2, j3, j4;
    int m1, m2, m3, m4;

    scanf("%d %d", &j1, &m1);
    scanf("%d %d", &j2, &m2);
    scanf("%d %d", &j3, &m3);
    scanf("%d %d", &j4, &m4);

    //convert hour + minutes to minutes 
    m1 += (j1 * 60);    
    m2 += (j2 * 60);    
    m3 += (j3 * 60);    
    m4 += (j4 * 60);

    if (((m1 >= m3) && (m1 <= m4)) || ((m3 >= m1) && (m3 <= m2)) || ((m2 >= m3) && (m2 <= m4)) || ((m4 >= m1) && (m4 <= m2)))
    {
        printf("hore dibaca si dia\n");
    }
    else
    {
        printf("ikhlaskan saja\n");
    }
    
    return 0;
}