#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>

#define MAX_OPTION 3



typedef struct nd
{


}node;

/*++++++++++++++++++++++++++++++++++++FUNCTION PROTOTYPES++++++++++++++++++++*/
void print_menu(void);// to print the menu.

/*++++++++++++++++++++++++++++++++++++++++MAIN+++++++++++++++++++++++++++++++*/
int main()
{
	int user_ip;
	struct node *head = NULL;
	enum option{Exit,Insert,Delete,Modify};
	enum option choice;
	while (1)
	{
		int flag = 0;
		do{
			print_menu();
			scanf("%d", &user_ip);
			
			if( /*(isdigit(user_ip)) &&*/ (user_ip >= 0) && (user_ip <= MAX_OPTION))
			{
				flag = 1;
				printf("\nERROR! Incorrect option\n");

			}//if ends
			else
			{
				choice = user_ip;
				break;
			}//else ends
		}while(flag == 1);

		switch(choice)
		{
			case Exit : 	printf("\nExiting ..");
							exit(0);

			case Insert: 
							break;

			case Delete:	
							break;

			case Modify:	
							break;
		}//switch case ends.

	}//while ends


}//main ends

/*++++++++++++++++++++++++++++++++++PRINT MENU FUNCTION+++++++++++++++++++++++*/
void print_menu(void)
{
	printf("\n\n=====================================  ========================================");
	printf("\n====================================MENU=======================================");
	printf("\n0.Exit\n1.Insert\n2.Delete\n3.Modify");
	printf("\nEnter choice: ");


}//menu functon ends.

/*____________________________________END_____________________________________*/