#include<stdio.h>
#include<string.h>

main()
{
	int i; 
	char name[100];
	
	printf("Enter your name here : ");
	gets(name);
	
	for(i=0; name[i]!=NULL; i++)
	{
		if(name[i]!=32)
		{
			printf("%c",name[i]);
		}
	}
}
