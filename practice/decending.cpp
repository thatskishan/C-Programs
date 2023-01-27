#include<stdio.h>
main()
{
	int i,n,j;
	
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]<a[j])
			{
				a[i] = a[i] + a[j];
				a[j] = a[i] - a[j];
				a[i] = a[i] - a[j];
			}
		}
	}
	
	printf("\n\n OUTPUT \n\n");
	
	for(i=0; i<n; i++)
	{
		printf("a[%d]  =  %d \n", i, a[i]);
	}
	
}
