#include <stdio.h>

char* trim(char *ptr){
         char *temp = ptr;
	 char *ret = ptr; 
	 while(*ptr == ' '){
	       ++ptr;
	  }
	  char *temp1 = ptr;
	  while(*ptr){
	       ++ptr;
	  }
	  --ptr;
	  while(*ptr == ' '){
	       --ptr;
	  }
	  char *temp2 = ptr + 1;
	  
	      while(temp1 < temp2){
	           *temp = *temp1;
		   ++temp1;
		   ++temp;
	      }
	  
	  *temp = '\0';
	  return ret; 

}
