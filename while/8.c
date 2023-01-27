#include<stdio.h>
main()
{
	int sum = 0,n,i;
	printf("Enter the number");
	scanf("%d",&n);
	
	i = 1;
	
	while(i <=n)
	{
		sum +=i;
		i++;
	}
	printf("Sum of %d = %d",n,sum);
	
}
