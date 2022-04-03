#include "function.h"
#include "eventdetails.c"
#include<string.h>

struct event_details person[300];

void cancel_ticket(int *array)
{
      	int Choiceseat;
	int i;
	int hold;
	
	  printf("Please enter ID number of ticket: ");
	  scanf("%d",&Choiceseat);
	
	  for (i = 0;i < 300;i++)
	  {
	  		if(Choiceseat == person[i].id)
	  		{
					 hold = 5;
					 system("cls");
					 printf("%s your ticket is %d cancelled",person[i].name,person[i].seat_number);
					 array[person[i].seat_number]= 0;
					 i = 300;
	  		}
	  }
	  if (hold != 5)
	  		printf("Ticket ID number is incorrect please enter right one to cancel ticket: \n");
}
