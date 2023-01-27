#include<stdio.h>
main()
{
	int factorial = 1,n,i;
	printf("Enter the number");
	scanf("%d",&n);
	
	i = 1;
	
	while(i <=n)
	{
		factorial *=i;
		i++;
	}
	printf("factorial of %d = %d",n,factorial);
	
}
