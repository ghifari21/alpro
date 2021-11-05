#include <stdio.h>

int zeroHour, firstHour;

int count(int n){
    if (n == 0)
    {
        return zeroHour;
    }else if (n == 1)
    {
        return firstHour;
    }else
    {
        return ((2 * count(n-1)) + (count(n-2) * count(n-2)));
    }
}

int main(){
    int i, j, num, bacteri0[100], bacteri1[100], time[100];
    scanf("%d", &num);
    for ( i = 0; i < num; i++)
    {
        scanf("%d %d %d", &bacteri0[i], &bacteri1[i], &time[i]);
    }
    for ( i = 0; i < num; i++)
    {
        zeroHour = bacteri0[i];
        firstHour = bacteri1[i];
        printf("%d\n", count(time[i]));
    }

    return 0;
}