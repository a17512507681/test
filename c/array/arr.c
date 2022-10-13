#include <stdio.h>
#include <stdlib.h>
#define M 	3





int main (void) {
	

	int i;
	static int arr[M];
	
	printf("该数组占用%ld个字节\n",sizeof(arr));
	printf("arr的初始地址 = %p\n",arr);
	int length = sizeof(arr) / sizeof(arr[0]);
	// arr = {4,5,6};  false ====> 表现当前地址的常量 
	/*
	for(i = 0; i < length; i++) 
		scanf("%d",&arr[i]);
	*/	
	arr[3] = 10;
	printf("arr[3] = %d\n",arr[3]);
	for(i = 0; i < length;i++) 
		printf("%p --> %d\n",&arr[i],arr[i]);



//	printf("%d\n",max(2,8));
//	printf("%d\n",min(2,8));
	exit(0);
}










