#include "function.h"
#include "eventdetails.c"
#include<string.h>

struct event_details person[300];
void show1(int choice,char name[10],int id1,int price)
{
        int count = 0;
		system("cls");
		printf("\n\n");
        printf("\t******************\n");
        printf("\t Booking ID : %d \t\t\tShow Name :Abhishekh Upmanyu show\n",id1);
        printf("\t Customer  : %s\n",name);
        printf("\t\t\t                              Date      : 24-04-2022\n");
        printf("\t                                              Time      : 07:00pm\n");
        printf("\t                                              Hall      : 02\n");
        printf("\t                                              seats No. : %d  \n",choice);
        printf("\t                                              price . : %d  \n\n",price);
		person[count].id=id1;
        printf("\tThank's For Booking\n");
        return;
}