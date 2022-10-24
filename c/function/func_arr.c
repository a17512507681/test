#include <stdio.h>
#include <stdlib.h>

/*
*  int a[N] = {1,2,3,4,5,6};
*  int *p = a;
*  
*  a   *a   a[0]     &a[3]   p[i]    p    *p      p+1
*
*
*
*  --> int *      int  int  int *    int   int *    int    int *
*/
//void print_arr(int *p,int n)
#if 0
void print_arr(int arr[],int n)
{

	int i;
	printf("%s:%ld\n",__FUNCTION__,sizeof(arr));


	for(i = 0; i < n; i++)
		printf("%d ",arr[i]);
	putchar('\n');
}


#endif
void func(int *p,int n) {
	
	int i = 0,m,temp;
	
	m = (n-1)/2;  // 中间数的下标
	
	for(i = 0; i <= m;i++){
		int j = n-1-i;   // 最后一个元素下标
		temp = *(p+i);
		*(p+i) = *(p+j);
		*(p+j) = temp;
	}




}
int main(void) {
	int arr[] = {1,3,5,7,9};
	

//	printf("%s:%ld\n",__FUNCTION__,sizeof(arr));	
	
//	print_arr(arr,sizeof(arr)/sizeof(*arr));
	int i;

	for(i = 0; i < sizeof(arr)/sizeof(*arr); i++)
		printf("%d ",arr[i]);
	putchar('\n');
	func(arr,sizeof(arr)/sizeof(*arr));
	
	for(i = 0; i < sizeof(arr)/sizeof(*arr); i++)
		printf("%d ",arr[i]);
	
	putchar('\n');
	exit(0);
}
