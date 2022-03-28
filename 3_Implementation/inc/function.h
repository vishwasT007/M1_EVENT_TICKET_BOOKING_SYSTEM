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
 * @brief login withrespective to customer or admin
 */


int enterchoice(void);
/**
 * @brief login for admin
 * 
 */
void details(void);
/**
 * @brief Displays the Event available to purchase a ticket
 */

int ListofEvents(void);
int event_select(void);

/**
 * @brief admin can change prize of ticket after login with the appropriate login credentials .
 * 
 */
int changepriceticket(int);

/**
 * @brief Customer can purchase a ticket 
 */

void show1(int choice,char name[10],int id1,int price);
/**
 * @brief Customer can purchase a ticket 
 */
void show2(int choice,char name[10],int id1,int price);
/**
 * @brief Customer can purchase a ticket 
 */
void show3(int choice,char name[10],int id1,int price);
/**
 * @brief A customer can reserve the ticket
 */
void reserveticket(int *,int,int );

/**
 * @brief A customer can cancel the ticket  
 */
void cancelticket(int *); 


#endif /* #define _FUNCTION_H__ */