#include <stdio.h>
#include <string.h>

int n1, n2; //banyak string
char word1[100][100]; //array of string 1
char word2[100][100]; //array of string 2
char subword[100]; //sub kata
char temp[100];

void input(); //prosedur input
void processing();
int checking(); //fungsi pengecekan
void output(); //prosedur output

int main(){
   input(); //memanggil input
   processing();
   output(); //memanggil output
   return 0;
}

void input(){ //prosedur input
   int i; //iterator
   scanf("%d", &n1); //banyak string 1
   for ( i = 0; i < n1; i++) //looping untuk input string 1
   {
      scanf("%s", &word1[i]); //input string
   }
   scanf("%d", &n2); //banyak string 2
   for ( i = 0; i < n2; i++) //looping untuk input string 2
   {
      scanf("%s", &word2[i]); //input string
   }
   scanf("%s", &subword); //input subkata
}

void processing(){

}

int checking(){ //fungsi pengecekan
    int i, j, k, idx = 0;
    int count1 = 0, count2 = 0;
    int true = 1;
    for ( i = 0; i < n1; i++)
    {
        for ( j = 0; j < strlen(word1[i]); j++)
        {
            if (word1[i][j] == subword[0])
            {
                true = 1;
                for ( k = 0; k < strlen(subword); k++, idx++)
                {
                    temp[k] = word1[i][idx]; 
                }
            }
            else
            {
                true = 0;
            }

        }
    }
    idx = 0;
    for ( i = 0; i < n2; i++)
    {
        for ( j = 0; j < strlen(word2[i]); j++)
        {
            if (word2[i][j] == subword[0])
            {
                for ( k = 0; k < strlen(subword); k++, idx++)
                {
                    temp[k] = word2[i][idx]; 
                }
            }
            if (strcmp(subword, temp) == 0)
            {
                count2++;
            }
        }
    }
    if (count1 > count2)
    {
        return count1;
    }else
    {
        return count2;
    }
}

void output(){ //prosedur output
   printf("%d\n", checking()); //outpur banyak kata yang sama
}
