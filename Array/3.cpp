#include<stdio.h>

main()
{
	int i,n,subject[n],sum=0;
	
	printf("Enter the number of subject : ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter the marks  of %d = ",i+1);
		scanf("%d",&subject[i]);
	}
	
				printf("\n\n-----OUTPUT-----\n\n");
	
	
		for(i=0; i<n; i++)
		{
			sum = sum + subject[i];
			
		}	
		printf(" The average of marks = %d", sum/n);

}
