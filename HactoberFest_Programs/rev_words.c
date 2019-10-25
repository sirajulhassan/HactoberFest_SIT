//Provide indentation and necessary documentation

#include<stdio.h>
void reverse(char *str,int begin, int i){
	char temp;
	while(begin<i){
		temp=str[begin];
		str[begin]=str[i];
		str[i]=temp;
		i--;
		begin++;
	}
}
int main(){
	char str[100];
	int len,i=0,begin=0;
	gets(str);
	while(str[i]!='\0'){
		i++;
		if(str[i]=='\0'){
			reverse(str,begin,i-1);
		}
		else if(str[i]==' '){
			reverse(str,begin,i-1);
			begin=i+1;
		}
		
	}
	reverse(str,0,i-1);
	puts(str);
	return 0;
}