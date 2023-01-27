#include<stdio.h>

main()
{
	int r,c,i,j;
	
	printf("Enter the number of row : ");
	scanf("%d",&r);
	
	printf("Enter the number of column : ");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter the value of a[%d][%d] = ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nOutput\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
}
