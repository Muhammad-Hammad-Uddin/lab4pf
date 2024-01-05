#include<stdio.h>
main(){
	float r,h,pie=3.142,volume;
	printf("enter radius=");
	scanf("%f",&r);
	printf("enter height=");
	scanf("%f",&h);
	r=r*r;
	volume=r*h*pie;
	volume=volume/3;
	printf("volume=%.3f",volume);
}
