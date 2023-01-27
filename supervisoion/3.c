#include<stdio.h>

main()
{
	FILE *fp,*fp2,*fp3;
	int a,i,c=0;
	
	fp=fopen("Even.txt","a");
	fp2=fopen("Odd.txt","a");
	fp3=fopen("Prime.txt","a");
	
	printf("Enter Value of A=");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		fprintf(fp,"%d is Even",a);
	}
	else if(a%2==1)
	{
		fprintf(fp2,"%d is Odd",a);
	}
	else if(a>0)
	{
		for(i=0;i<a;i++)
		{
			if(a%1==0)
			{
				c++;
			}
		}
		if(c==2)
		{
			fprintf(fp3,"%d is Prime",a);
		}
	}
	
	fclose(fp);
	fclose(fp2);
	fclose(fp3);
}
