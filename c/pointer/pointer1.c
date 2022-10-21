#include <stdio.h>
#include <stdlib.h>


int main(void) {
	
	int *p = NULL;
	void *q = NULL;
	
	*p = 1;	

	printf("%p ----> %d\n",p,*p);

	
	exit(0);
	
}
