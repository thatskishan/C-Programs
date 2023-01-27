#include<stdio.h>

main()
{
	int i,j,s;
	
	for(i=69; i>=65; i--)
	{
		for(s=1 ; s<=69-i ; s++)
		{
			printf(" ");
		}
		for(j=65; j<=i; j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
