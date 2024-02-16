#include<stdio.h>

void odd_even(int num)
{
   if(num%2==0){
   	printf("This num is even.");
   }
   else{
   	printf("This num is odd.");
   }	
}

void main()
{
	int A;
	printf("Enter your number :");
	scanf("%d",&A);
	
	odd_even(A);
}
