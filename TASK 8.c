#include <stdio.h>
int main(){
	int vehicle_type, age, hasPass, isWeekend, isPeakHour, hours;
	float cost, surcharge, discount, final_amt;
	printf("Enter yout vehicle type (1 for car, 2 for motorcycle, 3 for electric vehicle):");
	scanf("%d",&vehicle_type);
	printf("\nEnter your age:");
	scanf("%d",&age);
	printf("\nDo you have a valid parking pass? (1 for yes, 0 for no):");
	scanf("%d",&hasPass);
	printf("\nIs today saturday/sunday? (1 for yes, 0 for no ):");
	scanf("%d",&isWeekend);
	printf("\nIs this peak hour? (1 for yes, 0 for no):");
	scanf("%d",&isPeakHour);
	printf("\nEnter the number of hours for which the vehicle will be parked:");
	scanf("%d",&hours);
	
	if(age>=18){
		if(vehicle_type>=1&&vehicle_type<=3){
			if(hasPass==1||isWeekend==0||vehicle_type==3){
				switch(vehicle_type){
					case 1:
						cost=200*hours;
					break;
					case 2:
						cost=100*hours;
					break;
					case 3:
						cost=100*(hours-3);
					break;
					default:
						printf("\nInvalid vehicle type");
					break;	
				}
			printf("\nVehicle is allowed to enter");
			}else{
				printf("\nParking entry conditions not satisfied");
			return 0;}
		}else{
			printf("\nInvalid vehicle type");
		return 0;}
	}else{
		printf("\nDriver is under 18");
	return 0;}
	
	if(isWeekend==1&&isPeakHour==1){
		surcharge=cost*0.2;
		final_amt=cost+surcharge;
		if(hasPass==1){
			discount=cost*0.25;
			final_amt=final_amt
			-discount;
		}
	}else{
	    final_amt=cost;
    }
	switch(vehicle_type){
		case 1:
			printf("\nVehicle type:Car");
		break;
		case 2:
			printf("\nVehicle type:Motorcycle");
		break;
		case 3:
			printf("\nVehicle type:Electric vehicle");
		break;
		default:
		break;	
	}
	
	printf("\nNumber of hours parked:%d",hours);
	printf("\nOrignal parking fee:%.2f",cost);
	printf("\nSurcharge:%.2f",surcharge);
	printf("\nDiscount:%.2f",discount);
	printf("\nFinal Payable Amount:%.2f",final_amt);

return 0;
}
