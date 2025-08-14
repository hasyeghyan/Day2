#include <stdio.h>

const char* str8(const char *ptr1, const char *ptr2){
      if(!(*ptr2)){
        return ptr1;
      }
      const char *temp1 = ptr1;
      while(*temp1){
           if(*temp1 == *ptr2){
	     const char* temp = temp1;
	     const char* temp2 = ptr2;
	     while(*temp2 && *temp == *temp2){
	          ++temp;
		  ++temp2;
	     }
	     if(!(*temp2)){
	       return temp1;
	     }
	   }
          ++temp1;
      }
      return NULL;
}
