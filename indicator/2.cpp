#include<stdio.h>
main()
{
	int n;
	
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	
	int a[n],i;
	int *ptr[n];
	
	for (i=0;i<n;i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d", &a[i]);
	}
	
	for (i=0;i<n;i++)
	{
		ptr[i] = &a[i];
	}
	
	printf("\n\n---OUTPUT---\n\n");
	
	for (i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,*ptr[i]);
	}
	
}
