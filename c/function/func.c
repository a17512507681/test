#include <stdio.h>
#include <stdlib.h>
// 求自然数阶乘
// 3! = 3 *2*1
// 8! = 8*7*6*5*4*3*2*1
// n! = n*(n-1)!
//	(n-1)! = (n-1)*(n-2)!


int func(int  n) {
	if(n < 0)
		return -1;
	if(n  == 0 || n == 1)
		return 1;
	
	return n * func(n-1);
}




int main(void) {
	 int  n;
	int result;
	scanf("%d",&n);
	
	result = func(n);
	printf("%d的阶乘=%d\n",n,result);
	exit(0);
}
