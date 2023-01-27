#include<stdio.h>

void areaOfCircle(int n)
{
	printf("Area of circle is %.2f \n",3.14*n*n);
}

void areaOfrec(int l)
{
	printf("Area of rectangle is %d \n",l*l);
}
main()
{
	int r,l;
	printf("Enter redius of circle : ");
	scanf("%d",&r);
	
	printf("Enter length of rectengle : ");
	scanf("%d",&l);

	areaOfCircle(r);
	areaOfrec(l);
}
