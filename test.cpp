#include<stdio.h>

main()
{
	int r,c,sum = 0;
	
	printf("Enter the number of row and column");
	scanf("%d %d",&r,&c);
	
	int a[r][c];
	
	for(int i= 0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			printf("a[%d][%d] = ",i+1,j+1);
			scanf("%d"&a[i][j]);
		}
	}
	
	for(int i= 0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			if(i==0 || i==r-1 || j==0; j==c-1)
			{
				printf("%d" ,a[i][j]);
			}
			else
			{
				printf("      ");
			}
			
		}
	}
	
	
	for(int i= 0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			if(i==0 || i==r-1 || j==0; j==c-1)
			{
				sum = sum + a[i][j];
			}
			
		}
	}
	 printf("\nSum of all the boundry elements of Array  %d\n",sum);

}
