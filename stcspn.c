#include <stdio.h>

int spn(const char *ptr1, const char *ptr2){
      int count = 0;
      const char *temp1 = ptr1;
      const char *temp2 = ptr2;
      while(*temp1){
           while(*temp2){
                if(*temp1 == *temp2){
                  return count;
                }
                ++temp2;
           }
	   ++count;
           ++temp1;
	   temp2 = ptr2;
      }
      return count;
}

