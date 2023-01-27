#include<stdio.h>

main()
{
	int i,n,j;
	
	printf("Enter the value of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("\t[%d] : ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\n\t Output \n\n");
	
	for(i=0; i<n; i++)
	{
		for(j=1; j<n; j++)
		{
			if(a[i] > a[j])
			{
				a[i] = a[i] + a[j];
				a[i] = a[i] - a[j];
				a[i] = a[i] - a[j];
			}
		}
	}
	
	for(i=0; i<n; i++)
	{
		if(i==n-1)
		{
			printf("%d};",a[i]);
		}
		
		else
		{
			printf("%d",a[i]);
		}
	}
}
