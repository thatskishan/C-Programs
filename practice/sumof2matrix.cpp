#include<stdio.h>
main()
{
	int i,j,r,c;
	
	printf("Enter the row and column\n");
	scanf("%d %d",&r,&c);
	
	int a[r][c];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d] = ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	int b[r][c];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d] = ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	
	int sum[i][j];
	
	for (i = 0; i < r; ++i)
  	{
  		for (j = 0; j < c; ++j)
		{
      		sum[i][j] = a[i][j] + b[i][j];
    	}
	}
	
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d  ",sum[i][j]);
			
			if(j==c-1)
			{
				printf("\n\n");
			}
		}
	}
	
}
