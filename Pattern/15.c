#include<stdio.h>
#define p printf

main()
{
	int i, j;
	
	for(i=5;i>=1;i-- )
	{
		for(j=i;j<=5; j++)
		{
			if(j%2==0)
			{
				p("0",j);
			}
			else
			{
				p("1",j);
			}
			
		}
		p("\n");
	}
		
}
