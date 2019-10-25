#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,num,flag=0,count=0,start,end;
	printf("\nEnter starting number: ");
	scanf("%d",&start);
	printf("\nEnter ending number: ");
	scanf("%d",&end);
	for(num=start;num<end;num++){
		if (num==0||num==1){
			flag=1;
			continue;
		}
		for(i=2;i<num/2;i++){
			if(num%i==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			count++;
		}
		else{
			flag=0;
		}
		
	}
	printf("\nTotal number of primes is :%d\n",count);

	return 0;
}