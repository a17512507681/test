#include <stdio.h>
#include <stdlib.h>

// TYPE NAME = VALUE;
// VALUE = a[i]= *(a+i) = *(p+i) = p[i]
// &a[i]: &a[i] = (a+i)   p+i = &p[i]
int main(void) {
	
	int a[] = {5,1,7,2,8,3};
	int y;
	int *p = &a[1];

	y = (*--p)++;  // y = 5     (*--p) = a[0]   = 6 
	
	printf("y = %d\n",y);
	printf("a[0]= %d\n",a[0]);  // a[0] = 6


















/*
	int *p = (int [3]){1,2,3};
	int i;
	
	for(i =0; i <3;i++)
		printf("%p -----> %d\n",&p[i],p[i]);

*/
	
	


	
#if 0
	int a[3];
	
	int *p = a;
	int i;
	for(i = 0; i < sizeof(a)/sizeof(a[0]); i++)
		printf("%p -----> %d\n",&a[i],a[i]);
	for(i = 0; i <sizeof(a)/sizeof(a[0]);i++)
		scanf("%d",p++);	
	
	p = a;  // 将 p 重新回到a得位置

	// 
	for(i = 0; i < sizeof(a)/sizeof(a[0]); i++,p++)
		printf("%p ---->%d\n",p,*p);
	
	

#endif

















#if 0
	int a[3] = {1,2,3};
// a和p最本质得区别就是 a是常量p是变量	
	int *p = a;	
	int i;
	p++;  // p得指向位置变了
	printf("%p ---> %p\n",a,a+1);
	printf("%p ---> %p\n",p,p+1);

	printf("===================\n");

	int length = sizeof(a)/sizeof(*a);  // a[0]

	for(i = 0; i <length; i++)
		printf("%p --> %d\n",a+i,a[i]);
	//	printf("%p --> %d\n",p+i,*(a+i));
	//	printf("%p --> %d\n",p+i,*(p+i));  // p+i 取值
		
	printf("\n");

	
	
#endif	
	exit(0);
}



