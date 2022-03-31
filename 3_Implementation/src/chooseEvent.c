#include "function.h"

int event_select(void)
{
	int i;
	printf("\t\t\tEvent's Name\n");
	printf("\t\t\t-------------------------------------\n");
	printf("\t\t\tpress 1 for Abhishekh Upmanyu show\n\n");
	printf("\t\t\tpress 2 for Anubhav Bassi Show \n\n");
	printf("\t\t\tpress 3 for Gaurav Kapoor Show \n");
	scanf("%d",&i);
	return i;
}
