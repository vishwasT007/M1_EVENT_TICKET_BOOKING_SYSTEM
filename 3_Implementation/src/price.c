#include "function.h"
int change_Price_Ticket(int price)
{
	char passWord[10],pak[10]="admin";
	printf("Enter the password to change price of ticket: ");
	scanf("%s",passWord);
	if (strcmp(passWord,pak)==0)
	{
		printf("Please enter new price: ");
		scanf("%d",&price);
		printf("Price Updated Successfully: ");
		system("PAUSE");
		system("CLS");
	}
	else
		printf("The Entered password is wrong! ");
	return price;
}
