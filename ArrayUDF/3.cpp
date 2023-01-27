#include<stdio.h>
#include<string.h>
void toToggle(char *a)
{
	if(*a>='A' && *a<='Z')
		{
			*a += 32;
		}
	else
		{
			*a -=  32;
		}
}

main()
{
	int i;
	char name[100];
	
	printf("Enter your name here : ");
	scanf("%s",&name);
	for (i=0; name[i]!=NULL;i++)
	{
		toToggle(&name[i]);
	}
	printf("\n\n---Your output---\n\n");
	printf("Your name in toggle case is %s",name);
}
