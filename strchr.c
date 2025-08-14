#include <stdio.h>

const char* chr(const char *ptr1, char ch){
     while(*ptr1){
          if(*ptr1 == ch)
	    return ptr1;
	    ++ptr1;
     }
     return NULL;
}
