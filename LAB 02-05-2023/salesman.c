#include<stdio.h>
#define REWARD 10
int main(){
	double sr,er,distance,reimbursement;
		printf("Enter the starting value of the odometer\n");
		scanf("%lf",&sr);
		printf("Enter the ending value of the odometer\n");
		scanf("%lf",&er);
		distance=(er-sr);
		reimbursement=distance*REWARD;
		printf("The reimbursement for the salesman is %lf",reimbursement);
	}


