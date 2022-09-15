#include<stdio.h>
#include<math.h>

int main(){
	int a, b, c;
	printf("enter the values of a, b, and c\n");
	scanf("%d %d %d",&a,&b,&c);
	
	int eq1, eq2, eq3;
	eq1 = pow(a,2) + 2*a*b + pow(b,2);
	eq2 = pow(a,2) - 2*a*b + pow(b,2);
	eq3 = pow(a,3) + pow(b,3) + pow(c,3) - 3*a*b*c;
	
	printf("a^2 + 2ab + b^2 = ");
	printf("%d^2 + 2*%d*%d + %d^2 = %d\n",a,a,b,b,eq1);
	printf("a^2 - 2ab + b^2 = ",eq2);
	printf("%d^2 - 2*%d*%d + %d^2 = %d\n",a,a,b,b,eq2);
	printf("a^3 + b^3 + c^3 - 3abc = ");
	printf("%d^3 + %d^3 + %d^3 - 3*%d*%d*%d = %d",a,b,c,a,b,c,eq3);

	return 0;
}
