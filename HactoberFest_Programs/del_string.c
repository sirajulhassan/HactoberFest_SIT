#include<stdio.h>
int main(){
	char text[200],new_str[200];
	int i=0,j=0,pos=0,num=0;
	printf("\nEnter a string: ");
	gets(text);
	printf("\nEnter the position to delete: ");
	scanf("%d",&pos);
	printf("\nEnter the no. of characters to delete: ");
	scanf("%d",&num);
	while(text[i]!=NULL){
		/*
		Write the code to delete num no. of characters from position pos in string text.
		*/
		new_str[j++]=text[i++];
		
	}
	new_str[j]=NULL;
	printf("\nThe new string is: ");
	puts(new_str);
	return 0;
}