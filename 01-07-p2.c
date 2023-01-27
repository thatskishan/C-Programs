#include<stdio.h>
main()

{
		int a;
		
		printf("Please enter the value of a :");
		scanf("%d",&a);
		
		if(a==0)
		{
			printf("You entered a Neutral number!!!");
		}
		
		else if(a>0)
		{
			printf("You entered a Positive number!!!");
		}
		
		else
		{
			printf("You entered a negetive number!!!");
		}
		
}
