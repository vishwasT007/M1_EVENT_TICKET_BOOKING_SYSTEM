#include "function.h"
#include "eventdetails.c"
#include <string.h>

struct event_details person[300];
void reserve_Ticket(int *array, int price, int selection)
{
	int i, j;
	int count = 0;
	int id1 = 1000;
	printf("\n                                SCREEN\n\n\n");
	for (i = 1; i <= 100; i++)
	{
		if (array[i] == 0)
			printf("%d\t", i);
		else
			printf("\t", i);
		if (i % 10 == 0)
			printf("\n\n");
	}
	printf("Please enter your name: ");
	scanf(" %19[^\n]%*[^\n]", &person[count].name);
	printf("Please enter your phone number: ");
	scanf("%u", &person[count].mobile_number);
	printf("Please select seat number you want? ");
	scanf("%d", &j);
	if (j > 100 || j < 1)
	{
		printf("seat1 number is unavailable in this theater\n");
		printf("Please re-enter seat number: ");
		scanf("%d", &j);
	}
	if (array[j] == 1)
	{
		printf("Sorry, this ticket is already booked! Please choose another seat.\n");
		scanf("%d", &j);
	}
	else
		array[j] = 1;
	person[count].seat_number = j;
	if (selection == 1)
		event_show1(j, person[count].name, id1, price);
	else if (selection == 2)
		event_show2(j, person[count].name, id1, price);
	else
		event_show3(j, person[count].name, id1, price);
	id1--;
}
