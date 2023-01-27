#include<stdio.h>

main()
{
	char day;
	
	printf("Enter M for Monday\n");
	printf("Enter T for Tuesday\n");
	printf("Enter W for Wednesday\n");
	printf("Enter t for Thursday\n");
	printf("Enter F for Friday\n");
	printf("Enter S for Saturday\n");
	printf("Enter s for Sunday\n");
	scanf("%c",&day);
	
	switch(day)
	{
		case 'M':
		printf("Monday");
		break;
		
		case 'T':
		printf("Tuesday");
		break;
		
		case 'W':
		printf("Wednesday");
		break;
		
		case 't':
		printf("Thursday");
		break;
		
		case 'F':
		printf("Friday");
		break;
		
		case 'S':
		printf("Saturday");
		break;
		
		case 's':
		printf("Sunday");
		break;
	}
}
