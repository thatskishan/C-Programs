#include<stdio.h>
main()
{
	int fact = 1,n,i;
	printf("Enter the number");
	scanf("%d",&n);
	
	i = 1;
	for (i = 1; i <= n; ++i) {
            fact *= i;
        }	
	printf("factorial of %d = %d",n,fact);
	
	
}
