#include<stdio.h>

main()
{
	float s,h,d,t;
	printf("Enter your salary\n");
	scanf("%f",&s);
	printf("Your gross salary is %.2f ",(s*10/100)+(s*5/100)+(s*8/100)+s);
}
