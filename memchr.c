#include <stdio.h>

void*  memch(const void *dest, int ch, int n) {

    const unsigned char *d = (const unsigned char *)dest;
    unsigned char s = (unsigned char)ch;

    for (int i = 0; i < n; i++) {
        if(d[i] == s){
	  return (void*) (d + i);
	}
    }
    return NULL;
}
