#include<stdio.h>
main()
{
	int i;
	for(i=1; i<=6; i++)
	{
		if(i==1 ||i==2 ||i==3 ||i==4)
		{
			printf("  *       *  ");
		}
		else if(i==5)
		{
			printf("   *    *");
		}
		else
		{
			printf("     *");
		}
		printf("\n");
	}
}
