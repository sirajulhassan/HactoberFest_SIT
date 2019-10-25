#include<stdio.h>
int main(){
	int row=2,col,i,j;
	int arr[7][7]={0};
	arr[0][0]=arr[1][0]=arr[1][1]=1;
	while(row<=7){
		arr[row][0]=1;
		for(col=1;col<=row;col++){
			arr[row][col]=arr[row-1][col-1]+arr[row-1][col];			
		}
		row++;
	}
	for(i=0;i<7;i++){
		for(j=0;j<=i;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}