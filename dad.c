#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int i,j,t;
  char name[50];
  
  printf("What is your name? ");
  scanf("%s", name);

  t=0;
  for (i=0; i<strlen(name); i++)
    for (j='a'; j<=name[i]; j++)
      t++;

  printf("%d\n",t);
}