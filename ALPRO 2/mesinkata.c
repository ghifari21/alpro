#include <stdio.h>
#include <string.h>

typedef struct
{
    char nim[10];
    char name[100];
    char grade[7];
}student;

int idx, lenKata;
char currentKata[50];

void startKata(char pita[]);
void resetKata();
void incKata(char pita[]);
char *getCKata();
int getLenKata();
int EOP(char pita[]);
void insertData(char pita[], student *data);

int main(){
    int n, i;
    char pita[200];
    
    printf("Masukan banyak data :\n");
    scanf("%d", &n);
    
    student dataStd[n];
    for ( i = 0; i < n; i++)
    {
        scanf(" %199[^\n]s", pita);
        insertData(pita, &dataStd[i]);
    }
    
    printf("Data Mahasiswa :\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d. %s %s %s\n", i+1, dataStd[i].nim, dataStd[i].name, dataStd[i].grade);
    }

    return 0;
}

void startKata(char pita[]){
    idx=0;
    lenKata=0;
    while (pita[idx] == ' ')
    {
        idx++;
    }
    while ((pita[idx] != ' ') && (EOP(pita) == 0))
    {
        currentKata[lenKata] = pita[idx];
        idx++;
        lenKata++;
    }
    currentKata[lenKata] = '\0';
}

void resetKata(){
    lenKata = 0;
    currentKata[lenKata] = '\0';
}

void incKata(char pita[]){
    lenKata = 0;
    while (pita[idx] == ' ')
    {
        idx++;
    }
    while (pita[idx] != ' ' && EOP(pita) == 0)
    {
        currentKata[lenKata] = pita[idx];
        idx++;
        lenKata++;
    }
    currentKata[lenKata] = '\0';
}

char *getCKata(){
    return currentKata;
}

int getLenKata(){
    return lenKata;
}

int EOP(char pita[]){
    if (pita[idx] == '.')
    {
        return 1;
    }else
    {
        return 0;
    }
}

void insertData(char pita[], student *data){
    int countLen=0;
    startKata(pita);

    while (EOP(pita) == 0)
    {
        if (strcmp(getCKata(), "INSERT") != 0 && strcmp(getCKata(), "mahasiswa") != 0)
        {
            if (countLen == 0)
            {
                strcpy(data->nim, getCKata());
            }else if (countLen == 1)
            {
                strcpy(data->name, getCKata());
            }
            countLen++;
        }
        incKata(pita);
    }
    strcpy(data->grade, getCKata());
}