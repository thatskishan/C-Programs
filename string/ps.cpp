#include<stdio.h>
main()
{
	char name[100] = "KiShAN1ViRaNI";
	
	for(int i=0; i<6; i++)
	{
		if(name[i]>='a' && name[i]<='z')
		{
			printf("%c",name[i]);
		}
		else if(name[i]==1)
		{
			printf("%c",32);
		}
		else
		{
			printf("%c",name[i]+32);
		}
	}
}
