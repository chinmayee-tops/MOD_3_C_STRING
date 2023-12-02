//Write a program in C to remove characters from a string except alphabets.

#include<stdio.h>

main()
{
	char c[150];
    int i, j;
    printf("\n\n\t Input a string : ");
    gets(c);
 
    for(i=0,j=0;c[i]!='\0';++i)
    {
         if((c[i]>=65 && c[i]<=90)||(c[i]>=97 && c[i]<=122))
         {
         	c[j++]=c[i];
		 }
	      
    }
    c[j]='\0';
    
    printf("\n\n\t String after removal  : %s",c);
}
