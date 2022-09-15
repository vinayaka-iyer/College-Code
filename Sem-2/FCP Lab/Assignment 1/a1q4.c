#include<stdio.h>
#include<math.h>

int main(){
	float f;
	printf("enter the temperature in fahrenheit\n");
	scanf("%f",&f);
	float c = (f-32)*5/9;
	printf("the temperature is %0.2f Degrees Celcius",c);
	
	return 0;
}