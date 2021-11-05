#include <stdio.h>
int main(){
    //deklarasi variable
    int n, i;
    //masukan dari user
    scanf("%d", &n);

    //memeriksa masukan dari user
    if ((n >= 0) && (n <= 100))
    {
        for (i = 1; i <= n; i++)
        {
            printf("Wilujeng Sumping,!\n");
        }
        
    }
    
    return 0;
}