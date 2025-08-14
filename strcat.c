#include <stdio.h>

char* cat(char *ptr1, const char *ptr2){
     char *temp = ptr1;
     while(*ptr1){
         ++ptr1;
     }

     while(*ptr2){
         *(ptr1++) = *(ptr2++);
     }
     return temp;
}
