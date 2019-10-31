#include<stdio.h>
int expo(int a,int b){
	if(b<=0)
		return 1;
	else
		return a*expo(a,b-1);
}
int main(){
	int num1,num2,res=0;
	printf("\nEnter 2 numbers : ");
	scanf("%d%d",&num1,&num2);
	res=expo(num1,num2);
	printf("\nExponent of %d^%d is : %d\n",num1,num2,res);
	return 0;
}
