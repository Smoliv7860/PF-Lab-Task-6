#include <stdio.h>
#include <math.h>
int main()
{
	int choice;
	char op;
	float num1,num2,result;
	printf("1. Basic Arithmetic\n2. Power/Root operations\nEnter your choice:");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("\n1. +\n2. -\n3. *\n4. /\nChoose the operation:");
			scanf(" %c",&op);
			printf("\nEnter two numbers:\n");
			scanf("%f%f",&num1,&num2);
			switch(op){
				case '+':
					result=num1+num2;
				break;
				case'-':
					result=num1-num2;
				break;
				case'*':
					result=num1*num2;
				break;
				case'/':
					if(num2!=0){
					result=num1/num2;
				}else{
					printf("\nError:Division by 0 not possible");
				return 0;}
				break;
				default:
					printf("\nInvalid operation");	
			    return 0;
			}
		break;
		case 2:
			printf("\nEnter operation (s for computing a square, r for square root):");
			scanf(" %c",&op);
			printf("\nEnter a number:");
			scanf("%f",&num1);
			switch(op){
				case's':
					result=num1*num1;
				break;
				case'r':
					if(num1>=0){
					result=sqrt(num1);
				    }else{
				    printf("\nCannot compute square root of a negative number");	
					return 0;
					}
				break;
				default:
					printf("\nInvalid operation");
				return 0;
			}
		break;
		default:
			printf("\nInvalid mode choice");
		return 0;
	}
	
	printf("\nResult:%.1f",result);
return 0;
}
