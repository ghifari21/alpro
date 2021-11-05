//Saya Farhan Dwian 2002969 mengerjakan kuis 2 strtss20 dalam mata kuliah Algoritma dan pemograman untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

#include <stdio.h>
#include <string.h>

int main(void) {
   //menyimpan input
   int times;
   scanf("%d",&times);
   char input[times][100];
   char arrlen[times];
  int i=0,j=0,k=0;
  //menyimpan input sekaligus menyimpan panjang stringnya
  while(i<times){
    scanf("%s",input[i]);
    int len=strlen(input[i]);
    arrlen[i]=len;
    i++;
  }
  i=0;
  //mencari panjang terpendek
  int min=arrlen[0];
  while(i<times){
    if(arrlen[i]<min){
      min=arrlen[i];
    }
    i++;
  }

i=0;
j=0;
k=0;
int space=0;
//mengeluarkan output sesuai yang diperintahkan
while(i<min){
j=0;
k=0;
while(j<space){
printf(" ");
j++;
}
space+=2;

while(k<times){
if(k!=times-1)
printf("%c ",input[k][i]);
else printf("%c",input[k][i]);
k++;
}
printf("\n");
i++;
}

i=0;
j=0;
while(i<times){
if(input[i][min]!='\0'){
j=min;
while(input[i][j]!='\0')printf("%c",input[i][j++]);
printf("\n");
}
i++;
}



  
   return 0;
}