#include<stdio.h>
#define p printf

main()

{
	int a,b,c;
	
	p("Enter the value of a:");
	scanf("%d",&a);
	p("Enter the value of b:");
	scanf("%d",&b);
	p("Enter the value of c:");
	scanf("%d",&c);
	(a>b)
		?(a>c)
		?p("A is big.")
		:p("C is big.")
		:(b>c)
		?p("b is big.")
		:p("C is big.");
	
}
