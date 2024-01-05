#include<stdio.h>
main(){
	int pennies=368,quarter,dimes,nickel,remainingpennies,remainingdime;
	quarter=pennies/25;
	remainingpennies=368-(quarter*25);
	dimes=remainingpennies/10;
	remainingdime=remainingpennies-(dimes*10);
	nickel=remainingdime/5;
	printf("amount of quarter is %d",quarter);
	printf("amout of dime is %d",dimes);
	printf("amount of nickel is %d",nickel);

}
