//Write a program in C to count the total number of alphabets, digits and special characters in a string.

#include<stdio.h>
main()
{
	char s[200]; 
    int i,chars=0,digs=0,spchars=0;
 
    printf("\n\n\t Input string : ");
    gets(s);
     
    for(i=0;s[i];i++)  
    {
        if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122) )  //by its ascii value
           	chars++;
        
		else if(s[i]>=48 && s[i]<=57)
         	digs++;
        
		else
         	spchars++;
 
 	}
 	  
    printf("\n\n\t Total alphabets are  = %d",chars);
    printf("\n\n\t Total Digits = %d",digs);
    printf("\n\n\t Special characters = %d",spchars);
}
