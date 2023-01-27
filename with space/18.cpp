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
		for(j=i; j>=1; j--)
		{
			if(i % 2 == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
		
		}
		printf("\n");
	}
}
