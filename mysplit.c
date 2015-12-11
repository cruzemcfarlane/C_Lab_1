#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
  char name[50], first[25] = {""}, last[25] = {""}, *pch;
  int i, j, k, l, split;
  
  printf("What is your name? ");
  scanf("%s",name);
  
  for(i=1; i<strlen(name); i++){
    if(isupper(name[i])){
      split = i;
      break;
    }
  }
  
  for(l=0; l<split; l++){
    first[l] = name[l];
  }
  
  for(k=split, j=0; k<=strlen(name); k++, j++){
    last[j] = name[k];
  }
  
  printf("%s %s\n", first, last);
  return 0;
}