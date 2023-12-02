//Write a program in C to copy one string to another string

#include<stdio.h>

main()
{
	char str1[20], str2[20];
    
	printf("\n\n\t Input the string : ");
    gets(str1);
    
	printf("\n\n\t First String  = %s", str1);
    
	strcpy(str2, str1);  // string1 copied to string2.
    
	printf("\n\n\t Second String = %s", str2);
}
