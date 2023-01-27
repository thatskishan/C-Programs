#include<stdio.h>

int isFact(int n)
{
	int ans;
	if(n<=1)
	{
		return 1;
	}
	else
	{
		ans = n*isFact(n-1);
		return ans;
	}
	
	
}

int main()
{
	int n,ans;
	printf("Enter the any number : ");
	scanf("%d",&n);
	
	ans=isFact(n);
	
	printf("\n---OUTPUT---\n\n");
	printf("Factorial of %d = %d",n,ans);
}
