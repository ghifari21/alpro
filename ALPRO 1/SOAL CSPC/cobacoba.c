#include <stdio.h>
//membuat bungkusan
typedef struct
{
    int pilihanmenu;
    int banyak;
    int total;
    char member;
}customer;

int main(){
    printf("            MENU             \n");
    printf("1. SOSIS BAKAR          :5000\n");
    printf("2. NASI GORENG          :18000\n");
    printf("3. SPAGET               :20500\n");
    printf("4. GRIN TI              :8000\n");

    customer pertama;
    pertama.total = 0;

    printf("masukan menu pilihan anda : \n")
    scanf("%d", &pertama.pilihanmenu);

}