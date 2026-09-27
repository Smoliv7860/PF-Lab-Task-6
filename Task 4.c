#include <stdio.h>
int main()
{
	float a,b,c;
	printf("Enter three sides of a triangle:\n");
	scanf("%f%f%f",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a){
		if(a==b&&b==c){
			printf("\nIts an Equilateral triangle");
		}else if(a==b||b==c||c==a){
			printf("\nIts an isosceles trianle");
		}else{
			printf("\nIts a scalene triangle");
		}
	}else{
		printf("\nNot a triangle");
	}
return 0;
}
