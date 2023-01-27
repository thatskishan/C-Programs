#include <stdio.h>

main()
{
	float a,b,c,d;
	
	printf("Enter the marks of Maths ",a);
	scanf("%f",&a);
	
	printf("Enter the marks of Chemistry ",b);
	scanf("%f,&b");
	
	printf("Enter the marks of Physics ",c);
	scanf("%f",&c);
	
	printf("Enter the marks of English ",d);
	scanf("%f",&d);
	
	printf("The total marks is %f\n",a+b+c+d);
	printf("The percentage is %.2f\n",a+b+c+d/4);	
	
}
