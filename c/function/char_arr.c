#include <stdio.h>
#include <stdlib.h>


char *mystrcpy(char *dest,const char *src) {
	char *ret = dest;	
	if(dest != NULL && src != NULL)	  // 保证两个指针不能为空
		while((*dest++ = *src++) != '\0');  // 将src 里面的内容拷贝到dest 直到不是'\0'结束循环

	return ret;
}

char *mystrncpy(char *dest,const char *src,size_t n) {
	int i;
	for(i = 0; i < n && (dest[i] = src[i]); i++);  // 并且src 中有 n个字符
	for(;i <n;i++) // 确认现在是否有n个字符	
	dest[i] = '\0';
	return dest;



}
int main(void) {
	
	char str1[] = "Helloworld";
	char str2[128];

	//mystrcpy(str2,str1);
	mystrncpy(str2,str1,5);
	puts(str2);
	exit(0);
}
