#include <stdio.h>

int sort(int arr[],int size){
	for(int i=0;i<size;i++){
		int key = arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}
int main(){
	int arr[]={5,2,5,7,2,4,83,86,24,2006};
	int length=sizeof(arr)/sizeof(int);
	int (*strSort)(int [],int ,int)=sort;
	sort(arr,length);
	printf("mang sau khi xap xep ");
	for(int i=0;i<length;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

