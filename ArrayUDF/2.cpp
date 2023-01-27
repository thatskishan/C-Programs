#include<stdio.h>
void torev(int *n)
{
	int temp,rev=0,rem;
	
	temp=*n;
	
	while(*n!=0)
	{
		rem = *n % 10;
		rev = rev * 10 + rem;
		*n = *n /10;
	}
	
	printf("---Your output---\n");
	printf("Reverese number is  = %d",rev);
	
}
main()
{
	int n;
	printf("Enter any number here : ");
	scanf("%d",&n);
	
	torev(&n);

}
