#include<stdio.h>

main()
{
	int i,j,s;
	
	for(i=65; i<=69; i++)
	{
		for(s=1 ; s<=69-i ; s++)
		{
			printf(" ");
		}
		for(j=i; j>=65; j--)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
