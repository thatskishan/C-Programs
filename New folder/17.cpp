#include<stdio.h>
#define p printf

main()
{
	int i,s, j;
	
	for(i=1; i<=5; i++)
	{
		for(s=1; s<=5-i; s++)
		{
			p(" ");
		}
		for(j=1; j<=i; j++)
		{
			p("%d",j);
		}
		p("\n");
	}
	for(i=2; i<=5; i++)
	{
		for(s=1; s<=i-1; s++)
		{
			p(" ");
		}
		for(j=i; j<=5; j++)
		{
			p("%d",j);
		}
		p("\n");
	}
	
		
}
