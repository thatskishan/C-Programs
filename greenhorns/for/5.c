#include<stdio.h>
main()
{
	int i,n;
	
	printf("Enter the value:");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            printf("%d\t", i);
        }
    }

	
}
