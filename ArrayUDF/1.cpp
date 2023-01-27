#include<stdio.h>
void toFact(int *n)
{
	int i,factorial=1;
	for(i=1;i<=*n;i++)
	{
		factorial = factorial * i;
	}
	
	printf("Factorial of your number = %d  ",factorial);
	
}
main()
{
	int n;
	printf("Enter any number here : ");
	scanf("%d",&n);
	
	toFact(&n);

}
