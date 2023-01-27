#include<stdio.h>

void numIspalindrome(int n)
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
	
	if(temp == rev)
	{
		printf("Number is palindrome!!!");
	}
	else
	{
		printf("Number is not a palindrome!!!");
	}
}

main()
{
	int i,n;
	
	printf("Enter number Here : ");
	scanf("%d",&n);
	numIspalindrome(n);
	
}
