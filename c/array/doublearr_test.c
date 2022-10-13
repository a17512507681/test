#include <stdio.h>
#include <stdlib.h>
#define M 2
#define N 3
#define K 2
// 行列互换
static void change(void) {
	int a[M][N] = {1,2,3,4,5,6},b[N][M];
	int i,j;

	for(i = 0; i< M;i++) {
		for( j=0; j < N;j++) {
			printf("%d ",a[i][j]);
			b[j][i] = a[i][j];
		
		}
		putchar('\n');
	}
	putchar('\n');
	for(i = 0; i<N; i++) {
		for(j = 0; j < M;j++) {
			printf("%d ",b[i][j]);
		}
		putchar('\n');
	}
	
}
// 求最大值
static void max(void) {
	int a[M][N]={43,4,23,89,9,7};
	int i,j;
	int max = a[0][0],row = 0,column = 0;

	for(i = 0; i <M; i++) {
		for(j = 0; j <N; j++) {
		
			if(max < a[i][j]) {
				max = a[i][j];
				row  = i;
				column = j;
			}
		
		}


	
	}
		printf("max = a[%d][%d] = %d\n",row,column,max);
		


}

// 求各行和各列的和
static void sum(void) {
	// 原始数据为 四行三列
	int a[5][4] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	int i,j;
	for(i = 0; i < 4;i ++) {
		for(j = 0 ; j < 3; j++) {
			a[4][3] += a[i][j];
			 
			a[4][j] += a[i][j];

			a[i][3] += a[i][j];
		
			a[4][3]  =a[4][0] +  a[4][1] + a[4][2]+a[0][3] +a[1][3] + a[2][3] + a[3][3];

			}
	}
	


	for(i = 0; i < 5; i++) {
		for(j = 0; j < 4; j++) {
			printf("%-4d ",a[i][j]);
		
		}
		putchar('\n');
	}

}

// 矩阵乘积
static void mult(void) {
	int a[M][N] = {1,2,3,4,5,6};
	int b[N][K]={1,0,0,1,1,0};
	// 存储到c中
	int c[M][K]={0};
	int i,j,k;
	printf("打印a的矩阵:\n");
	for(i = 0; i < M;i++) {
		for(j =0; j < N;j++) {
			printf("%-4d",a[i][j]);
		}
		putchar('\n');
	}	
	printf("打印b的矩阵:\n");
	for(i = 0; i < N; i++) {
		for(j = 0; j < K ;j++){ 
			printf("%-4d",b[i][j]);
		}
		putchar('\n');
	}

	printf("======================\n");
	for(i = 0; i <M;i++) { //i 控制行
		for(j = 0; j < K; j++) {  // j 控制列
			for(k = 0; k <N;k++) {
					// a相应的行乘以b相应的列  对应法则(对应相乘再相加)
				c[i][j] += a[i][k] * b[k][j];  // a相应的行为i,b相应的列为j

			} 
		
		}

	}





	printf("==========================\n");
	printf("矩阵乘积可得:\n");
	for(i = 0; i <M; i++) {
		for(j = 0; j < K;j++) {
			printf("%-4d ",c[i][j]);

		}
		putchar('\n');
	}

	printf("===================\n");
	printf("以下第一个索引号为行,第二个索引号为列:\n");
	for(i = 0; i < M; i++) {
		for(j = 0; j <K; j++)
			printf("c[%d][%d] ",i+1,j+1);
		putchar('\n');
	}

	
}
int main(void) {
	//change();

	
	//max();
	//sum();
	mult();	
	exit(0);
}
