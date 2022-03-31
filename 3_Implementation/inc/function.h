/**
 * @file function.h
 * @author Vishwas Tarende
 * @brief 
 * @version v0.1
 * @date 2022-03-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __FUNCTION_H__
#define __FUNCTION_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"
#include "assert.h"

#ifndef __FUNCTION_H__
#define __FUNCTION_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"
#include "assert.h"



#endif /* #define _FUNCTION_H__ */


/**
 * @brief login with respective to customer or admin
 */


int enter_choice(void);
/**
 * @brief login for admin
 * 
 */
void details_(void);
/**
 * @brief Displays the Event available to purchase a ticket
 */

int ListofEvents(void);
int event_select(void);

/**
 * @brief Admin can change prize of ticket after login with appropriate login details .
 * 
 */
int change_Price_Ticket(int);

/**
 * @brief User can Buy  ticket 
 */

void event_show1(int choice,char name[10],int id1,int price);
/**
 * @brief User can purchase a ticket 
 */
void event_show2(int choice,char name[10],int id1,int price);
/**
 * @brief User can purchase a ticket 
 */
void event_show3(int choice,char name[10],int id1,int price);
/**
 * @brief A User can reserve the ticket
 */
void reserve_Ticket(int *,int,int );

/**
 * @brief A User can cancel the ticket  
 */
void cancel_ticket(int *); 


#endif /* #define _FUNCTION_H__ */