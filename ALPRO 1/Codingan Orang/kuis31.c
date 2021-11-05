#include <stdio.h>
#include <string.h>
int counttotal;

int check1(char *str,char *word){
  int len1=strlen(str);
  int len2=strlen(word);
  int count=0;
for(int i=0;i<=len1-len2;i++){
  int flag=1;
  if(str[i]==word[0]){
    for(int j=0,k=i;j<len2 && flag;j++,k++){
      if(str[k]!=word[j])flag=0;      
    }
  }
  else flag=0;

  if(flag)count++;
}

return count;
}



int main(void) {
  counttotal=0;
  int size1;
scanf("%d",&size1);
char input1[size1][100];
for(int i=0;i<size1;i++)scanf("%s",input1[i]);

int size2;
scanf("%d",&size2);
char input2[size2][100];
for(int i=0;i<size2;i++)scanf("%s",input2[i]);

char word[100];
scanf("%s",word);


for(int i=0;i<size1;i++){
counttotal+=check1(input1[i],word);
}

for(int i=0;i<size2;i++){
counttotal+=check1(input2[i],word);
}

printf("%d\n",counttotal);
   return 0;
}