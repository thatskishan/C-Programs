#include<stdio.h>
main()

{
	int i,n;
	
	printf("Enter the number of Array size : \n");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a [%d]  ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\n\n-----OUTPUT-----\n\n");
	
	for(i=0; i<n; i++)
	{
		printf("Array [%d] : %d\n",i+1, a[i]);
	}
}
