#include<stdio.h>
main()
{
	int sum = 0,n,i;
	printf("Enter the number");
	scanf("%d",&n);
	
	i = 1;
	do
	{
		
		sum +=i;
		i++;
	}
	
	while(i <=n);
	printf("Sum of %d = %d",n,sum);
	
}
