#include<stdio.h>
main()
{
	int i,n;
	
	printf("Enter the number of a array : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		if(a[i]<0)
		printf("%d  ",a[i]);
		
		else
		printf("  ");
		
	}
}
