//Write a program in C to count the total number of words in a string.

#include<stdio.h>

main()
{
	char mystr[100];
    int count=0,i;
 
    printf("\n\n\t Input the string : ");
    gets(mystr);
    
    for(i=0;mystr[i]!='\0';i++)
    {
        if (mystr[i]==' ' && mystr[i+1]!=' ')
            count++;    
    }
    printf("\n\n\t Number of words are : %d", count + 1);
}
