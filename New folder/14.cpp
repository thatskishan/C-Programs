#include<stdio.h>
#define p printf

main()
{
	int i,s, j;
	
	for(i=5;i>=1;i-- )
	{
		for(s=1; s<=i-1; s++)
		{
			p(" ");
		}
		for(j=i;j<=5; j++)
		{
			p("%d",j);
		}
		p("\n");
	}
		
}
