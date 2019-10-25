#include<stdio.h>

void move(int n,char src,char dest,char spare){
	if(n==1){
		printf("\nMove disk from %c to %c.",src,dest);
	}
	else{
		move(n-1,src,spare,dest);
		move(1,src,dest,spare);
		move(n-1,spare,dest,src);
	}
}

int main(){
	int num;
	printf("\nEnter the number of disks : ");
	scanf("%d",&num);
	move(num,'A','C','B');
	return 0;
}