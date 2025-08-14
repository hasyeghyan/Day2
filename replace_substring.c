#include <stdio.h>

char* str(char *ptr1, const char *ptr2, const char* ptr3){
      char *temp1 = ptr1;
      while(*temp1){
           if(*temp1 == *ptr2){
             const char* temp = temp1;
             const char* temp2 = ptr2;
             while(*temp2 && *temp == *temp2){
                  ++temp;
                  ++temp2;
             }
             if(!(*temp2)){
	       const char * p = ptr3;
               while(temp1 < temp){
	            *temp1 = *p;
		    ++temp1;
		    ++p;
	       }

             }

           }
          ++temp1;
      }
      return ptr1;
}
