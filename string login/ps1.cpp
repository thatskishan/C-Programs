#include<stdio.h>
#include<string.h>

main()
{
	int n,i=0,l=0,u=0,d=0,sp=0,ln=0;
	char pass[200] = "Kishan@78";
	
	
	
	for(i=0; i<9; i++)
	{
		if(pass[i] >= 'a' && pass[i] <= 'z')
		{
			l++;
		}
		else if(pass[i] >= 'A' && pass[i] <= 'Z')
		{
			u++;
		}
		else if(pass[i] >= '0' && pass[i] <= '9')
		{
			d++;
		}
		else
		{
			sp++;
		}
		printf("%c",pass);
	}
}
