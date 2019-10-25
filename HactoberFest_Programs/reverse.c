#include<stdio.h>
#include<string.h>

int main(){
	int size=0,i,flag=1;
	char str[50];
	do{
		
	printf("\nEnter a string: ");
	gets(str);
	i=0;
	while(str[i]!='\0'){
		i++;
	}
	size=i-1;
	for(i=0;i<=size/2;i++){
		if(str[i]!=str[size-i]){
			flag=0;
			break;
		}
		else{
			flag=1;
		}
		printf("\n%c\t%c",str[i],str[size-i]);
	}
	if(flag==1){
		printf("\nPalindrome");
	}
	else{
		printf("\nNot Palindrome");
	}
	}while(str!="end");
}	