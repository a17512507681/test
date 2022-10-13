#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define STRSIZE 32
/*
*input output 
*   printf();
*
*/
int main(void) {
	int i = 255;
	float f = 123.456;	
	char str[STRSIZE] = "HelloWorld";
	double dou =  123.456;
	long long l = 123456;


	printf("[%s:%d]before while().\n",__FUNCTION__,__LINE__);
// 	while(1);
	sleep(5);
	printf("[%s:%d]after while().\n",__FUNCTION__,__LINE__);













	//printf("HelloWorld!!\n");
	// %e 科学计数法
	//printf("%d %e\n",i,f,l);

//	printf("dou = %lf\n",dou);
//	printf("l = %lld\n",l);
	// printf("str = %-10.5s[over]\n",str);  // - 左对齐

	//printf("i = %#x\ni = %#o\n",i,i);
	//printf("f=%8.1f\n",f);
	

	//printf("i =%2d\n",i);
	// printf("f = %20f\n",f);


	exit(0);
}




