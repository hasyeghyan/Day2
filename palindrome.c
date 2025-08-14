#include <stdio.h>
#include "functions.h"



int palindrome(char *ptr){
        int count = 0;
	char * p = ptr;
	while(*p){
	     if(*p >= 'A' && *p <= 'Z')
	        (*p) += 32;
	        ++p;
	}
        char* temp = ptr;
        while(*temp){
             ++count;
             ++temp;
        }
	char arr1[count + 1];
	char arr2[count + 1];
	int i = 0;
	int j = 0;
        while(i != count){	
     	     if(ptr[i] >= 'a' && ptr[i] <= 'z'){
	        arr1[j++] = ptr[i++];
	     }
	     else
		 ++i;
	}
	arr1[j] = '\0';

        i = count - 1;
	j = 0;
	while(i != -1){
             if(ptr[i] >= 'a' && ptr[i] <= 'z'){
                arr2[j++] = ptr[i--];
             }
             else
                 --i;
        }

	arr2[j] = '\0';

        if(cmp(arr1,arr2)){
	  return 0;
	}
	return 1;

}
