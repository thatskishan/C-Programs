#include<stdio.h>
main()
{
	int number;
	
	printf("Enter any number of your choice : ");
	scanf("%d",&number);
	
	int *ptr;
	
	ptr = &number;
	
	printf("\n\n---OUTPUT---\n\n");
	
	printf("Squre of %d number\t=\t%d",number,*ptr**ptr);
	
}
