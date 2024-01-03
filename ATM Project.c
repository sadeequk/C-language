#include <stdio.h>
	unsigned long amount_value=10000,deposit,withdraw;
	int k;
	int choice;
	int password;
	char transaction='y';
	
void main()
{
	while (password != 1111)
	{
		printf("Enter Your 4 Letter Pin Code: ");
		scanf("%d", &password);
		if (password != 1111)
		printf("Invalid Pin Code Please try Again\n");
	}
	do
	{
		printf("------ Welcome To Our ATM Services. -------\n");
		printf("1. Balance Inquiry\n");
		printf("2. Withdraw Cash\n");
		printf("3. Deposit Cash\n");
		printf("4. Quit\n");
		printf("******************?**************************?*\n\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice)
			{
		case 1:
			printf("\n Your Current Balance is : %luRs ", amount_value);
			break;
		case 2:
			printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
			scanf("%lu", &withdraw);
			
			
	}
  
