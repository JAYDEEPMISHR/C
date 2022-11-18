#include<stdio.h>
main()
{
	int n,quantity,amount,price,totalAmount=0;
	char addAnother;
	
	do 
	{
		printf("\n\n-------------MENU---------------\n");
		printf("1. Pizza     Price=180rs/pcs\n");
		printf("2. Burger    Price=100rs/pcs\n");
		printf("3. Dosa      Price=120rs/pcs\n");
		printf("4. Idli      Price=50rs/pcs\n");
		printf("\nPlease Enter Your Choose... : ");          // Ask Choice of Customer
		scanf("%d",&n);
	
		switch(n)
		{
			case 1:										// Case 1
			printf("\nYou have choosen Pizza"); 		
			printf("\nEnter the quantity: ");
			scanf("%d",&quantity);						// Get choice from customer
			price= 180;
			break;
		
			case 2:										// Case 2
			printf("\nYou have choosen Burger");
			printf("\nEnter the quantity: ");
			scanf("%d",&quantity);						// Get choice from customer
			price= 100;
			break;
		
			case 3:										//Case 3
			printf("\nYou have choosen Dosa");
			printf("\nEnter the quantity: ");
			scanf("%d",&quantity);						// Get choice from customer
			price= 120;	
			break;
		
			case 4:										// Case 4 
			printf("\nYou have choosen Idli");
			printf("\nEnter the quantity: ");
			scanf("%d",&quantity);						// Get choice from customer
			price= 50;
			break;
		
			default:
			printf("\nYou have choosen wrong number");
		}
		amount= price*quantity;							// Amount according to customer choice & quantity
		printf("\nAmount :%d",amount);
		
		totalAmount= totalAmount + amount;				// Total amount for customer
		printf("\nTotal Amount :%d",totalAmount);
		
		printf("\nDo You want place more orders? Y & N:");
		
		addAnother= getch();							// Get the Yes or No from user
	}while(addAnother == 'y' || addAnother == 'Y');		// If 'y' or 'Y' condition id true then the loop is again started
}

