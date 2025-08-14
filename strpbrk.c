#include <stdio.h>

const char* pbrk(const char *ptr1, const char *ptr2){
      const char *temp1 = ptr1;
      const char *temp2 = ptr2;
      while(*temp1){
           while(*temp2){
                if(*temp1 == *temp2){
                  return temp1;
                }
                ++temp2;
           }
           ++temp1;
           temp2 = ptr2;
      }
      return NULL;
}
