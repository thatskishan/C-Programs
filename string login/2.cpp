#include<stdio.h>
#include<string.h>

main()
{
	
	char email[200];
	char pass[200];
	char email1[200];
	char pass1[200];
	
	printf("Enter your email id here : ");
	gets(email);
	
	printf("Enter password here : ");
	gets(pass);
	
	printf("\n\n");
	
	printf("---LOGIN---\n");
	
	printf("\nEnter your email id here : ");
	gets(email1);
	
	printf("Enter password here : ");
	gets(pass1);
	
	printf("\n\n");
	
	printf("---LOGIN STATUS---\n");
	
	if(strcmp(email,email1)==0)
	{
		if(strcmp(pass,pass1)==0)
		{
			printf("\nLogin Sucessfully!!!");
		}
		else
		{
			printf("password incorrect!!!");
		}
	}
	
	else
	{
		printf("Email incorrect!!!");
	}
}
