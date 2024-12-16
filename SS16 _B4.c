 #include <stdio.h>

int main(){
	char a[]="em xin diem a";
	int length=strlen(a);
	char *aprt=a;
	for(int i=0;i<length;i++){
		printf("%c",*(aprt +i));
	}
	
	return 0;
}
