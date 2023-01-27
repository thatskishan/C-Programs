#include<stdio.h>
main()
{
	int a,b;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	int *ptrA;
	ptrA = &a;
	
	int *ptrB;
	ptrB = &b;
	
	*ptrA = *ptrA + *ptrB;
	*ptrB = *ptrA - *ptrB;
	*ptrA = *ptrA - *ptrB;
	
	printf("\n\n---OUTPUT---\n\n");
	
	printf("a = %d\nb = %d",*ptrA,*ptrB);
}
