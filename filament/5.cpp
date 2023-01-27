#include<stdio.h>
#include<string.h>

main()
{
	int i,n,count=0;
	
	printf("How many name do you want?\n");
	scanf("%d",&n);
	
	char name[n][100];
	
	for(i=0; i<n; i++)
	{
		fflush(stdin);
		printf("Enter Name[%d] : ",i);
		gets(name[i]);
	}
	
	printf("\n---OUTPUT---\n");
	
	for(i=0; i<n; i++)
	{
		printf("%s\t = \t%d\n",name[i],strlen(name[i]));
		count = count + strlen(name[i]);
	}
	printf("\n Total Number of character is: %d",count);
}
