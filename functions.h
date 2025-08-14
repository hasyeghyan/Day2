#ifndef FUNCTIONS_H
#define FUNCTIONS_H

int  delim(char *ptr, char ch, int SIZE,char arr[][SIZE]);
void*  memch(const void *dest, int ch, int n);
int  memcomp(const void *dest, const void *src, int n);
void* memcopy(void *dest, const void *src, int n);
void* memmv(void *dest, const void *src, int n);
void* memst(void *dest, int ch, int n);
int palindrome(char *ptr);
char* str(char *ptr1, const char *ptr2, const char* ptr3);
char* cat(char *ptr1, const char *ptr2);
const char* chr(const char *ptr1, char ch);
int  cmp(const char *ptr1, const char *ptr2);
char* copy(char *ptr1, const char *ptr2);
int spn(const char *ptr1, const char *ptr2);
int len(const char *ptr);
const char* pbrk(const char *ptr1, const char *ptr2);
const char* rchr(const char *ptr1, char ch);
void rev(char *ptr);
int spn1(const char *ptr1, const char *ptr2);
const char* str8(const char *ptr1, const char *ptr2);
char* trim(char *ptr);

#endif
