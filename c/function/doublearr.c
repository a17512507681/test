#include <stdio.h>
#include <stdlib.h>
#define M 3
#define N 4
/*
* -> int a[M][N] = {...}; 
*    int *p = *a;
*   int (*q)[N] = a;
*
*->  a[i][j]        *(a+i)+j              a[i]+j          p[i]      *p 
*    q[i][j]         *q                    q               p+3      q+2
*
*
*    return 
*    int              int *              int *             int      int 
*    int              int *               int (*)[N]       int *     int (*) [N]
*
*/

void print_arr(int *p,int n) {
	int i;	
	for(i = 0; i < n;i++){
		printf("%d ",*(p+i));


	}

		putchar('\n');


}




//void print_arr1(int (*p) [N],int m,int n)    // 定义数组指针
void print_arr1(int p[][N],int m,int n)
{	int i,j;
//	printf("sizeof(p) = %ld\n",sizeof(p));
	for(i = 0; i < m;i++){
		for(j = 0; j < n;j++)
		//	printf("%-4d ",*(*(p+i)+j));
			printf("%-4d ",p[i][j]);	
		printf("\n");
	}	



}
// 平均值
float  average_score(int *p,int n) {
	int i;
	float sum = 0;
	for(i = 0; i < n; i++) {
		sum += p[i];
	}
	return sum / n;
}
	
#if 0
void find_num(int (*p)[N],int num) {
	int i;	
	for(i = 0; i < N;i++) {
		printf("%d ",*(*(p+num) + i));
	}
	putchar('\n');

}

#else
int *find_num(int (*p)[N],int num) {
	if(num > M-1)   // 如果没有这个同学就返回空
		return NULL;
	return *(p+num);     // 一维数组起始位置返回	

	}



#endif
int main(void) {


	int i,j;
	int a[M][N] = {1,2,3,4,5,6,7,8,9,10,11,12};

	
// 	print_arr(*a,M*N);   // &a[0][0]    a[0]    *(a+0)
	
//	printf("sizeof(a) = %ld\n",sizeof(a));// 12 * 4 = 48 	
//	print_arr1(a,M,N);

	float ave;
	int num = 12;
	ave = average_score(*a,M*N);
	printf("ave = %.2f\n",ave);

	
	//find_num(a,num);  // 传行指针


	int *res;
	res = find_num(a,num);
	if(res != NULL) {
		for(i = 0;i < N; i++) {
		
			printf("%d ",*(res+i));
		}
		printf("\n");

	}
	else{
		printf("Can not find!\n");
	} 
	exit(0);


}
