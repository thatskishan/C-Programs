#include<stdio.h>
main()
{
	int i ;
	for(i=1;i<=7;i++)
	{
	if(i==1 || i==7)
	{
		printf("  * * *");
	}
	else if (i==2 || i==5 ||i==6)
	{
		printf("*       *");
	}
	else if (i==3)
	{
		printf("* ");
	}
	else if (i==4)
	{
		printf("*   * * * ");
	}
	else
	{
		printf("*      *");
	}
	printf("\n");
	}
}
