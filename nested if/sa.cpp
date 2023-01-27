#include<stdio.h>
#define p printf
main()
{
	int a,b,c,d,e;
	p("Enter the value of a :");
	scanf("%d",&a);
	p("Enter the value of b :");
	scanf("%d",&b);
	p("Enter the value of c :");
	scanf("%d",&c);
	p("Enter the value of d :");
	scanf("%d",&d);
	p("Enter the value of e :");
	scanf("%d",&e);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				{
					p("A is big.");
				}
				else
				{
					p("E is big.");
				}
			}
			else
			{
				if(c>d)
				{
					if(c>e)
					{
						p("C is big.");
					}
					else
					{
						p("e is big.");
					}
				}
				else
				{
					if(d>e)
					{
						p("D is big.");
					}
					else
					{
						p("E is big.");
					}
				}
			}
		}
		else
		{
			if(b>c)
			{
				if(b>d)
				{
					if(b>e)
					{
						p("B is big.");
					}
					else
					{
						p("e is big.");
					}
				}
				else
				{
					
					p("D is big.");
				}
			}
			else
			{
				p("C is big.");
			}
		}
	}
	else
	{
		p("B is big.");
	}
	
}
