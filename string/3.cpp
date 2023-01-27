#include<stdio.h>
#include<string.h>

int main()
{
	char name[200];
	int i,length;
	
	printf("Enter your name here : ");
	scanf("%s", &name);
	
	length = strlen(name);
	
	for(i=0; i<length; i++)
	{
		if(name[i]>='a' && name[i]<='z')
		{
			printf("%c",name[i]);
		}
		else
		{
			printf("%c",name[i]+32);
		}
	}
}
