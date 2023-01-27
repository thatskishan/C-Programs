#include<stdio.h>

main()
{
	char i, j;
	
	printf("Enter the value of i and j between 0 to 9\n");
	scanf("%c\n %c",&i,&j);

	
	int a,b;
	
	a = i-48;
	b = j-48;
	
	printf("Sum is : %d",a+b);
	
	
}
