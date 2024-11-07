
#include <stdio.h>
#include <string.h>

struct employee {
	char name [25];
	int id;
	char department[20];
	float salary;
	char email [50];
	
}employee;

int main(){
	//declaration and initialisation of variables
	strcpy(employee.name,"John Doe");
	employee.id = 12345;
	strcpy(employee.department,"Human Resources");
	employee.salary = 55000.50;
	strcpy(employee.email,"johndoe@company.com");
	
	//printing the values
	printf("Name : %s\n",employee.name);
	printf("ID NUMBER : %d\n",employee.id);
	printf("Department : %d\n",employee.department);
	printf("Salary : %f\n",employee.salary);
	printf("Email Adress %s\n",employee.email);
	
	return 0;
}