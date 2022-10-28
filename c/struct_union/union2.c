#include <stdio.h>
#include <stdlib.h>

union {
	struct 
	{
		char a:1;
		char b:2;
		char c:1;
	
	}x;

	char y;  // 8bit  
}w;
int main(void) {
//  101 - 010    01 -> -1	
	w.y =6;  //  3 ==>  100 -1 ->   011  ->  100  -> 10 ---> 十进制为 2   --> 取反为-2 
	printf("%d\n",w.x.b);  // a 是用一个数字得补码形式来看待 逆运算|a| 得二进制形式在加一   ==> 先减一再取反
	
	exit(0);
}
