#include<stdio.h>

int sumArray(int a[],int n)
{
	int i,sum=0;
	
	for(i=0; i<n; i++)
	{
		sum+= a[i];
	}
	
	return sum;
}

int main()
{
	int n,ans;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n],i;
	
	for(i=0; i<n; i++)
	{
		printf("Enter a[%d] =  ",i);
		scanf("%d",&a[i]);
	}
	
	ans = sumArray(a,n);
	printf("\n---OUTPUT---\n\n");
	printf("The sum of array = %d",ans);
	
}
