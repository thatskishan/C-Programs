#include<stdio.h>

main()
{
	long long int n,i = 1;
	
	printf("Enter number here:");
	scanf("%d",&n);
	do
	{
		printf("%lld\n",n);
		n--;
	}
	while(n>=i);
	
}
