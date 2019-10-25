#include<stdio.h>
int main(){
	char str[200],text[200],new_str[200];
	int i=0,j=0,k=0,pos=0,n=0;
	//Read a string to complete the program
	printf("\nEnter the string to delete: ");
	gets(str);
	
	while(text[i]!=NULL){
		j=0,k=i;
		while(str[j]==text[k]&&str[j]!='\0'){
			j++;
			k++;
		}
		if(str[j]=='\0'){
			pos=k;
		}
		new_str[n]=text[pos];
		pos++;
		i++;
		n++;
	}
	new_str[n]='\0';
	printf("\nThe new string is: ");
	puts(new_str);
	return 0;
}