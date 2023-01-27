#include<stdio.h>
main()
{
	int i,n;
	
	printf("Enter the number");
	scanf("%d",&n);
	
	for(i=1; i<=n; n--)
	{	if(i%2==0)
		{
			printf("%d\t",n);
		}
		
	}
}
