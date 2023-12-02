//Write a program in C to separate individual characters from a string.

#include<stdio.h>
#include<string.h>

main()
{
	char string[]="Chinmayee";
	int i;  
          
    for(i=0; i<strlen(string);i++)
	{
        printf("%c ", string[i]);  
    }  
}
