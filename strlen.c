#include <stdio.h>

int len(const char *ptr){
    int count = 0;
    while(*ptr){
         ++count;
	 ++ptr;
    }
    return count;
}

