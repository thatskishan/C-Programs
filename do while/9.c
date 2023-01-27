#include<stdio.h>
main()
{
	int factorial = 1,n,i;
	printf("Enter the number");
	scanf("%d",&n);
	
	i = 1;
	do
	{
		factorial *=i;
		i++;
		
	}
	while(i <=n);
	
	printf("factorial of %d = %d",n,factorial);
	
	
}
