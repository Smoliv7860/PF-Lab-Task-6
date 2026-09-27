#include <stdio.h>
int main()
{ 
	int age, ticket_price;
	char day;
	printf("Enter your age:");
	scanf("%d",&age);
	printf("\nEnter day (W for weekday, H for weekend/holiday):");
	scanf(" %c",&day);
	
	if(age<12||age>60){
		if(day=='W'){
			ticket_price=800;
		}else if(day=='H'){
			ticket_price=600;
		}else{
			printf("\nInvalid Input");
		return 0;}	
		
	}else{
		if(day=='W'){
			ticket_price=1200;
		}else if(day=='H'){
			ticket_price=1000;
		}else{
			printf("\nInvalid Input");
		return 0;}
	}
	
	printf("\nFinal Ticket Price:Rs%d",ticket_price);

return 0;
}
