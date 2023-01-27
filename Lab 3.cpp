#include<stdio.h>

#define pi 3.14
#define p  printf

main()
{
	float r=10, l=12, h=10, w=5, b=10, P=100, R=4,N=2;

	
	p("Area of circle = %.2f\n",pi * r * r);
	p("Area of sqare = %.2f\n",l * l);
	p("Area of rectangle = %.2f\n",h * w);
	p("Area of Triangle = %.2f\n",0.5 * h * b);
	p("Simple interest = %.2f\n",(P*R*N)/100);
	p("Perimeter of circle = %.2f\n",2 * pi * r);
	




}
