#include <stdio.h>
#include <stdlib.h>
// 斐波那契数列
static void feibonaci(void) {
	int i;
	int fib[10] = {1,1};
	int length = sizeof(fib)/ sizeof(fib[0]);
	for(i = 2; i < length; i++) {
	fib[i] = fib[i-1] + fib[i-2];

	}
	for(i = 0; i < length;i++)
		printf("%d ",fib[i]);
	printf("\n");
	int j = length -1;
	i = 0;
	int temp;	
	while(i < j) {
		temp = fib[i];
		fib[i] = fib[j];
		fib[j] = temp;

		i++;
		j--;
	}
	for(i = 0; i < length; i++) 
		printf("%d ",fib[i]);
	printf("\n");
	return ;
}
int main(void) 
{
	feibonaci();
	exit(0);
}
