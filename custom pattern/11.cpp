#include<stdio.h>
main()
{
	int i;
	for(i=1; i<=7; i++)
	{
		if(i==1 || i==4)
		{
			printf("* * * * *");
		}
		else
		{
			printf("*");
		}
		printf("\n");
	}
}
