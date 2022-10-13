#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

#define PI 3.14
static void test1(void) {
	printf("投资问题:\n");
	double sumA = 100,sumB = 100;
	int i = 0;
	
	while(sumB <= sumA) {
		sumA = sumA + 100 * 0.1;
		sumB = sumB + sumB * 0.05;
		i++;

	}

	printf("所需的年份为%d年\n",i);
	printf("sumA的资产总额.%.2f\n",sumA);
	printf("sumB的资产总额.%.2f\n",sumB);


}

static void test2(void) {
	double sum_even = 0.0,sum_odd = 0.0;
	int ce = 0,co = 0;
	int temp;
	scanf("%d ",&temp);
	while(temp != 0) {
		if(temp % 2 ==0){
			sum_even += temp;
			ce++;
		} else {
			sum_odd += temp;
			co++;
		}
		scanf("%d",&temp);
}
	printf("偶数的个数%d,偶数的平均值%.2f\n",ce,sum_even/ce);
	printf("奇数的个数%d,奇数的平均值%.2f\n",co,sum_odd/co);
}


static void test3(void) {
	char str[40];
	

	memset(str,0,sizeof(str));  // 初始化字符数组
	printf("请输入一串字符: ");
	fgets(str,40,stdin);  // 标准输入 40 个字符  加上结束符 '\0'
	int sum = 0;
	int i =0;
	while(str[i] != '\0' && i < 40) {
		if(str[i] == 'a' || str[i] == 'A' || str[i] =='e' || str[i] == 'E'||
		str[i] == 'i'||str[i] == 'I'|| str[i] == 'o'|| str[i] == 'O'|| str[i] == 'u'|| str[i] == 'U'){  	
			sum++;  // 如果是元因字母 sum++
		}
		++i;  // 继续判断下一个字符
	}
	printf("总元音个数为%d\n",sum);
}

static void test4(void) {
	int a1 = 1,a2 = 1;
	int temp;
	printf("斐波那契数列第40项为:\n");
	printf("%d %d ",a1,a2);
	
	for(int i = 2; i < 40; i++) {
		if(i % 5 == 0) {
			printf("\n");
		}
		temp = a1 + a2;
		printf("%d ",temp);
		a1 = a2;
		a2 = temp;
		
	}
	printf("\n");

}

static void test5(void) {
	printf("99乘法表打印:\n");
	
	for(int i = 1; i <= 9; i++) {
		for(int j = 1; j <= i; j++) {
			printf("%d ✖ %d = %-2d ",j,i, j*i);
		}
		printf("\n");

	}
}

static void test6(void) {
	
	printf("百钱买百鸡.\n");
	// 显示有0只的情况
	for(int i = 0; i <= 20; i++) {  // 鸡公   100/5
		for(int j= 0; j <= 33;j++) {   // 鸡母     100/3
			for(int k =0; k <= 99; k = k+3) {   // 鸡雏       
				if(i*5+j*3+k/3 == 100) {
					if(i+j+k == 100) {
						printf("公鸡:%d,母鸡:%d,鸡雏:%d.\n",i,j,k);
					}
				}
			}
		}
	}
	
}


static void test7() {
	printf("打印水仙花数:\n");
	int x; // 个位 
	int y; // 十位 
	int z;  // 百位
	
	int i; 
	for(i = 100; i < 1000; i++) {
		x = i % 10; // 个位     // 153 %10 ==  3 
		y = i / 10%10;  // 十位   // 153 / 10 == 15.3 % 10 == 5
		z = i / 100%10;  // 百位  // 153 / 100  == 1.53 % 10 == 1
		if(pow(x,3) + pow(y,3) + pow(z,3) == i) {
			printf("%d\n",i);
		}
	}		
}


static void test8() {
	printf("求出1000以内的质数:\n");
	bool mark;
	int count;	
	for(int i = 2; i<= 1000;i++) {   // 遍历数字
		mark = true;    
			// 当i = 10      j <= 根号10 
		for(int j = 2; j <= sqrt(i); j++) {
			//  10 % 2 == 0
			if(i  % j == 0) {
				mark = false;

				break;
			}
		
		}
		if(mark) {
			printf("%d\t",i);
			count++;
			if(count % 8 ==0) {
				printf("\n");
			}
		}	
	
	}
		
	
			

}

static void test9() {
	int line = 6,i,chars = 6;
	char ch;
	for(i = 0; i<line;i++) {
		for(ch = 'A'+i; ch < 'A' + chars;ch++){
			printf("%c",ch);
		}
		printf("\n");
	}
		
	
}

static void test10() {
	printf("输出钻石型:\n");
	for(int i = 1;i <= 4;i++) {
		for(int j = 1; j <= 4-i;j++) {
			printf(" ");
		}
		for(int k =1; k <= 2*i-1;k++) {   // 打印星号 放大一倍
			printf("*");
		}
		printf("\n");
	}
	

	// 打印下星型
	for(int i = 1; i <= 3;i++) {
		
		for(int j = 1; j <= i;j++) {  // 
			printf(" ");
		}
		for(int k = 1; k <= 7-2*i;k++) {  // 打印星号
			printf("*");
		}
		printf("\n");
	}

}

static void test11() {
	int num;
	int sum = 0;
	printf("从终端输入n个数,求和:\n");
	printf("Please enter the first integer (q the quit):\n");
	while(scanf("%d",&num) == 1) {
		sum += num;
		printf("Please enter the next integer (q the quit):\n");
	}
	
	printf("sum = %d\n",sum);
}

static void test12() {
	int r;
	float area;
	
	for(r = 1;area <= 100; r++ ) {
		area = PI * pow(r,2);
		
		if(area > 100)
			break;
		printf("area = %.2f\n",area); 
		
	}

}
int main(void) {
	//test1();
	//test2();
	


	//test3();
	//test4();
	//test5();
	//test6();
	//test7();
	//test8();
	//test9();
	//test10();
	//test11();
	test12();
	exit(0);
}
