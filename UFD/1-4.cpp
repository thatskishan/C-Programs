#include<stdio.h>
#include<string.h>

void isCamel(char Fname[],char Lname[])
{
	int i;
	
	printf("\n\n---OUTPUT---\n\n");
	
	for(i=0; Fname[i] != NULL; i++)
	{
		if(i==0)
		{
			if(Fname[i] >='A' && Fname[i] <='Z')
			{
				printf("%c",Fname[i]);
			}
			else
			{
				printf("%c",Fname[i]-32);
			}
		}
		else
		{
			if(Fname[i] >='a' && Fname[i] <='z')
				{
					printf("%c",Fname[i]);
			}
				else
				{
					printf("%c",Fname[i]+32);
				}
			}
		}
		
		
		
		for(i=0; Lname[i] != NULL; i++)
		{
		if(i==0)
		{
			if(Lname[i] >='A' && Lname[i] <='Z')
			{
				printf("%c",Lname[i]);
			}
			else
			{
				printf("%c",Lname[i]-32);
			}
		}
		else
		{
			if(Lname[i] >='a' && Lname[i] <='z')
				{
					printf("%c",Lname[i]);
			}
				else
				{
					printf("%c",Lname[i]+32);
				}
			}
		}
}

main()
{
	char Fname[100];
	char Lname[100];
	
	printf("Enter First name here : ");
	gets(Fname);
	printf("Enter Last name here : ");
	gets(Lname);
	
	isCamel(Fname,Lname);
}
