#include<stdio.h>

main()
{
	long long int n,i = 1;
	
	printf("Enter number here:");
	scanf("%d",&n);
	
	while(n>=i)
	{
		if(n%2==0)
		printf("%lld\n",n);
		n--;
	}
}
