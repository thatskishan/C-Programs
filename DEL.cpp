#include<stdio.h>
#define P printf

main()
{

	int a,b,c,d,e;
	
		P("a=");
		scanf("%d",&a);
		P("b=");
		scanf("%d",&b);
		P("c=");
		scanf("%d",&c);
		P("d=");
		scanf("%d",&d);
		P("e=");
		scanf("%d",&e);
		
		
		if (a==b && b==c && c==d && d==e && e==a)
		     {  
			    P("A,B,C and E are Equal");
		     }
		else if(a>b)
		    {
		      if(a>c)
		    	 {
		    	  if(a>d)
		    		{
		    		 if(a>e)
		    		  {
		    		    P("a is big");	
					  }
					 else
					  {
					    P("e is big");
					  }
				    }
			      else
				    {
				   	 if(d>e)
				   	  {
				   	    P("d is big");
					  }
					 else
					  {
					    P("e is big");
					  }
					}
				}
		    else
		     	 {
				  if(c>e)
					{
					 P("c is big");
				    }
				  else
					{
					 P("e is big");
					}	
				 }
			}
			 else
				{
				   if(d>e)
					 {
					   P("d is big");
					 }
			      else
			          {
					  	P("e is big");
					  }
				}
			}    
		}
		else
		     {
		    	if (b>c)
		    	{
		    	  if(b>d)
		    		{ 
		    		   if (b>e)
		    		 {
		    		 	P("b is big");
					 }
					   else
					   {
					   	P("e is big");
					   }
					}
			   }
				else
				    {
				    	if(d>e)
				    	{
				    		P("d is big");
						}
						else
						{
							P("e is big");
						}
				   }
			}
				else
				   {
				   	 if(c>d)
				   	{
				   	  if(c>e)
				   	     {
				   	  	P("c is big");
						 }
						 else
						 {
						 	P("e is big");
						 }
				    }
				    else
				        {
				        	if(d>e)
				        	{
				        		P("d is big");
							}
							else
							{ 
							   P("e is big");
							}
				      	}
					}   
		           
			}
						
}
