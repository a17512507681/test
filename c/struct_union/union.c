#include <stdio.h>
#include <stdlib.h>
// 共用体:  多个成员公用同一块空间
union test_un
{
	int i;  // 4 
	float f;  // 4
	//double d; // 8
	char ch;  // 1


};
 
int main(void) {
	union test_un a;
	union test_un *p = a;
	union test_un arr[3];
	p->f = 345.678;
	printf("%ld\n",sizeof(a));	
	// printf("%f\n",a.f);	
	//printf("%d\n",a.i);

	printf("%c\n",a.ch);
	
	//func(&a);
	exit(0);
}
