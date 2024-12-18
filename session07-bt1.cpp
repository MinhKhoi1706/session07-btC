#include<stdio.h>

int main(){

	int a[5] = {1,2,3,4,5,};
	int length = sizeof(a)/sizeof(a[0]);
	
	for(int i = 0;i < length;i++){
	printf("a[%d] = %d\n", i, a[i]);
	
	}

	return 0;
}
