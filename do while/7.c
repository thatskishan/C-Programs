#include<stdio.h>
main()
{
	int i = 2000;
	do
	{
		if(i%4==0)
		printf("Leap year = %d\t",i);
		i++;
	}
	while(i<=3000);
	
}
