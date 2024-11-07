#include <stdio.h>

int main(){
	int hours_worked;
	int hourly_wage;
	int taxes;
	int net_pay;
	int gross_pay;
	int regular_hours;
	int overtime;
	  
printf("Enter Hours worked: ");
scanf("%d",&hours_worked);

printf("Enter Hourly Wage : ");
scanf("%d",&hourly_wage);

if(hours_worked>40){
	 regular_hours=40;
	overtime= hours_worked - 40;
	
	gross_pay=(regular_hours*hourly_wage) + (overtime*hourly_wage*1.5);
}  
else{
	gross_pay = hours_worked*hourly_wage;
}
//tax calculation
if (gross_pay<600){
	taxes = gross_pay*0.15;}
	else{
		taxes=(600*0.15) + ((gross_pay-600)*0.20);
	}
	net_pay=gross_pay-taxes;
	printf("Gross pay : %d\n",gross_pay);
	printf("Taxes :%d\n",taxes);
	printf("Net pay :%d",net_pay);
	
	return 0;
}