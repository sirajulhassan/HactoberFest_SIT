#include<stdio.h>
int main(){
	int i,j,size,flag=0;
	printf("Enter the number of elements: \n");
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++){
		printf("\nEnter number: ");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(arr[i]==arr[j]&&i!=j){
				flag=1;
				printf("Duplicates found at pos %d and pos %d\n",i+1,j+1);
			}
		}
	}
	if(flag==0){
		printf("No uplicates found\n");
	}
	
	
	return 0;
}