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
	
	printf("Enter value: ");
	scanf("%d",&val);
	
	n++;
	for(i=n-1; i>=pos; i--)
	{
		a[i] = a[i-1];
	}
	
	a[pos-1] = val;
	
	
	printf("\n\t OUTPUT \t\n\n");
	
	
	for(i=0; i<n; i++)
	{
		printf("[%d] = [%d]\n",i+1,a[i]);
	}
}
