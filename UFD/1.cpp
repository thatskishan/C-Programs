#include<stdio.h>

void isCube(int n)
{
	int cube;
	cube = n*n*n;
	
	printf("\t---OUTPUT---\n\n\n");
	printf("\%d cube value is %d",n,cube);
}

main()
{
	int a;
	printf("Enter value here : \n\n");
	scanf("%d",&a);
	
	isCube(a);
	
}
