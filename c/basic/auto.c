#include <stdio.h>
#include <stdlib.h>


int i = 0;

void print_star(void) {
	for(i = 0; i<5;i++)
		printf("*");
	printf("\n");
	printf("[%s] i = %d\n",__FUNCTION__,i);

}
int main(void) {
	for(i = 0; i < 5;i++)
		print_star();
	printf("[%s] i = %d\n",__FUNCTION__,i);
	
	exit(0);
	
}


























#if 0
int i = 100;

func(int i) {
	printf("i = %d\n",i);
}
int main(void) {
	 int i = 3;
	func(i);
	{
		int i = 5;
		printf("i = %d\n",i);
		
	}
	exit(0);

}

#endif


#if 0
void func(void) {

	static int x = 0;   // static 修饰的变量只用一块空间

	x++;
	
	printf("%p -> %d\n",&x,x);
}



int main(void) {

	func();	
	//printf("i = %d\n",i);
	func();
	exit(0);
}

#endif
