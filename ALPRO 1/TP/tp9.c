#include <stdio.h>
#include <string.h>

int n;
char name[100][100];
char inputname[100][100];
char comment[100][100];
char star[100][100];
char code[100][100];
int five=0, four=0, three=0, two=0, one=0;
int condfive=0, condfour=0, condthree=0, condtwo=0, condone=0;

void input(){
    int i;
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        scanf("%s", &inputname[i]);
    }
}
void splittingprocess(){
    int i, j, k, index[100];
    for ( i = 0; i < n; i++)
    {
        strcpy(name[i], inputname[i]);
        for ( j = 0; j < strlen(inputname[i]); j++)
        {
            if (inputname[i][j] == '/')
            {
                name[i][j] = '\0';
            }
            if (inputname[i][j] == '/' && inputname[i][j+2] == '/')
            {
                if (inputname[i][j+1] == 'A' || inputname[i][j+1] == 'T')
                {
                    code[i][0] = inputname[i][j+1];
                    code[i][1] = '\0';
                }
                if ((inputname[i][j+1] == '1') || (inputname[i][j+1] == '2') || (inputname[i][j+1] == '3') || (inputname[i][j+1] == '4') || (inputname[i][j+1] == '5'))
                {
                    star[i][0] = inputname[i][j+1];
                    star[i][1] = '\0';
                }
            }
            if (inputname[i][j] == '/' && inputname[i][j+2] != '/')
            {
                index[i]=0;
                k=j;
                while (k < strlen(inputname[i]))
                {
                    comment[i][index[i]]=inputname[i][k+1];
                    index[i]++;
                    k++;
                }
            }
        }
        comment[i][index[i]+1] = '\0';
    }
}
void changingprocess(){
    int i, j;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < strlen(name[i]); j++)
        {
            if (name[i][j] == '_')
            {
                name[i][j] = ' ';
            }
        }
        for ( j = 0; j < strlen(comment[i]); j++)
        {
            if (comment[i][j] == '_')
            {
                comment[i][j] = ' ';
            }
        }
    }
    for ( i = 0; i < n; i++)
    {
        if (code[i][0] == 'A')
        {
            j=1;
            while (j < strlen(name[i]))
            {
                if (name[i][j] == ' ')
                {
                    j+=2;
                    name[i][j] = '*';
                }else
                {
                    name[i][j] = '*';
                    j++;
                }
            }
        }   
    }
}
void sortingprocess(){
    int i;
    for ( i = 0; i < n; i++)
    {
        if (star[i][0] == '5')
        {
            five++;
            condfive++;
        }
        if (star[i][0] == '4')
        {
            four++;
            condfour++;
        }
        if (star[i][0] == '3')
        {
            three++;
            condthree++;
        }
        if (star[i][0] == '2')
        {
            two++;
            condtwo++;
        }
        if (star[i][0] == '1')
        {
            one++;
            condone++;
        }
    }
}
void output(){
    int i;
    if (five != 0)
    {
        printf(">>> Review Bintang 5 <<<\n");
        printf("--------------------\n");
        for ( i = 0; i < n; i++)
        {
            if (star[i][0] == '5')
            {
                printf("%s\n", name[i]);
                printf("%s\n", comment[i]);
                printf("--------------------\n");
            }
        }
        if (condfive == five)
        {
            printf("\n");
        }
    }
    if (four != 0)
    {
        printf(">>> Review Bintang 4 <<<\n");
        printf("--------------------\n");
        for ( i = 0; i < n; i++)
        {
            if (star[i][0] == '4')
            {
                printf("%s\n", name[i]);
                printf("%s\n", comment[i]);
                printf("--------------------\n");
            }
        }
        if (condfour == four)
        {
            printf("\n");
        }
    }
    if (three != 0)
    {
        printf(">>> Review Bintang 3 <<<\n");
        printf("--------------------\n");
        for ( i = 0; i < n; i++)
        {
            if (star[i][0] == '3')
            {
                printf("%s\n", name[i]);
                printf("%s\n", comment[i]);
                printf("--------------------\n");
            }
        }
        if (condthree == three)
        {
            printf("\n");
        }
    }
    if (two != 0)
    {
        printf(">>> Review Bintang 2 <<<\n");
        printf("--------------------\n");
        for ( i = 0; i < n; i++)
        {
            if (star[i][0] == '2')
            {
                printf("%s\n", name[i]);
                printf("%s\n", comment[i]);
                printf("--------------------\n");
            }
        }
        if (condtwo == two)
        {
            printf("\n");
        }
    }
    if (one != 0)
    {
        printf(">>> Review Bintang 1 <<<\n");
        printf("--------------------\n");
        for ( i = 0; i < n; i++)
        {
            if (star[i][0] == '1')
            {
                printf("%s\n", name[i]);
                printf("%s\n", comment[i]);
                printf("--------------------\n");
            }
        }
        if (condone == one)
        {
            printf("\n");
        }
    }
}
int main(){
    input();
    splittingprocess();
    changingprocess();
    sortingprocess();
    output();

    return 0;
}
// gcc tp9.c -o tp9.exe && tp9.exe
/*
5
Ahri/T/5/Produk_original
Lulu_Lan/A/5/Mantap
Niki/A/4/Harga_murah_kualitas_oke
Lina/T/1/Barangnya_rusak._Pelayanannya_buruk_sekali_:(
Mega/A/5/Good
*/