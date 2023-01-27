#include<stdio.h>
#include<string.h>

main()
{
	int i,l=0,u=0,d=0,sp=0,ln=0,n;
	
	char pass[100];
	
	printf("\n\n---Rules for Password---\n\n");
	printf("1.Password must contain 6 characters.\n");
	printf("2.Password must contain 1 digit and 1 special character.\n");
	
	
	printf("\nPlease enter minimum 6 Character password : ");
	gets(pass);
	
	printf("\n");
	
	n = strlen(pass);
	
	for(i=0; i<n; i++)
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
		ln++;
	}
	
	printf("Total password Character = %d\n",ln);
	printf("Total UPPER Character\t = %d\n",u);
	printf("Total Lower Character\t = %d\n",l);
	printf("Total digit\t\t = %d\n",d);
	printf("Total special character\t = %d\n\n",sp);
	
	if(ln>=6 && l>=1 && u>=1 && d>=1 && sp>=1)
	{
		printf("Great!!! You have a make a very strong password. \nYour password is valid.");
	}
	
	else
	{
		printf("Your password is invalid. Please read password rules carefully and try again.");
	}
	
	
}
