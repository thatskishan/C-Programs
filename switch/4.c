#include<stdio.h>
#define p printf

main()

{
	int a,b,c,d,e;
	
	p("Enter the value of a:");
	scanf("%d",&a);
	p("Enter the value of b:");
	scanf("%d",&b);
	p("Enter the value of c:");
	scanf("%d",&c);
	p("Enter the value of d:");
	scanf("%d",&d);
	p("Enter the value of e:");
	scanf("%d",&e);
	
	
	(a>b)
		?(a>c)
			?(a>d)
				?(a>e)
					?p("A is big.")
					:p("D is big.")
				:(d>e)
					?p("D is big.")
				    :p("E is big.")
			:(c>d)
				?(c>e)
					?p("c is big.")
				    :p("e is big.")
				:(d>e)
					?p("D is big.")
				    :p("E is big.")
		:(b>c)
			?(b>d)
				?(b>e)
					?p("B is big.")
				    :p("E is big.")
				:(d>e)
					?p("D is big.")
				    :p("E is big.")
			:(c>d)
				?(c>e)
					?p("C is big.")
				    :p("E is big.")
				:(d>e)
					?p("D is big.")
				    :p("E is big.");
	
}
