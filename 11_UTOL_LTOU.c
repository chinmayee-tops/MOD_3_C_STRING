//Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.

#include<stdio.h>

main()
{
	char s[100];
	int i;
	printf("\n\n\t Input a string : ");
	gets(s);

	for(i=0;s[i]!='\0';i++)
 	{
      if(s[i]>='a' && s[i]<='z') 
	  {
         s[i]=s[i]-32;
      }
      
      else
      //if(s[i]>='A' && s[i]<='Z') 
	  {
         s[i]=s[i]+32;
      }
   }
   
   printf("\n\n\t String in Upper Case = %s", s);
   
}

