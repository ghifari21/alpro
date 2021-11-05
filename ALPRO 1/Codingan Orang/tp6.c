#include<stdio.h>
typedef struct enam
{
    char biner[100];        
    char kapital;           
    int kunci;              
    int konvB[100];         
    int reverseB[100];      
    int panjang1;           
    int panjang2;           
    char gabung[100];       
    int desimal;            
    int pangkat;            
}Arr;

int main(){
    int n;                 
    scanf("%d", &n);       
    Arr arr[n];            
    int i = 0, j = 0;      
    while (i < n) {
        scanf(" %c", &arr[i].kapital);
            while (arr[i].biner[j-1] != ';') {
                scanf(" %c", &arr[i].biner[j]);         
                    //if (arr[i].biner[j] == ';') break;  
                arr[i].panjang1 = j + 1;                
                arr[i].biner[j] = arr[i].biner[j] - 48; 
                j++;                                    
            }
        j=0;    
        i++;    
    }
    scanf("%d", &arr[0].kunci);
    int konv = arr[0].kunci;
    i = 0;
    while (konv != 0) {
        arr[0].konvB[i] = konv % 2;     
        konv /= 2;                      
        arr[0].panjang2 = i + 1;        
        i++;                            
    }
    j = 0;
    while (i >= 0) {
        arr[0].reverseB[j] = arr[0].konvB[i-1];
        j++;                                   
        i--;                                   
    }
    printf("Hasil Gabung:\n");
    int index = 0;
    i = 0;
    while (i < n) {
        j = 0;
        while (j < arr[i].panjang1 + arr[0].panjang2) {
            if (index < arr[0].panjang2) {
                arr[i].gabung[j] = arr[0].reverseB[index];
                printf("%d", arr[i].gabung[j]);
                j++;
            }
            if (index < arr[i].panjang1) {
                arr[i].gabung[j] = arr[i].biner[index];
                printf("%d", arr[i].gabung[j]);
                j++;
            }
            index++;
        }
        printf("\n");
        index = 0;
        j = 0;
        i++;
    }
    printf("\nPassword:\n");
    i = n - 1;
    while (i >= 0) {
        printf("%c", arr[i].kapital);
        i--;
    }
    arr[0].pangkat = 1;
    i = 0;
    while (i < n) {
        j = (arr[i].panjang1 + arr[0].panjang2) - 1;
        arr[i].desimal = 0;
        while (j >= 0) {
            arr[i].desimal = arr[i].gabung[j] * arr[0].pangkat + arr[i].desimal;
            arr[0].pangkat = arr[0].pangkat * 2;
            j--;
        }
        printf("-%d", arr[i].desimal);
        arr[0].pangkat = 1;
        i++;
    }
    printf("\n");
    return 0;
}