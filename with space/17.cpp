#include<stdio.h>

main()
{
	int i,j,s;
	
	for(i=1; i<=5; i++)
	{
		for(s=1 ; s<=5-i ; s++)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			if(j%2==0)
			{
				printf("0",j);	
			}
			else
			{
				printf("1",j);
			}
		}
		printf("\n");
	}
}
