#include<stdio.h>
#define p printf


main()
{
	int choice,qty,bill;
	tmp:
	p("Enter 1 for pizza\n");
	p("enter 2 for burger\n");
	scanf("%d",&choice);
	
	
	switch(choice)
	{
		case 1:
			p("You have choose pizza\n");
			p("enter 1 for 7 cheesy\n");
			p("Enter 2 for Garden special\n");
			scanf("%d",&choice);
			p("Enter the quantity");
			scanf("%d",&qty);
			switch(choice)
			{
				case 1:
					p("You have choose 7 cheesy\n");
					bill += qty * 100
					p("Enter 1 for more order");
					p("Enter 2 for the bill");
					
					switch(choice)
					{
						case 1:
							goto tmp;
							break;
						case 2:
							p("Your bill is only : %d ",bill);
							break;
					}
			}
	}
}
