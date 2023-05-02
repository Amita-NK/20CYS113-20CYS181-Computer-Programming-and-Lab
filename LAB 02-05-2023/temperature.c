#include<stdio.h>
int main(){
int t,T;
printf("Enter the value of the time elapsed");
scanf("%d",&t);
T=((4*t*t)/(t+2))-20;
printf("The temperature in the freezer is %d",T);
return 0;
}
