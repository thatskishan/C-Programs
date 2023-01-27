#include<stdio.h>
#define p printf

main()
{
	int i,s, j;
	
	for(i=1;i<=5;i++ )
	{
		for(j=i;j>=1; j--)
		{
			p("%d",j);
		}
		p("\n");
	}
	for(i=4;i>=1;i-- )
	{
		for(j=i;j>=1; j--)
		{
			p("%d",j);
		}
		p("\n");
	}
		
}
