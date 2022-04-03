#include<stdio.h>
#include<stdlib.h>
#include"function.h"
#include<string.h>
#include "unity.h"


int main()
{
    int count = 0;
	int **seat_number;
	int choice;
	int price = 800;
	int select;
	int i;
	seat_number=(int **)calloc(101,sizeof(int *));
	for (i=0;i<3;i++)
		*(seat_number+i)=(int *)calloc(101,sizeof(int ));
	int x = 0;
	char passWord[10],pak[10]="user";
	while(x!=3)
	{
		
        a:choice=enter_choice();
		
		switch(choice)
		{
				
		    int y;
		    int ch;
				
			case 1:
				
			    b:printf(" 1-- To edit price of Event ticket :   \n");
				
                printf(" 2-- To view reserved Event tickets:   \n");
				
                printf(" 3-- Exit  System:        \n");
				
	            scanf("%d", &ch);
				
	            switch(ch)
	    {
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
				
                printf("        1** To Purchase Event Ticket:        \n");
				
                printf("        2** To Cancel Event Ticket:       \n");
				
                printf("        3** Exit System       \n");
				
                scanf("%d",&ch);
				
                switch(ch){


                case 1:
                    printf("**Enter the password to book the Event ticket: ");
                    scanf("%s",passWord);
				
                    if (strcmp(passWord,pak)==0)
		    {
                        select=ListofEvents();
			    
                        reserve_Ticket(seat_number[select-1],price,select);
			    
                        count++;
                    }
                    else {
                        printf("Invalid Password!\n");
		    }
				
                    goto c;
				
                    break;
				
                case 2:
				
                    printf("**Enter the password to book the Event ticket: ");
				
                    scanf("%s",passWord);
				
                    if (strcmp(passWord,pak)==0)
		    {
                        select=event_select();
                        cancel_ticket(seat_number[select-1]);
                    }
                    else {
                    printf("Invalid Password!\n");
		    }
                    goto c;
                    break;
				case 3:
                goto a;
                break;
            		default:
				printf("**Invalid choice\n");
				break;
			}

			case 3:
				x=3;
				break;
			default:
				printf("**Invalid choice\n");
				break;
		}
	}
}
