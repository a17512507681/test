#include <stdio.h>
#include <stdlib.h>
/*
*
* int scanf(const char *format,地址表)
*
*/
#define STRSIZE 3
int main(void) {
	int i;
	float f;
	char ch,str[STRSIZE];
	int ret;
	printf("Please enter for i[int]:\n");

	scanf("%d",&i);
	//scanf("%*c%c",&ch);
	getchar();
	scanf("%c",&ch);
	printf("i = %d,ch = %d\n",i,ch);


















#if 0	
	while(1){

		ret =scanf("%d",&i);
		if(ret != 1) 
		{
			printf("Enter error!\n");
			break;
		}
		printf("i = %d\n",i);
	}	

#endif

	//scanf("%s",str);
	//printf("%s\n",str);
	//scanf("%d%f",&i,&f);
	//printf("i = %d\n",i);
	//printf("f = %f\n",f);
	exit(0);
}
