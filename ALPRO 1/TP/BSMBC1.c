#include <stdio.h>
#include <string.h>

char word[100];
int lenword;
char leftword[100];
char rightword[100];
char temp[100];

void inputsplit(){
    int i, j=0;
    scanf("%s", &word);
    lenword = strlen(word);
    if (lenword % 2 == 0)
    {
        for ( i = 0; i < (lenword/2); i++)
        {
            leftword[i]=word[i];
        }
        leftword[i+1]='\0';
        for ( i = lenword/2; i < lenword; i++)
        {
            rightword[j++]=word[i];
        }
        rightword[j+1]='\0';
    }
    else
    {
        for ( i = 0; i < (lenword/2)+1; i++)
        {
            leftword[i]=word[i];
        }
        leftword[i+1]='\0';
        for ( i = (lenword/2); i < lenword; i++)
        {
            rightword[j++]=word[i];
        }
        rightword[j+1]='\0';
    }
}
void reverse(){
    int i, j=0;
    for ( i = strlen(rightword)-1; i >=0; i--)
    {
        temp[j++]=rightword[i];
    }
    temp[j+1]='\0';
}
int check(){
    int x=0;
    if (strcmp(leftword, temp) == 0)
    {
        x=1;
    }else
    {
        x=0;
    }
    return x;
}
void outputpattern(){
    int i, j, k=0, l;
    if (check() == 1)
    {
        if (lenword % 2 == 0)
        {
            l=0;
            for ( i = 0; i < strlen(leftword); i++)
            {
                for ( j = 0; j < strlen(leftword); j++)
                {
                    printf(" ");
                }
                printf("%c", leftword[k++]);
                printf("\n");
            }
            printf("%s %s\n", leftword, rightword);
            for ( i = 0; i < strlen(rightword); i++)
            {
                for ( j = 0; j < strlen(rightword); j++)
                {
                    printf(" ");
                }
                printf("%c", rightword[l++]);
                printf("\n");
            }
        }
        else
        {
            l=1;
            for ( i = 0; i < strlen(leftword)-1; i++)
            {
                for ( j = 0; j < strlen(leftword)-1; j++)
                {
                    printf(" ");
                }
                if (k != strlen(leftword)-1)
                {
                    printf("%c", leftword[k++]);
                }
                printf("\n");
            }
            printf("%s\n", word);
            for ( i = 0; i < strlen(rightword)-1; i++)
            {
                for ( j = 0; j < strlen(rightword)-1; j++)
                {
                    printf(" ");
                }
                printf("%c", rightword[l++]);
                printf("\n");
            }
        }
    }
    else
    {
        printf("%s\n", word);
    }
}
int main(){
    inputsplit();
    reverse();
    outputpattern();
    return 0;
}