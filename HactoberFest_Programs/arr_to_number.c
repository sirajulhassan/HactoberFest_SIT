#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int i,dig,number=0;
	//Read a number to complete the program.
	int arr[dig];
	for(i=0;i<dig;i++){
		printf("\nEnter %dth digit: ",i+1);
		scanf("%d",&arr[i]);
		number=number+arr[i]*pow(10,i);
	}
	printf("\nThe number is: %d\n",number);
return 0;
}