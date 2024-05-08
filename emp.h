
/**
 ******************************************************************************
 * @file           : emp.c
 * @author         : Badr Gamal Ahmed
 * @brief          : Contains the Fuction Definiation of my Project
 ******************************************************************************
 */
 
/* ********************** Section File Gard Start ************************* */
 
#ifndef EMP_H
#define EMP_H


struct Employee{
    char name[50];
    int age;
    float salary;
    char title[50];
    int id;
    struct Employee* next;
};

/* ********************** Sub-Program Section Declaration Start ************* */

struct Employee* Add_Employee(struct Employee* head);
struct Employee* Delete_Employee(struct Employee* head, int id);
void modify_Employee(struct Employee* head, int id);
void Disply_Employee(struct Employee* head, int id);
void Disply_AllEmployees(struct Employee* head);
void free_List(struct Employee* head);

/* ********************** Sub-Program Section Declaration End ************* */

#endif

/* ********************** Section File Gard End   ************************* */





