#include<stdio.h>

void cal(){

	int a,b;
	
	printf("Enter a number :");
	scanf("%d",&a);
	
	printf("Enter another number :");
	scanf("%d",&b);
	
	printf("\n%d + %d = %d",a,b,a+b);
	printf("\n%d - %d = %d",a,b,a-b);
	printf("\n%d * %d = %d",a,b,a*b);
	printf("\n%d / %d = %d",a,b,a/b);
}

void main(){
	 cal();
}
