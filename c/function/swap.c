#include <stdio.h>
#include <stdlib.h>

#if 0
void print_value(int num1,int num2) {
	printf("%d  %d\n",num1,num2);

}

#endif

void swap(int *i,int *j){
	int tmp;
	tmp = *i;
	*i = *j;
	*j = tmp;
	

}
int main(void) {

	int i = 3,j = 5;
	
//	print_value(i,j);
	swap(&i,&j);

	printf("i = %d,j = %d\n",i,j);
	exit(0);
}


