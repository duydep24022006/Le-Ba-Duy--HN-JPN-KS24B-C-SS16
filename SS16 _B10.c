#include <stdio.h>

void deleteArr(int arr[],int size,int deleteIndex){
	for(int i=deleteIndex;i<size;i++){
		arr[i]=arr[i+1];
	}
	size--;
}
int main(){
	int arr[]={5,2,5,7,2,4,83,86,24,2006};
	int length=sizeof(arr)/sizeof(int);
	int deleteIndex=4;
	int (*strDeleteArr)(int [],int ,int)=deleteArr;
	printf("mang truoc khi xoa ");
	for(int i=0;i<length;i++){
		printf("%d ",arr[i]);
	}
	deleteArr(arr,length,deleteIndex);
	printf("\nmang sau khi  xoa ");
	for(int i=0;i<length;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

