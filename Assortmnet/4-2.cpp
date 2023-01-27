#include<stdio.h>
main()
{
	int i,n,pos,val,arr;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter position: ");
	scanf("%d", &pos);
	
	for(i=pos; i<=n; i++)
	{
		a[i] = a[i+1];
	}
	n--;
	
	for(i=0; i<n; i++)
	{
		if(i>=pos)
		{
			printf("a[%d] = %d\n",i+1,a[i]);
		}
		else
		{
			printf("a[%d] = %d\n",i,a[i]);
		}
	}
}
