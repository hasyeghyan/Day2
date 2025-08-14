#include <stdio.h>

const char* rchr(const char *ptr1, char ch){
      const char *temp = NULL; 
      while(*ptr1){
          if(*ptr1 == ch)
            temp = ptr1;
            ++ptr1;
     }
       return temp;
     
}
