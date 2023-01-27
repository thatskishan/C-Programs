#include<stdio.h>
#define p printf

main()
{
	int i, j;
	
	for(i=5;i>=1;i-- )
	{
		for(j=5;j>=i; j--)
		{
			if(j%2==0)
			{
				p("1",j);
			}
			else
			{
				p("0",j);
			}
			
		}
		p("\n");
	}
		
}
