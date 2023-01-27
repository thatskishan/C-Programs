#include<stdio.h>

main()

{
		int a;
		int b;
		
		printf("Please enter the value of a :");
		scanf("%d",&a);
		
		printf("Please enter the value of b :");
		scanf("%d",&b);
		
		if(a<b)
		{
			printf("A is a minimum value.");
		}
		
		else if(b<a)
		{
			printf("B is a minimum value");
		}
		
		else
		{
			printf("Both value are equal.");
		}
		
			
}
