#include<stdio.h>

main()
{
	long long int n,i = 1;
	
	printf("Enter number here:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("%lld\n",i);
		i++;
	}
}
