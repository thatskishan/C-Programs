#include<stdio.h>
#define p printf
#define s scanf
main()

{
	int a,b,c,d;
	p("Enter the value of a :");
	s("%d",&a);
	p("Enter the value of b :");
	s("%d",&b);
	p("Enter the value of c :");
	s("%d",&c);
	p("Enter the value of d :");
	s("%d",&d);
	
	if(a==b==c==d==a)
	{
		p("All Are Eaual.");
	}
	
	else if(a>b && a>c && a>d)
	{
		p("A is big.");
	}
	
	else if(b>c && b>d)
	{
		p("B is big.");
	}
	
	else if(c>d)
	{
		p("C is big.");
	}
	
	else
	{
		p("D is big.");
	}
}
