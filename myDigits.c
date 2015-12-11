#include <stdio.h>
#include <stdlib.h>

int main(){
  int num, i, val = 0;
  
  printf("Enter digit: ");
  scanf("%d", &num);
  
  while(num > 0){
      if(num > 10){
	val += (num%10);
	num = num/10;
      }
      
      else{
	val += num;
	num = num/10;
      }
  }
  printf("SUM: %d\n", val);
  return 0;
}