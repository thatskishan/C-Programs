#include<stdio.h>

struct distance{
	float inch;
	float feet;
	float ans;
}d1,d2,d3;

main()
{
	
	printf("Enter the value for distance 1");
	
	printf("Enter INCH : ");
	scanf("%f",&d1.inch);
	
	printf("Enter FEET : ");
	scanf("%f",&d1.feet);
	
	printf("Enter the value for distance 2");
	
	printf("Enter INCH : ");
	scanf("%f",&d2.inch);
	
	printf("Enter FEET : ");
	scanf("%f",&d2.feet);
	
	d3.inch = d1.inch + d2.inch;
	d3.feet = d1.feet + d2.feet;
	
	if(d3.inch>12)
	{
		d3.feet++;
		d3.ans = (d3.feet + (d3.inch/10)-1.2);
	}
	else
	{
		d3.ans = d3.feet+(d3.inch/10);
	}
	
	printf("%.2f + %.2f = %.2f",d3.inch,d3.feet,d3.ans);
	
	
	
}
