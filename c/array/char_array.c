#include <stdio.h>
#include <stdlib.h>
#define N 32
int main(void) {
	char str[N],str1[N],str2[N];  // 字符串占用多一个'\0'
	int i;
	
//	gets(str);  // gets 赋值   gets 比较危险
	//puts(str);   // puts 输出
/*
	for(i = 0; i< N; i++) 
		printf("%c ",str[i]);

*/
	// str = "hell0"     [False]
	scanf("%s%s%s",str,str1,str2);
	printf("%s\n%s\n%s\n",str,str1,str2);
	putchar('\n');
	

	exit(0);
}
