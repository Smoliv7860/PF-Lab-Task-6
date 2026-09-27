#include <stdio.h>
int main()
{
	int X,Y,Z,W;
	printf("Enter four numbers:-\n");
	scanf("%d%d%d%d",&X,&Y,&Z,&W);
	if(X>=Y){
		if(X>=Z){
			if(X>=W){
				printf("\n%d is the largest among the four numbers",X);
			}else{
				printf("\n%d is the largest among the four numbers",W);
			}
		}else if(Z>=W){
			printf("\n%d is the largest among the four numbers",Z);
		}else{
			printf("\n%d is the largest among the four numbers",W);
		}
	}else if(Y>=Z){
		if(Y>=W){
			printf("\n%d is the largest among the four numbers",Y);
		}else{
			printf("\n%d is the largest among the four numbers",W);
		}
	}else if(Z>=W){
		printf("\n%d is the largest among the four numbers",Z);
	}else{
		printf("\n%d is the largest among the four numbers",W);
	}
return 0;
}
