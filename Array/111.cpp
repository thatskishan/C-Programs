#include<stdio.h>

main()

{
	int i,n;
	
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		printf("[%d] = [%d] \n",i+1, a[i]);
	}
}
