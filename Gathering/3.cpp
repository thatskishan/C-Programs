#include<stdio.h>
#include<string.h>

int Strlen(char name[])
{
	int len;
	
	len = strlen(name);
	return len;
}

int main()
{

	char name[100];
	int len;
	
	printf("Enter your name here : ");
	gets(name);
	
	len = Strlen(name);
	
	printf("\n---OUTPUT---\n\n");
	printf("%s String length is = %d",name,len);
}
