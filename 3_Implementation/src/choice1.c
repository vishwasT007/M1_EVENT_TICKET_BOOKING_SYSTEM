#include "function.h"
int enter_choice(void)
{
	int choice;
	printf("                 Welcome To Event Ticket Booking System\n");
	printf(" ************#######************\n");
	printf("             1- Admin           \n");
	printf("             2- User          \n");
	printf("             3- Exit system:                                   \n");
	printf("**********************\n");
	printf("  Enter your choice: ");
	scanf("%d",&choice);
	return choice;
}

