#include<stdio.h>
#define p printf

main()

{
	int a,b,c,d;
	
	p("Enter the value of a:");
	scanf("%d",&a);
	p("Enter the value of b:");
	scanf("%d",&b);
	p("Enter the value of c:");
	scanf("%d",&c);
	p("Enter the value of d:");
	scanf("%d",&d);
	
	
	(a>b)
		?(a>c)
			?(a>d)
				?p("A is big.")
				:p("D is big.")
			:(c>d)
				?p("c is big.")
				:p("d is big.")
		:(b>c)
			?(b>d)
				?p("B is big.")
				:p("D is big.")
			:(c>d)
				?p("c is big.")
				:p("d is big.");
	
}
