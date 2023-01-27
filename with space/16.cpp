#include<stdio.h>

main()
{
	int i,j,s;
	
	for(i=65; i<=69; i++)
	{
		for(s=1 ; s<=i-65 ; s++)
		{
			printf(" ");
		}
		for(j=i; j<=69; j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
