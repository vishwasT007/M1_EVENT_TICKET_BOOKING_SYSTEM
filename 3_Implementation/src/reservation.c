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
		if (array[i] == 0) {
			printf("%d\t", i);
		}
		else {
			printf("%d*\t", i);
		}
		if (i % 10 == 0) {
			printf("\n\n");
		}
	}
	
	printf("Please Enter Your Name: ");
	scanf("%s",person[count].name);
	
	printf("Please Enter Your Mobile Number: ");
	scanf("%11s", person[count].mobile_number);
	
	printf("Please Select Seat Number ? ");
	scanf("%d", &j);
	
	if (j > 100 || j < 1)
	{
		printf("Seat number is Not  Available\n");
		printf("Please Enter Again seat number: ");
		scanf("%d", &j);
	}
	
	if (array[j] == 1)
	{
		printf("Sorry !!, This ticket is already booked! Please choose another seat.\n");
		scanf("%d", &j);
	}
	else
		array[j] = 1;
	person[count].seat_number = j;
	
	if (selection == 1) {
		event_show1(j, person[count].name, id1, price);
	}
	else if (selection == 2) {
		event_show2(j, person[count].name, id1, price);
	}
	else {
		event_show3(j, person[count].name, id1, price);
	}
	id1--;
}
