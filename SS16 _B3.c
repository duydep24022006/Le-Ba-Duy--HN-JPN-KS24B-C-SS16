#include <stdio.h>

void swap(int *a,int *b,int *c){
	*c=*a+*b;
}
int main(){
	int a=5;
	int b=10;
	int c;
	swap(&a,&b,&c); 
	printf("tong cua a va b la %d",c);
	return 0;
}
