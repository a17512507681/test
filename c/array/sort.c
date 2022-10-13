#include <stdio.h>
#include <stdlib.h>
// 冒泡排序
void sort_array(void) {
	int i,j,temp;
	
	int array[10] = {2,44,654,33,17,2,22,99,15,38};
	// 数组长度
	int length = sizeof(array)/sizeof(array[0]);
	printf("排序前的数的顺序为:\n");
	for(i=0;i<length;i++)
		printf("%-4d",array[i]);
	putchar('\n');
	



	// 进行冒泡排序
	for(i = 0;i <  (length-1); i++) {   // 10个数排10-1趟 
		for(j = 0; j < (length-1)-i; j++) {  // 换位依次递减
			if(array[j] > array[j+1]) {  // 当前值与下一位值进行对比
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;		
			}
		}
	}

	printf("排序后的数的顺序是:\n");
	for(i = 0; i < length; i++) 
		printf("%-4d",array[i]);
	putchar('\n');

}

// 选择排序
void sort_select() {
	int i,j,temp;
	int arr[10] = {23,45,90,76,13,55,76,45,3,8};
	int length = sizeof(arr)/sizeof(arr[0]);
	printf("排序前的数字为:\n");
	for(i = 0; i < length;i++)
		printf("%-4d",arr[i]);
	printf("\n");


	for(i = 0; i < (length-1);i++) {
		for(int j = i+1;j < length;j++) {  
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	printf("排序后的顺序为:\n");
	for(i = 0;i < length; i++) 
		printf("%-4d",arr[i]);
	printf("\n");
	
}
// 选择排序(递归)        
void quick_sort(int array[],int left,int right) {
	int i = left;
	int j = right;
	int temp;
	int pivot = array[(left+right)/2];
	while(i <= j) {
		while(array[i] < pivot) { // 寻找大于基点的元素,否则向后查找
			i++;
		
		}
		while(array[j] > pivot) {  // 寻找小于基点的元素,否则向前查找
			j--;
		}


		if(i <= j) {  // 如果i <= j 找到了就进行交换
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			j--;
		}
	
	
	}
	// right 是原数组最右边的元素下标    right=length-1
	if(i < right) {
		quick_sort(array,i,right);
	
	}
	// left = 0
	if(left < j) {
		quick_sort(array,left,j);
	}

}
int main(void) {
	//sort_array();
	sort_select();
	//quick_sort();
	
	int array[] = {23,155,12,6643,134,275,26,56,26};  
	
	int length = sizeof(array)/sizeof(array[0]);
	printf("排序前的结果为:\n");
	for(int i = 0; i < length; i++) 
		printf("%-5d",array[i]);
	putchar('\n');
	quick_sort(array,0,length-1);
	printf("排序后的结果为:\n");
	for(int i = 0; i < length; i++) {
		printf("%-5d",array[i]);
	}
	printf("\n");
	
}
