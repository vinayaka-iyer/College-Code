#include<stdio.h>

int main(){
	int h;
	scanf("%d", &h);
	printf("%d\n", h);
	
	float i;
	scanf("%f", &i);
	printf("%f\n", i);
	
	float j;
	scanf("%f", &j);
	printf("%0.2f\n", j);
	
	double k;
	scanf("%lf", &k);
	printf("%0.2lf\n", k);
	
	int l;
	scanf("%d", &l);
	printf("%d*%d\n", l, l);

	char name[20];
	scanf("%s",&name);
	printf("%s\n",name);
	
	char college[50];
	gets(college);
	printf("%s",college);

	return 0;
}
