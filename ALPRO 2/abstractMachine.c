#include <stdio.h>

int idx;
char cc;

void start(char pita[]);
void inc(char pita[]);
int eop();
void adv(char pita[]);
char getCC();

int main(){
    char pita[50];
    printf("masukan kalimat:\n");
    scanf("%49[^\n]s", &pita);

    start(pita);
    printf("%c", getCC());

    while (eop() == 0)
    {
        inc(pita);
        printf("%c", getCC());
    }
    printf("\n");

    return 0;
}

void start(char pita[]){
    idx = 0;
    cc = pita[idx];
}

void inc(char pita[]){
    idx++;
    cc = pita[idx];
}

int eop(){
    if (cc == '.')
    {
        return 1;
    }else
    {
        return 0;
    }
}

void adv(char pita[]){
    idx++;
    cc = pita[idx];

    while (cc == ' ' && eop() == 0)
    {
        idx++;
        cc = pita[idx];
    }
}

char getCC(){
    return cc;
}