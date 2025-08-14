#include <stdio.h>

int  delim(char *ptr, char ch, int SIZE,char arr[][SIZE]){
    char *temp = ptr;
    int i = 0;

    while (*temp) {
        int j = 0;
        while (*temp == ch) 
	      temp++;
        if (*temp == '\0') 
	    break;
        while (*temp && *temp != ch) {
            arr[i][j++] = *temp;
            temp++;
        }
        arr[i][j] = '\0';
        ++i;
    }
    return i;
}
