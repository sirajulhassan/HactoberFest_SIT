#include <stdlib.h>
#include<stdio.h>
int main() {
        int arr[]={1,2,3,4,5}; 
        int *p=(int*)calloc(sizeof(arr)/sizeof(arr[0]),sizeof(int));
        printf("\n Address of array = %p %p %p %p %p",(p+0),(p+1),(p+2),(p+3),(p+4));
        return 0;
} 
