//Write a program in C to compare two strings without using string library functions.

#include<stdio.h>

main()
{
	char string1[10], string2[10];
	int i,temp=0;

	printf("\n\n\t Input String1 : ");
	gets(string1);

	printf("\n\n\t Input String2 : ");
	gets(string2);

	for(i=0;string1[i]!='\0';i++)
	{
		if(string1[i]==string2[i])
			temp=1;
		else
			temp=0;

	}

	if(temp==1)
		printf("\n\n\t Strings are equal...");
	else
		printf("\n\n\t Strings are not equal....");
}
