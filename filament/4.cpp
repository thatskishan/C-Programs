#include<stdio.h>
#include<string.h>

main()
{
	char name[100];
	int i,j,k,n;
	
	printf("Enter any name here : ");
	gets(name);
	n=strlen(name);
	
	printf("\n\n ---OUTPUT---\n\n");
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; name[j]!=NULL; j++)
		{
			if(name[j]==name[i])
			{
				for(k=j; name[k]!=NULL; k++)
				{name[k] = name[k+1];
				}
			}
		}
	}
	printf("The name without repeated character = %s",name);
}
