#include<stdio.h>
#define p printf
main()
{
	
	int choice,qty,bill;
	tmp:
	p("Welcome to The Apna Cinema!!!\n");
	p("Enter 1 For BolloyWood Movie.\n");
	p("Enter 2 For South Movie.\n");
	p("Enter 3 For Gujrati Movie.\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			p("Great There is 3 Bollywood Movie Show!!!\n");
			p("Enter 1 for PruthviRaj Chauhan.\n");
			p("Enter 2 for Major.\n");
			p("Enter 3 for Jug Jug Jeeyo.\n");
			scanf("%d",&choice);
			
			
			switch(choice)
			{
				case 1:
				p("You have selected Pruthviraj chauhan movie.");
				p("Please Select Ticket Class Below\n");
				p("Enter 1 for Silver class.\t Ticket : 80 Rs.\n");
				p("Enter 2 for Gold class.\t\t Ticket : 180 Rs.\n");
				p("Enter 3 for Platinum class.\t Ticket : 280 Rs.\n");
				scanf("%d",&choice);
				p("How many Ticket's you Want?\n");
				scanf("%d",&qty);
				
				switch(choice)
				{
					case 1:
						p("You have selected silver class\n");
						bill +=80*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					case 2:
						p("You have selected gold class\n");
						bill +=80*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					case 3:
						p("You have selected platinum class\n");
						bill +=280*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					
				
			}
			break;
		}
		switch(choice)
			{
				case 2:
				p("You have Selected Major Movie.");
				p("Please Select Ticket Class Below\n");
				p("Enter 1 for Silver class.\t Ticket : 80 Rs.\n");
				p("Enter 2 for Gold class.\t\t Ticket : 180 Rs.\n");
				p("Enter 3 for Platinum class.\t Ticket : 280 Rs.\n");
				scanf("%d",&choice);
				p("How many Ticket's you Want?\n");
				scanf("%d",&qty);
				
				switch(choice)
				{
					case 1:
						p("You have selected silver class\n");
						bill +=80*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					case 2:
						p("You have selected gold class\n");
						bill +=80*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					case 3:
						p("You have selected platinum class\n");
						bill +=280*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					
				
			}
			break;
		}
		switch(choice)
			{
				case 3:
				p("You have selected Jug Jug Jeeyo movie.");
				p("Please Select Ticket Class Below\n");
				p("Enter 1 for Silver class.\t Ticket : 80 Rs.\n");
				p("Enter 2 for Gold class.\t\t Ticket : 180 Rs.\n");
				p("Enter 3 for Platinum class.\t Ticket : 280 Rs.\n");
				scanf("%d",&choice);
				p("How many Ticket's you Want?\n");
				scanf("%d",&qty);
				
				switch(choice)
				{
					case 1:
						p("You have selected silver class\n");
						bill +=80*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					case 2:
						p("You have selected gold class\n");
						bill +=80*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					case 3:
						p("You have selected platinum class\n");
						bill +=280*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					
				
			}
			break;
		}
	
	}
	switch(choice)
	{
		case 2:
			p("Great There is 3 South Movie Show!!!\n");
			p("Enter 1 for KGF-2.\n");
			p("Enter 2 for Radhe Shyam.\n");
			p("Enter 3 for RRR.\n");
			scanf("%d",&choice);
			
			
			switch(choice)
			{
				case 1:
				p("You have selected KGF-2 movie.");
				p("Please Select Ticket Class Below\n");
				p("Enter 1 for Silver class.\t Ticket : 80 Rs.\n");
				p("Enter 2 for Gold class.\t\t Ticket : 180 Rs.\n");
				p("Enter 3 for Platinum class.\t Ticket : 280 Rs.\n");
				scanf("%d",&choice);
				p("How many Ticket's you Want?\n");
				scanf("%d",&qty);
				
				switch(choice)
				{
					case 1:
						p("You have selected silver class\n");
						bill +=80*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					case 2:
						p("You have selected gold class\n");
						bill +=80*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					case 3:
						p("You have selected platinum class\n");
						bill +=280*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					
				
			}
			break;
		}
		switch(choice)
			{
				case 2:
				p("You have Selected Radhe Shyam Movie.");
				p("Please Select Ticket Class Below\n");
				p("Enter 1 for Silver class.\t Ticket : 80 Rs.\n");
				p("Enter 2 for Gold class.\t\t Ticket : 180 Rs.\n");
				p("Enter 3 for Platinum class.\t Ticket : 280 Rs.\n");
				scanf("%d",&choice);
				p("How many Ticket's you Want?\n");
				scanf("%d",&qty);
				
				switch(choice)
				{
					case 1:
						p("You have selected silver class\n");
						bill +=80*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					case 2:
						p("You have selected gold class\n");
						bill +=80*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					case 3:
						p("You have selected platinum class\n");
						bill +=280*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					
				
			}
			break;
		}
		switch(choice)
			{
				case 3:
				p("You have selected KGF-2 movie.");
				p("Please Select Ticket Class Below\n");
				p("Enter 1 for Silver class.\t Ticket : 80 Rs.\n");
				p("Enter 2 for Gold class.\t\t Ticket : 180 Rs.\n");
				p("Enter 3 for Platinum class.\t Ticket : 280 Rs.\n");
				scanf("%d",&choice);
				p("How many Ticket's you Want?\n");
				scanf("%d",&qty);
				
				switch(choice)
				{
					case 1:
						p("You have selected silver class\n");
						bill +=80*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					case 2:
						p("You have selected gold class\n");
						bill +=80*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					case 3:
						p("You have selected platinum class\n");
						bill +=280*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					
				
			}
			break;
		}
	
	}
	switch(choice)
	{
		case 3:
			p("Great There is 3 Gujrati Movie Show!!!\n");
			p("Enter 1 for NadiDosh Chauhan.\n");
			p("Enter 2 for Kehvatlal Parivar.\n");
			p("Enter 3 for Chal Jivi Laiye.\n");
			scanf("%d",&choice);
			
			
			switch(choice)
			{
				case 1:
				p("You have selected NadiDosh movie.");
				p("Please Select Ticket Class Below\n");
				p("Enter 1 for Silver class.\t Ticket : 80 Rs.\n");
				p("Enter 2 for Gold class.\t\t Ticket : 180 Rs.\n");
				p("Enter 3 for Platinum class.\t Ticket : 280 Rs.\n");
				scanf("%d",&choice);
				p("How many Ticket's you Want?\n");
				scanf("%d",&qty);
				
				switch(choice)
				{
					case 1:
						p("You have selected silver class\n");
						bill +=80*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					case 2:
						p("You have selected gold class\n");
						bill +=80*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					case 3:
						p("You have selected platinum class\n");
						bill +=280*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					
				
			}
			break;
		}
		switch(choice)
			{
				case 2:
				p("You have Selected Kehvatlal Parivar Movie.");
				p("Please Select Ticket Class Below\n");
				p("Enter 1 for Silver class.\t Ticket : 80 Rs.\n");
				p("Enter 2 for Gold class.\t\t Ticket : 180 Rs.\n");
				p("Enter 3 for Platinum class.\t Ticket : 280 Rs.\n");
				scanf("%d",&choice);
				p("How many Ticket's you Want?\n");
				scanf("%d",&qty);
				
				switch(choice)
				{
					case 1:
						p("You have selected silver class\n");
						bill +=80*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					case 2:
						p("You have selected gold class\n");
						bill +=80*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					case 3:
						p("You have selected platinum class\n");
						bill +=280*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					
				
			}
			break;
		}
		switch(choice)
			{
				case 3:
				p("You have selected CHal Jeevi Laiye movie.");
				p("Please Select Ticket Class Below\n");
				p("Enter 1 for Silver class.\t Ticket : 80 Rs.\n");
				p("Enter 2 for Gold class.\t\t Ticket : 180 Rs.\n");
				p("Enter 3 for Platinum class.\t Ticket : 280 Rs.\n");
				scanf("%d",&choice);
				p("How many Ticket's you Want?\n");
				scanf("%d",&qty);
				
				switch(choice)
				{
					case 1:
						p("You have selected silver class\n");
						bill +=80*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					case 2:
						p("You have selected gold class\n");
						bill +=80*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					case 3:
						p("You have selected platinum class\n");
						bill +=280*qty;
						p("Your Total Bill is : %d Rs Only." ,bill);
						break;
					
				
			}
			break;
		}
		
		
		
		
		
	}
}
