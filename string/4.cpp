#include<stdio.h>
#include<string.h>

int main()
{
	char name[200];
	int i,length;
	
	printf("Enter your name here : ");
	scanf("%s", &name);
	
	length = strlen(name);
	
	for(int i=0; i<6; i++)
	{
		if(name[i]>='a' && name[i]<='z')
		{
			printf("%c",name[i]-32);
		}
		else
		{
			printf("%c",name[i]);
		}
	}
}
