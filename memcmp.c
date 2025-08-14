#include <stdio.h>

int  memcomp(const void *dest, const void *src, int n) {

    const unsigned char *d = (const unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;
   
    for (int i = 0; i < n; i++) {
        if(d[i] < s[i]){
	  return -1;
	}
	else if(d[i] > s[i]){
	       return 1;
	}
    }
    return 0;
}

