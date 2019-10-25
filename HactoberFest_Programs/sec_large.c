#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j,size,large,sec_large;
	printf("Enter the number of elements in the array: \n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the elements: \n");

	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	large=arr[0];
	for(i=1;i<size;i++){
		if(arr[i]>large){
			large=arr[i];
		}
	}
	
	sec_large=arr[1];
	for(j=0;j<size;j++){
		if(arr[j]!=large){
			if(arr[j]>sec_large){
				sec_large=arr[j];
			}
		}
	}
	
	printf("The second largest element is: %d\n",sec_large);
	return 0;
}