#include<stdio.h>

main()
{
	int r,c,a,b,i,jsum=0;
	
	printf("How many row you want? ");
	scanf("%d",&r);
	printf("How many column you want? ");
	scanf("%d",&c);
	
	printf("\nEnter value of 1st Array:\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d] = ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("b[%d][%d] = ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	
	printf("\nSum of two Array: \n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d   ", sum[i][j]);
		}
	}
	
}
