//Write a program in C to count the total number of vowels or consonants in a string.

#include<stdio.h>

main()
{
	char s[200];  
    int i,vowels=0,consonants=0;
 
    printf("\n\n\t Input String or Paragraph  : ");
    gets(s);
     
    for(i=0;s[i];i++)  
    {
    	if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122))
    	{
		
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
		      vowels++;
            else
             consonants++;
        }
 
 	}
 	
    printf("\n\n\t Vowels = %d",vowels);
    printf("\n\n\t consonants = %d",consonants);
}

