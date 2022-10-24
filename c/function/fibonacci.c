#include <stdio.h>

#include <stdlib.h>

long func(unsigned long n) {
	if(n <= 2) {
		return 1;
	}else {
		return  func(n-1) + func(n-2);
	}

}


int main(void) {
	int n;
	long int res;
	scanf("%d",&n);
	res = func(n);	
	printf("fib[%d] = %ld\n",n,res);
	exit(0);
}
