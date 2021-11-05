#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    int i, j, k, l;
    int baris, kolom;
    int index;
    scanf("%s", string);

    int len =strlen(string);

    /*baris = 0;
    while(baris < len)
    {
        kolom = 0;
        while(kolom < len)
        {
            if ( (baris == kolom) || ((baris + kolom) == (len-1)) )
            {
            printf("%c", string[kolom]);
            }
            else{
            printf(" ");
            }
        kolom++;
        }
    printf("\n");
    baris++;
    }*/

    //===============================
    //| untuk panjang kalimat ganji |
    //===============================
    if (len % 2 == 1)
    {
        baris=0;
        i=len;
        index=0;
        j=i-1;
        while (baris<=(i/2)-1)
        {
            kolom=0;
            while (kolom < baris)
            {
                printf(" ");
                kolom++;
            }
            printf("%c", string[index++]);
            kolom=(i/2)-1-baris;
            while (kolom>=0)
            {
                printf(" ");
                kolom--;
            }
            kolom=(i/2)-2-baris;
            while (kolom>=0)
            {
                printf(" ");
                kolom--;
            }
            printf("%c", string[j--]);            
            printf("\n");
            baris++;
        }
        index++;
        j--;
        baris=0;
        while (baris < i/2)
        {
            printf(" ");
            baris++;
        }
        printf("%c", string[i/2]);
        printf("\n");
        baris=0;
        while (baris<i/2)
        {
            kolom=(i/2)-baris;
            while (kolom>=2)
            {
                printf(" ");
                kolom--;
            }
            printf("%c", string[j--]);
            kolom=0;
            while (kolom<baris+1)
            {
                printf(" ");
                kolom++;
            }
            kolom=0;
            while (kolom < baris)
            {
                printf(" ");
                kolom++;
            }
            printf("%c", string[index++]);
            printf("\n");
            baris++;
        }
    }
    //=======================
    //| untuk kalimat genap |
    //=======================
    else
    {
        baris=0;
        i=len;
        index=0;
        j=i-1;
        while (baris<=(i/2)-2)
        {
            kolom=0;
            while (kolom < baris)
            {
                printf(" ");
                kolom++;
            }
            printf("%c", string[index++]);
            kolom=(i/2)-2-baris;
            while (kolom>=0)
            {
                printf(" ");
                kolom--;
            }
            kolom=(i/2)-2-baris;
            while (kolom>=0)
            {
                printf(" ");
                kolom--;
            }
            printf("%c", string[j--]);            
            printf("\n");
            baris++;
        }
        index++;
        j--;
        /*baris=0;
        while (baris < i/2-1)
        {
            printf("-");
            baris++;
        }
        printf("%c%c", string[i/2-1], string[i/2]);
        printf("\n");*/
        baris=0;
        while (baris<i/2)
        {
            kolom=(i/2)-baris;
            while (kolom>=2)
            {
                printf(" ");
                kolom--;
            }
            printf("%c", string[j--]);
            kolom=0;
            while (kolom<baris)
            {
                printf(" ");
                kolom++;
            }
            kolom=0;
            while (kolom < baris)
            {
                printf(" ");
                kolom++;
            }
            printf("%c", string[index++]);
            printf("\n");
            baris++;
        }
    }
    
    
    

    return 0;
}