//Write a program in C to print individual characters of a string in reverse order

#include<stdio.h>
#include<string.h>

main()
{
	char string[]="Chinmayee";
	int i;  
          
    for(i=strlen(string); i>=0; i--)
	{
        printf("%c ", string[i]);  
    }  
}
