#include <stdio.h>
#include <stdlib.h>
//函数指针
	

int add(int a,int b) {
	return a + b;
}
int sub(int a,int b){
	return a - b;

}
int main(void) {
	int a = 3,b = 5;
	int ret;
	

//	int (*p)(int ,int);   // 函数指针
//	int (*q)(int ,int);   
	
	
	// int (int ,int )  *funcp[2];
	// 函数指针数组
	// 数组有两个元素,每个元素都是指针 指针指向函数
	int (*funcp[2])(int ,int );
	
	//p =add;
	//q = sub;
	funcp[0] = add;
	funcp[1] = sub;
	int i;
	for(i = 0; i< 2;i++)
	{
		ret = funcp[i](a,b);
		printf("%d\n",ret);
	}
#if 0
	//ret = add(a,b);
	ret = p(a,b);
	printf("%d\n",ret);
	ret = q(a,b);
	printf("%d\n",ret);
#endif

	
	exit(0);
}
