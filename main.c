
/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Badr Gamal Ahmed
 * @brief          : Contains the functionality of my Project
 ******************************************************************************
 */

/* ********************** Includes Section Start ********************** */

#include <stdio.h>
#include <stdlib.h>

#include "emp.h"


/* ********************** Includes Section End   ********************** */

int main(){

	system("cls");
	
    struct Employee* head = NULL;
    int choice, id;
	
	for(int i=0; i<3; i++){
		head = Add_Employee(head);
	}

    while(1){
		
        printf("\nEmployee Record System\n");
		printf("=>>>>>>>>>>>>>>>>>**<<<<<<<<<<<<<<<<<=\n");
        printf("| Menu:                              =\n");
        printf("| 1. Add a new employee data.        =\n");
        printf("| 2. Delete the data of an employee. =\n");
        printf("| 3. Modify the data of an employee  =\n");
        printf("| 4. View the data of an employee.   =\n");
        printf("| 5. View all the employee's data    =\n");
        printf("| 6. Exit                            =\n");
		printf("=>>>>>>>>>>>>>>>>>**<<<<<<<<<<<<<<<<<=\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
		
        getchar();

        switch(choice){
            case 1:
                head = Add_Employee(head);
                break;
            case 2:
                printf("Enter the ID of the employee to delete: ");
                scanf("%d", &id);
                head = Delete_Employee(head, id);
                break;
            case 3:
                printf("Enter the ID of the employee to modify: ");
                scanf("%d", &id);
                modify_Employee(head, id);
                break;
            case 4:
                printf("Enter the ID of the employee to view: ");
                scanf("%d", &id);
                Disply_Employee(head, id);
                break;
            case 5:
                Disply_AllEmployees(head);
                break;
            case 6:
				free_List(head);
                printf("Exiting the program\n");
                return 0;
            default:
                printf("Invalid choice. Please enter a number between 1 and 6.\n");
        }
	}

    // Free the allocated memory before exiting
    free_List(head);

    return 0;
}

