#include <stdio.h>
#include <string.h>

int main(){
    int i, n, k, j;
    char sub[100];
    char sentence[100];
    int term;

    scanf("%s", &sub);
    scanf("%s", &sentence);

    i=0;
    while (i < strlen(sentence))
    {
        term=0;
        if (sentence[i] == sub[0])
        {
            term = 1;
            j=0;
            int index1=0, index2=i;
            while (j < strlen(sub) && term == 1)
            {
                if (sentence[index2] != sub[index1])
                {
                    term=0;
                }
                j++;
                index1++;
                index2++;
            }
        }
        
    }
    
    
}