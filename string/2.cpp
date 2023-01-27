#include<stdio.h>
main()
{
	char name[100] = "kisHan";
	
	for(int i=0; i<6; i++)
	{
		if(name[i]>='a' && name[i]<='z')
		{
			printf("%c",name[i]-32);
		}
		else
		{
			printf("%c",name[i]);
		}
	}
}
