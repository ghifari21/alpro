//Saya Farhan Dwian 2002969 mengerjakan kompetisi TP4 dalam mata kuliah Algoritma dan pemograman untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

#include <stdio.h>

int main(void){
int size;
char penentu;
scanf("%d %c",&size,&penentu);

if(penentu=='a'||penentu=='i' ||penentu=='u' ||penentu=='e' || penentu=='o'||penentu=='A'||penentu=='I'||penentu=='U'||penentu=='E'||penentu=='O' ){
for(int i=1;i<=size;i++){

  for(int k=1;k<=size;k++){
    printf(" ");
  }
  if(i==1 || i==size)
  {
    for(int j=1;j<=size*7+1;j++)
    {
      if((j>size && j<=size+size*4) || (j==size*7+1)){
        printf(" ");
      }
      else{
        printf("*");
      }

    }
  }

  else{
    for(int j=1;j<=size*7+1;j++){
      if((j>size && j<=size+size*4) || (j>size*4+size*2 && j<=size*7)){
        printf(" ");
      }
      else{
        printf("*");
      }
    }
  }
  printf("\n");

}


  int y=1,r=0;
  int tmp1=size;
  int tmp2=size*6-2;

  for(int i=1;i<=size;i++){
    for(int k=1;k<=size;k++){
      printf(" ");
    }
     for(int j=1;j<=y;j++){
       printf(" ");
     }

      if(i!=size){
        int flag=1;
        for(int k=1;k<=tmp2-r*4;k++){

          if(k>tmp1 && k<=tmp2-r*4-tmp1 ){
          if(flag%2==1){
          printf(".");
          }
          else{
          printf(",");
          }
          flag++;
        }

          else{
            printf("*");
          }
      }
    }

    else{
      for(int i=1;i<=size*2+2;i++){
        printf("*");
      }
    }

  tmp1--;
  y=y+2;
  r++;
  printf("\n");
}
}






else{
  for(int i=1;i<=size;i++){
    for(int k=1;k<=size;k++){
    printf(" ");
  }
  if(i==1 || i==size)
  {
    int flag=1;
    for(int j=1;j<=size*7+1;j++)
    {
      if(j>size && j<=size+size*4){
        if(flag%2==1){
          printf(".");
        }
        else{
          printf(",");
        }
        flag++;
      }
      else if( j==size*7+1){
        printf(" ");
      }
      else{
        printf("*");
      }

    }
  }

  else{
    int flag=1;
    for(int j=1;j<=size*7+1;j++){

      if(j>size && j<=size+size*4){
        if(flag%2==1){
          printf(".");
        }
        else{
          printf(",");
        }
        flag++;
      }
      else if(j>size*4+size*2 && j<=size*7){
        printf(" ");
      }
      else{
        printf("*");
      }
    }
  }
  printf("\n");

}


  int y=1,r=0;
  int tmp1=size;
  int tmp2=size*6-2;

  for(int i=1;i<=size;i++){
    for(int k=1;k<=size;k++){
    printf(" ");
  }
     for(int j=1;j<=y;j++){
       printf(" ");
     }

      if(i!=size){
        int flag=1;
        for(int k=1;k<=tmp2-r*4;k++){

          if(k>tmp1 && k<=tmp2-r*4-tmp1 ){
          if(flag%2==1){
          printf(".");
          }
          else{
          printf(",");
          }
          flag++;
        }

          else{
            printf("*");
          }
      }
    }

    else{
      for(int i=1;i<=size*2+2;i++){
        printf("*");
      }
    }

  tmp1--;
  y=y+2;
  r++;
  printf("\n");
}
}


for(int k=1;k<=size*8;k++){
printf("-");
}
printf("\n");
printf("  ");
for(int i=1;i<=size*8-4;i++){
printf("-");
}

printf("\n");


return 0;
}
