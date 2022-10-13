#include <stdio.h>

#include <stdlib.h>

#define LEFT 1
#define RIGHT 100
int main(void) {
	int i;
	int sum = 0;

	int start,end = 10;
	
	i = LEFT;
Loop:	
	 sum += i;
	i++;
	if(i <= RIGHT) 
		goto Loop;

	printf("sum = %d\n",sum);













#if 0

	for(i = LEFT;i <= RIGHT;i++) {
		sum += i;

	}	
	printf("sum = %d\n",sum);
#endif 




	













#if 0
	printf("Please enter:\n");
	scanf("%d",&start);
	do{
		sum += start;
		start++;
	
	}while(start <= end);

	
	printf("start = %d\n",start);
	printf("sum = %d\n",sum);
	
#endif






















#if 0
	i = LEFT;
	
	do{
		sum += i;
		i++;

	}while(i <= RIGHT);

	printf("sum = %d\n",sum);

#endif


















#if 0
// while();
//
	i = LEFT;
	while(i <= RIGHT) {
		sum += i;
		i++;
	}	

	printf("sum = %d\n",sum);

#endif
	
	
	exit(0);

}
