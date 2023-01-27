#include<stdio.h>

main()
{
	int a;
	
	printf("Enter Your marks here :");
	scanf("%d",&a);
	
	if(a>=90)
	{
		printf("Congratulations you've got A1 Grade !!!");
	}
	else if(a>=80 && a<90)
	{
		printf("Great you've got A2 Grade !!!");
	}
	else if(a>=70 && a<80)
	{
		printf("You've got B1 Grade !!!");
	}
	else if(a>=60 && a<70)
	{
		printf("You've got B2 Grade !!!");
	}
	else if(a>=50 && a<60)
	{
		printf("You've got C1 Grade !!!");
	}
	else if(a>=35 && a<50)
	{
		printf("You've got C2 Grade !!!");
	}
	else 
	{
		printf("Better Luck Next Time !!!");
	}
}
