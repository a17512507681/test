#include <stdio.h>
#include <stdlib.h>


// TYPE NAME = VALUE;
int main(void) {

	int a[2][3] = {1,2,3,4,5,6};
	int *p = *a;
	int i,j;
	
	int (*q)[3] = a;   // 数组指针


















#if 0
 // Wanning	//p =a;


	p = &a[0][0]; //*(a+0),*a;
	
	for(i = 0; i < 6; i++) 
		printf("%d ",p[i]);	
	
	printf("\n");

#endif
	


	

	printf("%p------->%p\n",a,a+1);
	printf("%p------->%p\n\n",q,q+1);
	for(i = 0; i < 2; i++) {
		for(j= 0; j < 3;j++)
			printf("%p---->%d ",*(q+i)+j,*(*(q+i)+j));
		
			printf("\n");
	}




	//printf("%p \n",a+1);

	exit(0);
}
