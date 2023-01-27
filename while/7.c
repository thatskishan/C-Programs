#include<stdio.h>
main()
{
	int i = 2000;
	
	while(i<=3000)
	{
		if(i%4==0)
		printf("Leap year = %d\n",i);
		i++;
	}
}
