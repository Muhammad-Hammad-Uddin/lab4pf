#include<stdio.h>
#include<math.h>
main(){
	float x1,x2,y1,y2,diffofx,diffofy,a,b,d;
	printf("enter x1=");
	scanf("%f",&x1);
	printf("enter x2=");
	scanf("%f",&x2);
	printf("enter y1");
	scanf("%f",&y1);
	printf("enter y2");
	scanf("%f",&y2);
	diffofx=x1-x2;
	diffofy=y1-y2;
	a=diffofx*diffofx;
	b=diffofy*diffofy;
	d=sqrt(a+b);
	printf("Distance between two point is %f",d);
}
