#include<stdio.h>
#include<math.h>

int main(){
	char op;
	int a,b;
	
	printf("enter operator\n");
	scanf("%c", &op);
	printf("enter number 1 and number 2\n");
	scanf("%d %d",&a,&b);

	switch(op){
		case '+':
			printf("%d",a+b);
			break;
		case '-':
			printf("%d",a-b);
			break;
		case '*':
			printf("%d",a*b);
			break;
		case '/':
			printf("%d",a/b);
			break;
	}
	return 0;
}