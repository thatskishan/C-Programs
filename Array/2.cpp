#include <stdio.h>
main()
{
	int Numbers [] =  {10,20,30,40,50};
	
	int length = sizeof(Numbers) / sizeof(Numbers[0]);
	printf("Length of array = %d",length);
}
