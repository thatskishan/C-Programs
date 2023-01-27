#include<stdio.h>
#define p printf

main()
{
	int i;
	
	for(i=1; i<=4; i++)
	{
		if(i==1)
		{    
			p("         *     ");
		}
		else if(i==2)
		{
			p("       *   *");
		}
		else if(i==3)
		{
			p("   *         * ");
		}
		else 
		{  
			p("*               * ");
		}
		p("\n");
	}
	
	
}
