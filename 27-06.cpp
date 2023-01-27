#include<stdio.h>

main()
{
	int a;
	int b;
	int c;
	printf("Enter the value of a ");
	scanf("%d",&a);
	printf("Enter the value of b ");
	scanf("%d",&b);
	printf("Enter the value of c ");
	scanf("%d",&c);
	
	printf("a+b^2 = %d\n",(a*a)+(2*a*b)+(b*b));
	printf("a-b^2 = %d\n",(a*a)-(2*a*b)+(b*b));
	printf("a+b^3 = %d\n",(a*a*a)+(3*a*a*b)+(3*a*b*b)+(b*b*b));
	printf("a-b^3 = %d\n",(a*a*a)-(3*a*a*b)+(3*a*b*b)-(b*b*b));
	printf("a+b+c^3 = %d\n",(a*a*a)+(b*b*b)+(c*c*c)+(3*a*a*b)+(3*a*a*c)+(3*a*b*b)+(3*b*b*c)+(3*c*c*a)+(3*c*c*b)+(6*a*b*c));
	printf("a-b-c^3 = %d\n",(a*a*a)-(b*b*b)-(c*c*c)-(3*a*a*b)-(3*a*a*c)+(3*a*b*b)-(3*b*b*c)+(3*c*c*a)-(3*c*c*b)+(6*a*b*c));
	printf("a+b+c^2 %d\n",(a*a)+(b*b)+(c*c)+(2*a*b)+(2*b*c)+(2*c*a));
	
}
