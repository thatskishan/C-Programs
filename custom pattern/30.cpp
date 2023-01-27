#include<stdio.h>
main()
{
	int i;
	for(i=1; i<=6; i++)
	{
		if(i==4 ||i==5 ||i==6 ||i==7)
		{
			printf("       *     ");
		}
		else if(i==1)
		{
			printf("*            *");
		}
		else if(i==2)
		{
			printf("  *        *");
		}
		else if(i==3)
		{
			printf("     *   * ");
		}
		else
		{
			printf("      *");
		}
		printf("\n");
	}
} 
