#include<stdio.h>

void isDivide(int n)
{
	if(n%2==0 && n%4==0)
	{
		printf("\t---%c%c%cOUTPUT---%c%c%c\n\n\n",2,2,2,2,2,2);
		printf("\%d is divided by 2 and 4 both!",n);
	}
	else
	{
		printf("%c%c%c\t---OUTPUT%c%c%c---\n\n\n",2,2,2,2,2,2);
		printf("\%d is not divided by 2 and 4 both!",n);
	}
	
}

main()
{
	int a;
	printf("Enter value here : \n\n");
	scanf("%d",&a);
	
	isDivide(a);
	
}
