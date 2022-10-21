#include <stdio.h>
#include <stdlib.h>



/*
* const int a;
* int const a;
*
* const int *p;
* int const *p;
*
* int *const p;
* const int *const p;
*/
#define PI 3.14
int main(void) {
	int i =1;
	int j = 100;

	const int *const p = &i;   // 第一个const 修饰得是*p 第二个const 修饰得是p
	
// F  p = &j;
// F	*p = 10;
	printf("%d\n",*p);


















#if 0
	// 指针常量
	// 指针得指向不能发生变化  指针指向的目标变量可以发生变化
	int i = 1;
	int j = 100;
	int *const p = &i;
	
// T	*p = 10;	

// F	p = &j;
	printf("%d\n",*p);

#endif












	#if 0
	// 常量指针

	int i = 1;	
	int j = 100;
	const int *p = &i;   // 常量指针 指针指向可以变 但是指针指向的目标变量不能变

	// T i = 10
	// F *p = 10;
	p = &j;  // 地址指向
	printf("%d\n",*p);
#endif















	#if 0
	//2*PI*r;
	const float pi = 3.14;
	// F pi = 3.14159;

	//const float *p = &pi;   // 
	*p = 3.14159;
	
	printf("%f\n",pi);
	
#endif
	exit(0);
}
