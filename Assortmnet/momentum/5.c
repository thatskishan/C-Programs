#include<stdio.h>

main()
{
	int unit,bill,add,charge;
	
	printf("Enter the value of unit");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		bill = unit*0.50;
		charge = bill * 0.2;
		add = bill + charge;
		printf("Your electricity bill is %d ",add);
	}
	
	else if(unit<=51 && unit<=100)
	{
		bill = unit*0.75;
		charge = bill * 0.2;
		add = bill + charge;
		printf("Your electricity bill is %d ",add);
	}
	
	else if(unit<=101 && unit<=250)
	{
		bill = unit*1.20;
		charge = bill * 0.2;
		add = bill + charge;
		printf("Your electricity bill is %d ", add);
	}
	
	else
	{
		bill = unit*1.50;
		charge = bill * 0.2;
		add = bill + charge;
		printf("Your electricity bill is %d ", add);
	}
}
