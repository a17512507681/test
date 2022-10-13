#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926
#define ADD (2+3)
#define MAX(a,b) \
	({typeof(a) A = a,B = b;((A)>(B)?(A):(B));})
#if 0
static int MAX(int a,int b) {
	return a > b ? a : b;

}
#endif
int main(void) {
	int i = 5,j = 3;
	printf("i = %d\tj = %d\n",i,j);
	printf("%d\n",MAX(i++,j++));
	printf("i = %d\tj = %d\n",i,j);
//	printf("%d\n",ADD*ADD);	
	
	exit(0);
}
