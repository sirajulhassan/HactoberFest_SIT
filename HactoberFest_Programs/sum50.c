#include<stdio.h>
int main(){
	int arr[100];
	int i,sum=0;
	for(i=0;i<100;i++){
		if(i<50)
			arr[i]=i;
		else
			arr[i]=100-i/2;
	}
	printf("The array is: \n");
	for(i=0;i<100;i++){
		if(i%10==0)
			printf("\n");
		printf("%d\t",arr[i]);
	}
	int j;
	for(i=0;i<100;i++){
		for(j=i+1;j<100;j++){
			if(arr[i]+arr[j]==50){
				printf("\narr[%d][%d]=[%d,%d]\n",i,j,arr[i],arr[j]);
			}
		}
	}
	return 0;
}