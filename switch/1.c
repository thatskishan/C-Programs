#include<stdio.h>
#define p printf

main()

{
	int a,b;
	
	p("Enter the value of a:");
	scanf("%d",&a);
	p("Enter the value of b:");
	scanf("%d",&b);
	
	(a>b)
		?p("A is big.")
		:p("b is big");
	
}
