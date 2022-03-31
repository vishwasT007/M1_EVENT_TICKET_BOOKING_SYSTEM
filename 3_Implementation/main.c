#include<stdio.h>
#include<stdlib.h>
#include"function.h"
#include<string.h>
#include "unity.h"


int main()
{
    int count = 0;
	int **seat_number,choice,price=500,selection,i;
	seat_number=(int **)calloc(101,sizeof(int *));
	for (i=0;i<3;i++)
		*(seat_number+i)=(int *)calloc(101,sizeof(int ));
	int x;
	char passWord[10],pak[10]="user";
while(x!=3)
	{
        a:choice=enter_choice();
		switch(choice)
		{
		    int y;
		    int ch;
			case 1:
			    b:printf(" 1-- To edit price of ticket :   \n");
                printf(" 2-- To view reserved tickets:   \n");
                printf(" 3-- Exit  System:        \n");
	            scanf("%d", &ch);
	            switch(ch){
            case 1:
                price=change_Price_Ticket(price);
                goto b;
				break;
            case 2:
                details();
                goto b;
				break;
            case 3:
                y=3;
                goto a;
                break;
             default:
				printf("Invalid choice\n");
				break;
	            }

	        case 2:
                c:
                printf(" User login: \n");
                printf("        1-- To Purchase Ticket:        \n");
                printf("        2-- To Cancel the Ticket:       \n");
                printf("        3-- Exit System       \n");
                scanf("%d",&ch);
                switch(ch){


                case 1:
                    printf("Enter the password to book the ticket: ");
                    scanf("%s",&passWord);
                    if (strcmp(passWord,pak)==0){
                        selection=ListofEvents();
                        reserve_Ticket(seat_number[selection-1],price,selection);
                        count++;
                    }
                    else
                        printf("Invalid Password!\n");
                    goto c;
                    break;
                case 2:
                    printf("Enter the password to book the ticket: ");
                    scanf("%s",&passWord);
                    if (strcmp(passWord,pak)==0){
                        selection=event_select();
                        cancel_ticket(seat_number[selection-1]);
                    }
                    else
                    printf("Invalid Password!\n");
                    goto c;
                    break;
				case 3:
                goto a;
                break;
             default:
				printf("Invalid choice\n");
				break;
				    }



			case 3:
				x=3;
				break;
			default:
				printf("Invalid choice\n");
				break;
		}
	}
}