#include <stdio.h>

int main(void) {
  //make array
  char input[100],sentence[100],wordChoice[100];
  int i=0,j=0,k=0;
  scanf("%s",input);
  //store complete string
  while(input[i]!='|'){
    sentence[j++]=input[i++];
  }
  int lenSentence=i;
  i++;

  //store substring
  while(input[i]!='\0')
    wordChoice[k++]=input[i++];
  int lenWordChoice=i-lenSentence-1;

  //delete selected word from the main string
  j=0;
  int i1=0,i0=j;
  int resCountWordChoice=0;
  while(j<lenSentence  ){
    
    int flag1=0;
    
    if(sentence[j]==wordChoice[0]){
        flag1=1;
        
        i1=0,i0=j; 
      while(i1<lenWordChoice && flag1!=0){
        if(sentence[i0]!=wordChoice[i1]){
          flag1=0;
        }
       i0++;
       i1++; 
      }
        
    }

    if(flag1){
      
      resCountWordChoice++;
      int startChange=0,endChange=lenWordChoice,indexStartChange=j,indexEndeChange=lenSentence-1;
      while(startChange<endChange){
        
        while(indexStartChange<indexEndeChange){
        sentence[indexStartChange]=sentence[indexStartChange+1];
        indexStartChange++;
        
      }
      startChange++;
      indexStartChange=j;
    }
  j--;  
  }
  j++;
  }


  int newLenSentence=lenSentence-lenWordChoice*resCountWordChoice;
  

//print as instructed
  if(newLenSentence==0){
    printf("=== Kalimat Hilang ===\n");
  }

//---------------------------
if(sentence[j]==wordChoice[0]){
        flag1=1;
        
        i1=0,i0=j; 
      while(i1<lenWordChoice && flag1!=0){
        if(sentence[i0]!=wordChoice[i1]){
          flag1=0;
        }
       i0++;
       i1++; 
      }

//----------------
if(flag1){
      
      resCountWordChoice++;
      int startChange=0,endChange=lenWordChoice,indexStartChange=j,indexEndeChange=lenSentence-1;
      while(startChange<endChange){
        
        while(indexStartChange<indexEndeChange){
        sentence[indexStartChange]=sentence[indexStartChange+1];
        indexStartChange++;
        
      }
      startChange++;
      indexStartChange=j;
    }
