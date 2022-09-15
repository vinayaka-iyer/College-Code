#include<stdio.h>
#include<math.h>

int main(){
	float p, r, t, ans;
	printf("enter the principle amount, the rate of interest and, the time period\n");
	scanf("%f %f %f",&p,&r,&t);
	ans = (p*(1+(r/100)*t)-p);
	printf("the total amount of simple interest is %0.2f",ans);
	
	return 0;
}