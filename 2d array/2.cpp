#include<stdio.h>

main()
{
	int r,c,i,j,length= 0;
	
	printf("Enter the number of row : ");
	scanf("%d",&r);
	
	printf("Enter the number of column : ");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			length++;
		}
	}
	
	printf("\nOutput\n");
	printf("\nLength is : %d", length);
}
