#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]){
	int i, f, s, a, num, count = -1;
	double q;
	
	//check if each element entered is a digit
	for(i=1; i<argc; i++){
	      num = atoi(argv[i]);
	      
	      if(num == 0){
		printf("Error: only digits permitted\n");
		return 0;
	      }
	}
	
	
	if( argc == 3){
	  printf("The arguments supplied are: %s %s\n", argv[1], argv[2]);
	  
	  f = atoi(argv[1]);
	  s = atoi(argv[2]);
	    
	  q = ((double)f)/s; //cast variable to get decimal places
	  
	  if(f < s){
	    printf("Error quotient: 1st # should be larger\n");
	    return 0;
	  }
	  
	  else{
	    printf("The quotient is: %.2lf\n", q);
	  }
	  
	  printf("The list of arguments are:\n"); 
	  for(i=0; i<argc; i++){
	      printf("argv[%d] = %s\n", i, argv[i]);
	  }
	  
	  printf("The # of arguments entered at the command line are: %d\n", argc-1);
	}
	
	else if(argc > 3){
	  printf("Error: Invalid, too many entries\n");
	}
	
	else if(argc < 3){
	  printf("Error: Invalid, too little entries\n");
	}
	
	return 0;
}
