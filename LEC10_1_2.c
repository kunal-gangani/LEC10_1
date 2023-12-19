#include<stdio.h>
void Divisible(int x){
	printf("\nThis Number is Divisible by 3 and 5");
}
void NotDivisible(int y){
	printf("\nThis Number is Not Divisible by 3 and 5");
}
void main(){
	int n;
	printf("Enter the Value of Number: ");
	scanf("%d",&n);
	if(n%3==0 && n%5==0){
		Divisible(n);
	}else{
		NotDivisible(n);
	}
}
