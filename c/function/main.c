#include <stdio.h>
#include <stdlib.h>


int main(int argc,char *argv[]) {  // char *argv[] 字符指针数组

	int i;
	
	printf("argc = %d\n",argc);

	//for(i = 0; i < argc;i++) 
	for(i = 0; argv[i] != NULL;i++)
		puts(argv[i]);

	//printf("Hello\n");
	//return 0;    一个进程的返回值状态是给它的父进程看的
	//exit(0);



	
}

