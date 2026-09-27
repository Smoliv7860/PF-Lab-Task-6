#include <stdio.h>
int main()
{
	int units,rate;
	char type;
	float total_bill;
	printf("Enter number of units:");
	scanf("%d",&units);
	printf("\nEnter your connection type (D for Domestic, C for Commercial):");
	scanf(" %c",&type);
	if(type=='D'){
		if(units>=0&&units<=100){
			rate=20;
		}else if(units>=101&&units<=300){
			rate=30;
		}else if(units>300){
			rate=40;
		}else{
			printf("\nInvalid Input");
		return 0;}
	}else if(type=='C'){
		if(units>=0&&units<=100){
			rate=25;
		}else if(units>=101&&units<=300){
			rate=35;
		}else if(units>300){
			rate=50;
		}else{
			printf("\nInvalid Input");
		return 0;}
	}else{
		printf("\nInvalid Input");
	return 0;}
	total_bill=rate*units;
	printf("Total Bill:Rs%.2f",total_bill);
return 0;
}
