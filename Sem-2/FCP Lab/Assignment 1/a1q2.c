#include<stdio.h>
#include <math.h>

int main(){
	float area;
	float r;
	printf("enter the radius of the circle\n");
	scanf("%f",&r);
	area = M_PI*pow(r,2);
	printf("the area of the circle is %f", area);
	
	return 0;
}
