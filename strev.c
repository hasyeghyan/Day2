#include <stdio.h>

void rev(char *ptr){
        int count = 0;
	char* temp = ptr;
	while(*temp){
	     ++count;
	     ++temp;
	}
	for(int i = 0; i <= count / 2; ++i){
	   int temp1 = ptr[i];
	   ptr[i] = ptr[count - i -1];
	   ptr[count -i - 1] = temp1;
	}	
}
