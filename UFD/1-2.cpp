#include<stdio.h>

void numIsrev(int n)
{
	int temp,rev=0,reminder;
	
	temp=n;
	
	while(n!=0)
	{
		reminder = n%10;
		rev = rev * 10 + reminder;
		n= n/10;
	}
	
	printf("\n\n---OUTPUT---\n\n");
	
	printf("%d reverse is %d",temp,rev);
}

main()
{
	int i,n;
	
	printf("Enter number Here : ");
	scanf("%d",&n);
	numIsrev(n);
	
}
