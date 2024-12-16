#include <stdio.h>

int search(int arr[],int end,int value){
	int start=0;
	int mid;
	while(start<=end){
		mid=(start + end)/2;
		if(arr[mid]==value){
			return mid;
		}else if(arr[mid]<value){
			start=mid+1;
		}else{
			end=mid-1;
		}
	}
	return -1;
}
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int value=2;
	int end=(sizeof(arr)/sizeof(int))-1;
	int (*ptrSearch)(int[],int,int)=search;
    int index = ptrSearch(arr, end, value);
	if(index!=-1){
		printf("vi tri o stt %d",index);
	}else{
		printf("gia tri can tim khong co trong mang");	
	}
	return 0;
}
