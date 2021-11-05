#include <stdio.h>
int main(){
    //deklarasi variable
    int n, i;
    //masukan user
    scanf("%d", &n);

    //kondisi pengulangan
    if (n>=0 && n<=100)
    {
        for (i=1; i <= n; i++)
        {
            printf("Wilujeng Sumping.\n");
        }
        
    }
    
    return 0;
}