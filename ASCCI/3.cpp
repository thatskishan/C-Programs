#include<stdio.h>

main()
{
	char a;
	
	printf("enter the value of lowercase character : ");
	scanf("%c",&a);
	
	char I = a-32;
	
	printf("%c in uppercase is %c",a,I);
}
