#include<stdio.h>
main()
{
	char name[100] = "ViRaNi32KiShan";
	
	for(int i=0; i<12; i++)
	{
		if(name[i]>='a' && name[i]<='z')
		{
			printf("%c",name[i]);
		}
		else
		{
			printf("%c",name[i]+32);
		}
	}
}
