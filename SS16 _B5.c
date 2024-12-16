#include <stdio.h>
void ptr(int *a,int value,int index){
	*(a+index)=value;
}
int main(){
	int a[]={1,2,3,4,5,6,7,8,9};
	int value =8386;
	int index =4;
	ptr(&a,value,index);
	int length=sizeof(a)/sizeof(int);
	for(int i=0;i<length;i++){
		printf("%d ",*(a+i));
	}
	return 0;
}
