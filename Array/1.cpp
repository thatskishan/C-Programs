#include<stdio.h>
main()
{
	int i,n;
	
	printf("Enter the value of array ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a [%d] = ",i);
		scanf("%d",&a[i]);
	}
	
				printf("\n\n-----OUTPUT-----\n\n");
	
	
		for(i=0; i<n; i++)
		{
			printf("Array [%d] : %d\n",i, a[i]);
		}	
}
