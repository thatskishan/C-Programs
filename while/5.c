#include<stdio.h>

main()
{
	long long int n,i = 1;
	
	printf("Enter number here:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(i%2==1)
		printf("%lld\n",i);
		i++;
	}
}
