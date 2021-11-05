#include <stdio.h>
int main (){
    char nilai;

    printf("masukan nilai :\n");
    scanf(" %c", &nilai);

    switch (nilai)
    {
    case 'A':
        printf("PURRRRFEK\n");
        break;
    case 'B':
        printf("GUDD\n");
        break;
    case 'C':
        printf("NUTTT BED\n");
        break;
    default:
        printf("mabok lu?\n");
        break;
    }

    return 0;
}