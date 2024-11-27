#include<stdio.h>

int main(){
	int array[] = {5,10,15,20,25};
	int length=sizeof(array) / sizeof(array[0]);
	
	printf("cac phan tu trong mang la :\n");
	for(int i = 0;i < length;i++){
		printf("array[%d]=%d\n",i,array[1]);
	}
	printf("do dai cua mang la: %d\n",length);
	
	return 0;
}
