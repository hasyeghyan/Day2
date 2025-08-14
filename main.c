#include <stdio.h>
#include "functions.h"

int main(){
    /*char str1[] = "Hello world";
    char ch = 'l';
	const int SIZE = 100;
    char arr[SIZE][SIZE] = {};
     
    int count = delim(str1,ch,SIZE,arr);
    
    printf("Trimmed array is ");
    for(int i = 0; i < count; ++i){
       printf("%s ", arr[i]);
    }
    printf("\n");
    return 0; */
     /*  char dest[] = "Hello, zz!";
    int n = 13;
    int ch = 122; 
    
    char *ptr = memch(dest,ch,n);
    if(*ptr){
      printf("%s\n",ptr);
    }
    else
           printf("Invalid\n");
    return 0; */
    /* char source[] = "Hello, zz!";
    char destination[]= "Hello, Apple!";
    int n = 11;
    
    
    int val = memcomp(destination,source,n);
    if(val == 1){
      printf("Destination bigger\n");
    }
    else if(val == -1){
           printf("Destination smaller\n");
    }
    else
	   printf("Equal\n");
    return 0; */
    /* char source[] = "Hello, World!";
    char destination[20];

    memcopy(destination, source, 14);

    printf("Source: %s\n", source);
    printf("Destination after memcpy: %s\n", destination);

    return 0;*/
    /*  char source[] = "HelloWorld!";

    memmv(source + 1, source + 3, 3);
    printf("Destination: %s\n", source);

    return 0;*/
    /* char dest[] = "Hello, zz!";
    int n = 5;
    int ch = 'H';

    memst(dest,ch,n);
    printf("%s\n",dest );
    return 0; */
    /* char str1[] = "Hello, world!";

    if(palindrome(str1))
       printf("String is palindrome\n");
    else
       printf("String is not palindrome\n");
    return 0; */
    /* char str1[] = "Hello hello";
    const char *str2 = "lo";
    const char *str3 = "ab";

    printf("Updated array is: %s\n", str(str1,str2,str3));

    return 0; */
    /* const int size1 = 5;
    const int size2 = 6;
   
    char arr1[size1 + 1] = {};
    char arr2[size2 + 1] = {};

    printf("Please input your first array: ");
    for(int i = 0; i < size1; ++i){
       scanf(" %c", &arr1[i]);
    }
  
    printf("Please input your second array: ");
    for(int i = 0; i < size2; ++i){
       scanf(" %c", &arr2[i]);
    }
     
     
     printf("Concetenated array is: %s\n", cat(arr1,arr2));
    
    return 0; const  char *str = "Hello world";
    char ch = 0;
    printf("Input your character: ");
    scanf("%c", &ch);
    
    if(chr(str,ch)){
      printf("Fisrt ocurence is %p\n", chr(str, ch));
    }
    else 
       printf("That character isnt present in string\n");

    return 0;*/
    /*  const int size1 = 5;
    const int size2 = 6;

    char arr1[size1 + 1] = {};
    char arr2[size2 + 1] = {};

    printf("Input first string: ");
    scanf("%s", arr1);

    printf("Input second string: ");
    scanf("%s", arr2);
   
    if(!cmp(arr1,arr2)){
      printf("Strings are equal\n");
    }
    else if(cmp(arr1,arr2) == 1){
           printf("Arr2 is preceding arr1\n");
    }
    else 
	  printf("Arr1 is preceding arr2\n");

    return 0;*/
    /* char arr1[] = "Hello";
    char arr2[] = "World";
   
    printf("Before copy: %s and %s\n", arr1, arr2);
    copy(arr1, arr2);
    printf("After copy: %s and %s\n",arr1, arr2 );

   return 0;*/
    /* const  char *str1 = "hello123";
    const char *str2 = "123";

    printf("Initial count is %d\n",spn(str1,str2));

    return 0;*/
    /*  char arr[] = "Hello world";
    
    
    
    printf("Arrays length is %d\n", len(arr));

   return 0;*/
    /* const  char *str1 = "hello world";
    const char *str2 = "ai";

    if(pbrk(str1,str2)){
      printf("First appeared: %s\n", pbrk(str1,str2));
    }
    else
       printf("No character appeared\n");

    return 0;*/
    /* const  char *str = "Hello world";
    char ch = 0;
    printf("Input your character: ");
    scanf("%c", &ch);

    if(rchr(str,ch)){
      printf("Fisrt ocurence is %p\n", rchr(str, ch));
    }
    else
       printf("That character isnt present in string\n");

    return 0;*/
    /* char str1[] = "Hello world";
    
    rev(str1);
    printf("Reversed array is %s\n", str1);
    return 0;*/
    /* const  char *str1 = "hello123";
    const char *str2 = "xyz";

    printf("Initial count is %d\n",spn1(str1,str2));

    return 0;*/
    /*  const  char *str1 = "Hello world";
    const char *str2 = "ll";

    if(str(str1,str2)){
      printf("Fisrt ocurence is %p\n", str8(str1, str2));
    }
    else
       printf("That isnt substring\n");

    return 0;*/
    /*  char str1[] = "      Hello world      ";

    printf("Trimmed array is \"%s\"\n", trim(str1));
    return 0;*/

}

