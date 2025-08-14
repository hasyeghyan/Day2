#include <stdio.h>

int  cmp(const char *ptr1, const char *ptr2){
     while(*ptr1 && *ptr2){
          if(*ptr1 < *ptr2)
            return -1;
	  else if(*ptr1 > *ptr2)
	    return 1;
	  ++ptr1;
	  ++ptr2;
     }
     if(*ptr1 == 0 && *ptr2 == 0){
       return 0;
     }
     else if(*ptr1 == 0){
            return -1;
     }
     else
	   return 1;
}
