#include<stdio.h>
main()
{
	char c;
	
	printf("Enter the value of character =");
	scanf("%c",&c);
	
	if(c>='a'&& c<='z'|| c>='A'&& c<='Z')
	{
	
	printf("It's an alphabet");
	
	}
	
	else if(c>=0 || c<=9)
	{
		printf("it's a digit");
	}
	
	else
	{
		printf("It a special character");
	}
}
