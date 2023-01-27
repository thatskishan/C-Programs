#include<stdio.h>
#include<string.h>

main()
{
	char name[100];
	int i,j,n,count=0;
	
	printf("Enter your name here : ");
	gets(name);
	
	n=strlen(name);
	
	for(i=0; i<n; i++)
	{
		count=1;
		if(name[i])
		{
			for(j=i+1; j<n; j++)
			{
				if(name[i] == name[j])
				{
					count++;
					name[j] = NULL;
				}
			}
			printf(" '%c' = %d \n",name[i],count);
		}
		
	}
	
}
