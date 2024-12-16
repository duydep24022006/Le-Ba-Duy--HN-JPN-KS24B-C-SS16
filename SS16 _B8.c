#include <stdio.h>
void reverseStringFunction(char str1[],int size,char str2[]){
	int j=0;
	for(int i=size-1;i>=0;i--){
		str2[j]=str1[i];
		j++;
	}
}
int main(){
	char  inputString[100];
	char  reverseString[100];
	printf("moi ban nhap so can dao ra ngoai man hinh ");
	fgets(inputString,100,stdin);
	int length=strlen(inputString);
	printf("%d",length);
	char(*prtReverseString)(char [],char [])=reverseStringFunction;
	reverseStringFunction(inputString,length,reverseString);
	printf("chuoi ban vua nhap: ");
	for(int i=0;i<length;i++){
		printf("%c",inputString[i]);
	}
	printf("\nchuoi ban sau khi dao: ");
	for(int i=0;i<length;i++){
		printf("%c",reverseString[i]);
	}
	return 0;
}
