//Write a program in C to extract a substring from a given string.

#include<stdio.h>

main()
{
	char str[]="Chinmayee Shukla"; 
    char substr[10]; 
    int start_index=3; 
    int length=5; 
 
 	//strncpy for dest, src, n
    strncpy(substr, &str[start_index], length); 
    substr[length]='\0'; 
 
    printf("\n\n\t Substring: %s\n", substr); 
}
