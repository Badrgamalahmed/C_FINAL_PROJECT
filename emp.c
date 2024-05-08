
/**
 ******************************************************************************
 * @file           : emp.c
 * @author         : Badr Gamal Ahmed
 * @brief          : Contains the Fuction Definiation of my Project
 ******************************************************************************
 */

/* ********************** Includes Section Start ********************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "emp.h"

/* ********************** Includes Section End   ********************** */


/* ********************** Sub-Program Section Start ******************* */

struct Employee* Add_Employee(struct Employee* head){
	
	
	struct Employee* new_Employee = (struct Employee*)malloc(sizeof(struct Employee));
	
	if(new_Employee == NULL)
	{
		printf("The Allocation Failed \n");
		exit(EXIT_FAILURE);
	}
	else
	{
		
		printf("Please Enter the employee name   : ");
		fflush(stdin);
		gets(new_Employee->name);
		
		printf("Please Enter the employee Age    : ");
		fflush(stdin);
		scanf("%d", &new_Employee->age);
		
		printf("Please Enter the employee Salary : ");
		fflush(stdin);
		scanf("%f", &new_Employee->salary);
		
		getchar();
		//fflush(stdin);
		printf("Please Enter the employee title  : ");
		//fflush(stdin);
		gets(new_Employee->title);
		
		fflush(stdin);
		printf("Please Enter the employee ID     : ");
		fflush(stdin);
		scanf("%d", &new_Employee->id);
		
		new_Employee->next = head;
		head = new_Employee;
		
		printf("Employee added successfully\n");
		
		system("cls");
		printf("press any key to continue.....\n");
		getchar();
		getchar();
		
		return head;
		
	}
}
struct Employee* Delete_Employee(struct Employee* head, int id){
	
	system("cls");
	
	struct Employee *current, *prev;
	current = head;
	prev = NULL;
	
	while(current != NULL && current->id != id)
	{
		prev = current;
		current = current->next;
	}
	
	if(current == NULL)
	{
		printf("The Employee with this ID %d NOT found\n", id);
		printf("Press any key to continue.....\n");
		getchar();
		getchar();
	}
	
	else 
	{
		if(prev == NULL)
		{
			head = current->next;
		}
		else
		{
			prev->next = current->next;
		}
		
		free(current);
		printf("The Employee with this ID %d Deleted Successfully\n", id);
		printf("Press any key to continue.....\n");
		getchar();
		getchar();
		
	}
	
	prev = current;
	current = current->next;
	
	return head;
	
}

void modify_Employee(struct Employee* head, int id){
	
	
	
	struct Employee *current = head;
	
	while(current != NULL && current->id != id)
	{
		current = current->next;
	}
	
	if(current == NULL)
	{
		printf("The Employee with this ID %d NOT found\n", id);
		printf("Press any key to continue.....\n");
		getchar();
		getchar();
	}
	
	else 
	{
		printf("Please enter the Modefied Name   : ");
		getchar();
		gets(current->name);
		
		printf("Please Enter the Modefied Age    : ");
		scanf("%d", &current->age);
		
		printf("Please Enter the Modefied Salary : ");
		scanf("%f", &current->salary);
		
		getchar();
		printf("Please Enter the Modefied  Title : ");
		gets(current->title);
		
		printf("The Employee with this ID %d Modefied Successfully\n", id);
		printf("Employee modified successfully.\n");
        printf("Press any key to continue.....\n");
        getchar();
        getchar();
		system("cls");
	}
	
}

void Disply_Employee(struct Employee* head, int id){
	
	system("cls");
	
	struct Employee *current = head;
	
	while(current != NULL && current->id != id)
	{
		current = current->next;
	}
	
	if(current == NULL)
	{
		printf("The Employee with this ID %d NOT found\n", id);
		printf("Press any key to continue.....\n");
		getchar();
		getchar();
	}
	
	else 
	{
		printf("---------------------------------\n");
		printf("The Employee Details\n");
		printf("Name   : %s\n", current->name);
		printf("Age    : %d\n", current->age);
		printf("Salary : %0.2f\n", current->salary);
		printf("Title  : %s\n", current->title);
		printf("ID     : %d\n", current->id);
	}
	
    printf("Press any key to continue.....\n");
    getchar();
    getchar();
	
}

void Disply_AllEmployees(struct Employee* head){
	
	system("cls");
	
	if(head == NULL)
	{
		printf("There is no any Employee\n");
	}
	else
	{
		struct Employee* current = head;
		
		printf("===============================\n");
		printf("\nAll Employees\n");
		while(current != NULL)
		{
			printf("The Employee Details\n");
			printf("Name   : %s\n", current->name);
			printf("Age    : %d\n", current->age);
			printf("Salary : %0.2f\n", current->salary);
			printf("Title  : %s\n", current->title);
			printf("ID     : %d\n", current->id);
			
			current = current->next;
		}
		
	}
	
}
void free_List(struct Employee* head){
	struct Employee* current = head;
	struct Employee* next;
	
	while(current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	
}

/* ********************** Sub-Program Section End ************* */
