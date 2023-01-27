#include<stdio.h>

main()
{
	int i=1,n;
	
	printf("Enter the number");
	scanf("%d",&n);
	
	for(i; i<=10; i++)
	{
		printf("%d %d %d\n",n,i,n*i);
	}
	
}
