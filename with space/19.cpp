#include<stdio.h>

main()
{
	int i,j,s;
	
	for(i=5; i>=1; i--)
	{
		for(s=1 ; s<=5-i ; s++)
		{
			printf(" ");
		}
		for(j=i; j>=1; j--)
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
