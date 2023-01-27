#include<stdio.h>

int Palindrome(int Rev,int n)
{
	printf("\n------------------- Output -----------------\n\n");
	if(n==Rev)
	{
		printf("Number Is Palindrome...!!!");
	}
	else
	{
		printf("Number Not Palindrome...!!!");
	}
}

int Rev(int n)
{
	int Rem = 0 , Rev ;
	
	while(n!=0)
	{
		Rem = n % 10 ;
		Rev = Rev * 10 + Rem ;
		n = n / 10 ;
	}
	return Rev;
}

int main()
{
	int n , Rv , Pali ;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	Rv = Rev(n);
	Pali = Palindrome(Rv,n);
}
