#include<stdio.h>

void isDivide(int n)
{
	if(n%3==0 && n%5==0)
	{
		printf("\t---OUTPUT---\n\n\n");
		printf("\%d is divided by 3 and 5 both!",n);
	}
	else
	{
		printf("\t---OUTPUT---\n\n\n");
		printf("\%d is not divided by 3 and 5 both!",n);
	}
	
}

main()
{
	int a;
	printf("Enter value here : \n\n");
	scanf("%d",&a);
	
	isDivide(a);
	
}
