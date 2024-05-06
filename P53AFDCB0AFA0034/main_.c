#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>

#define RED "\x1b[31m" // changes the text colour on terminal to red in terminal.
#define RESET "\x1b[0m"// changes the text colour back to normal in terminal
#define MAX_OPTION 4	



typedef struct nd
{


}node;

/*++++++++++++++++++++++++++++++++++++FUNCTION PROTOTYPES++++++++++++++++++++*/
void print_menu(void);// to print the menu.

/*++++++++++++++++++++++++++++++++++++++++MAIN+++++++++++++++++++++++++++++++*/
int main()
{
	int user_ip = 9;
	struct node *head = NULL;
	enum option{Exit,Insert,Delete,Modify};
	enum option choice;
	while (1)
	{
		int flag = 0;
		do{
			print_menu();
			scanf("%d", &user_ip);
			printf("U IP: %d", user_ip);//debugger
			if((user_ip > -1) && (user_ip > 4))
			{
				flag = 1;
				printf(RED"\n\n\tERROR! Incorrect option\n"RESET);

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

			case Insert: 	printf("\nCase 1");
							break;

			case Delete:	printf("\nCase 2");
							break;

			case Modify:	printf("\nCase 3");
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
