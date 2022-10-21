#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int i =1;
	int *p;
	
//	float *q;
//	double *d;
//	char *c;

	
#if 0
	printf("%ld\n",sizeof(i));
	printf("%ld\n",sizeof(p));
	printf("%ld\n",sizeof(q));
	printf("%ld\n",sizeof(d));
	printf("%ld\n",sizeof(c));
	
#endif

	p = &i;

	int **q = &p;
	printf("i = %d\n",i);   // 1
	printf("&i = %p\n",&i); // i的地址
	printf("====================\n");
	printf("p = %p\n",p);  // i的地址
	printf("&p = %p\n",&p); // p的地址
	printf("*p = %d\n",*p);   // i的值    *p = *(&i) = i
	printf("=====================\n");
	printf("q = %p\n",q);  // p 的地址
	printf("&q = %p\n",&q); // q的地址
	printf("*q = %p\n",*q);  // *q = *(&p) = p = &i
	printf("**q = %d\n",**q);// *(*q) = *(&i) = 1 
	
	exit(0);
	
}
