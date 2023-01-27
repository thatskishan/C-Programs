#include<stdio.h>
void swap(int *a,int*b)
{
	int c;
	
     c = *a;
	*a = *b;
	*b = c;
}
main()
{
	int a,b;
	
	printf("Enter value of a: ");
	scanf("%d",&a);
	
	printf("Enter value of b: ");
	scanf("%d",&b);
	
	swap(&a,&b);
	
	printf("\n\n---OUTPUT---\n\n");
	printf("a = %d\nb = %d",a,b);
	
}
