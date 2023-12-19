#include<stdio.h>
void Cube(int x){
	printf("\nThe Cube of Number is: %d",x*x*x);
}
void main(){
	int n;
	printf("Enter the Value of Number: ");
	scanf("%d",&n);
	Cube(n);
}
