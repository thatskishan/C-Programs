#include<stdio.h>
#define P printf
#define S scanf

main()
{
	int a,b,c;
	P("Enter the value of a :");
	S("%d",&a);
	P("Enter the value of b :");
	S("%d",&b);
	P("Enter the value of c :");
	S("%d",&c);
	if(a==b==c==a)
	{
		P("All are equal.");
	}
	else if(a==b)
	{
		if(a>c)
		{
			P("A and B are big.");
		}
		else
		{
			P("C is big.");
		}
	}
	else if(b==c)
	{
		if(b>a)
		{
			P("B and C is big.");
		}
		else
		{
			P("A is Big.");
		}
	}
	else if(c==a)
	{
		if(a>b)
		{
			P("C and A are big.");
		}
		else
		{
			P("B is big.");
		}
	}
	else if(a>b)
	{
			if(a>c)
			{
				P("A is big.");
			}	
			else 
			{
				P("C is big");
			}
	}
else
{
	if(b>c)
	{	
		P("B is big.");
	}
	else
	{
		P("C is big.");
	}
	}
}
