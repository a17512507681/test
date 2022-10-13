#include <stdio.h>
#include <stdlib.h>
#define M 2
#define N 3
int main(void) {
	// 定义两行三列的数组   行号可省略,列号不可省略
	int a[][N] = {1,3,4,6,7};
	
	int i,j;
#if 0
	for(i = 0; i<M;i++) {
		for(j = 0; j < N;j++) {
			scanf("%d",&a[i][j]);
		}
	}
#endif
	printf("a = %p\n",a);
	printf("a+1 = %p\n",a+1);   // a[2][0]  的地址
	printf("a+1 = %d\n",a+1);
	for(i = 0; i < M;i++) {
		for(j = 0 ; j<N;j++){
			printf("%p ---> %d\n",&a[i][j],a[i][j]);
		}
		printf("\n");
	}
	

	exit(0);
}

