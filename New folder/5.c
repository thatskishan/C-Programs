#include<stdio.h>
#define p printf

main()
{
	int i, j;
	
	for(i=1;i<=5;i++ )
	{
		for(j=5;j>=i; j--)
		{
			p("%d",j);
		}
		p("\n");
	}
		
}
