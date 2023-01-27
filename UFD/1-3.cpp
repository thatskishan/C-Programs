#include<stdio.h>
#include<string.h>

void isTitle(char name[])
{
	int i;
	
	printf("\n\n---OUTPUT---\n\n");
	
	for(i=0; name[i] != NULL; i++)
	{
		if(i==0)
		{
			if(name[i] >='A' && name[i] <='Z')
			{
				printf("%c",name[i]);
			}
			else
			{
				printf("%c",name[i]-32);
			}
		}
		else
		{
			if(name[i] >='a' && name[i] <='z')
				{
					printf("%c",name[i]);
			}
				else
				{
					printf("%c",name[i]+32);
				}
			}
		}
}

main()
{
	char name[100];
	
	printf("Enter name here : ");
	gets(name);
	
	isTitle(name);
}
