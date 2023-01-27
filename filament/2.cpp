#include<stdio.h>
#include<string.h>

main()
{
	char name[100];
	char name1[100];
	
	printf("Enter your name here : ");
	gets(name);
	
	strcpy(name1,name);
	
	strrev(name);
	
	if(strcmp(name,name1)==0)
	{
		printf("it's a palindrome name");
	}
	
	else
	{
		printf("it's not a palindrome name");
	}
}
