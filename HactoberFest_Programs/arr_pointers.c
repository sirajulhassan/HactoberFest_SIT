#include<stdio.h>
int main() {
	int arr[]={1,2,3,4,5}; 
	int *p=arr;
	printf("\n Address of array = %p %p %p %p", arr, &arr[0], &arr,* p+2);
	return 0;
} 