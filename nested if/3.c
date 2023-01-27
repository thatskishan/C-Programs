#include<stdio.h>
#define p printf
#define s scanf

main()

{
	int a,b,c,d,e;
	p("Enter the value of a :");
	s("%d",&a);
	p("Enter the value of b :");
	s("%d",&b);
	p("Enter the value of c :");
	s("%d",&c);
	p("Enter the value of d :");
	s("%d",&d);
	p("Enter the value of e :");
	s("%d",&e);
	
	if(a==b==c==d==e==a)
	{
		p("All are equal.");
	}
	
	else if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				{
					p("a is big.");
				}
				else
				{
					p("e is big.");
				}
			}
			else
			{
				if(c>d)
				{
					if(c>e)
					{
						p("c is big.");
					}
					else
					{
						p("E is big.");
					}
				
				}
				else
				{
					if(d>e)
					{
						p("d is big.");
					}
					else
					{
						p("e is big.");
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
						p("b is big.");
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
						p("d is big.");
					}
					else
					{
						p("e is big.");
					}
					
				}
			}
			else
			{
				if(c>d)
				{
					p("c is big.");
				}
				else
				{
					p("d is big.");
				}
			}
		}
	}
	else
	{
		if(c>e)
		{
			p("c is big.");	
		}
		else
		{
			p("e is big.");
		}
	
	}
}
