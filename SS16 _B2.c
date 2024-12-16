#include <stdio.h>

void swap(int *a,int *b){
	int temp = *a;
	*a=*b;
	*b=temp;
}
int main(){
	int a=0;
	int b=10;
	swap(&a,&b); 
	printf("ham sau khi hoan doi a = %d ,b =%d",a,b);
	return 0;
}
