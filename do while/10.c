#include<stdio.h>

main()
{
	int i=1,n;
	
	printf("Enter the number");
	scanf("%d",&n);
	do
	{
		printf("%d %d %d\n",n,i ,n*i);
		i++;
	}
	while(i<=10);
	
}
