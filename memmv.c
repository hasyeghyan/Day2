#include <stdio.h>

void* memmv(void *dest, const void *src, int n) {

    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    if(d ==s || n == 0){
      return dest;
    }
    
    if(d > s){
      for(int i = n; i > 0; --i){
         d[i - 1] = s[i - 1]; 
      }
    }
    else {
        for(int i = 0; i < n; ++i){
	   d[i] = s[i];
	}
    }
    return dest;
}

