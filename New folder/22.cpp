#include<stdio.h>
#define p printf

main()
{
	int i, j;
	
	for(i=65;i<=69;i++ )
	{
		for(j=65;j<=i; j++)
		{
			p("%c",i);
		}
		p("\n");
	}
		
}
