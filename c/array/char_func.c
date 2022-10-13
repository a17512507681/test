#include <stdio.h>

#include <stdlib.h>
#include <string.h>
#define STRSIZE 32
/*strlen & sizeof
  strcpy & strncpy
  strcat & strnccat
  strcmp & strncmp
*/
int main(void) {

	char str[STRSIZE] = "hello";
	char str1[STRSIZE] = "helloa";  // 97a  98b 99c 100d 101e 102f 103g 104h
	// 两个字符串进行比较
	//printf("%d\n",strcmp(str,str1));// str和str1相等为0  大则为正值  小则为负值
	// 比较字符串前n位
	//strncmp
	printf("%d\n",strncmp(str,str1,5));  // 比较前5个字符
	
	//strcat(str," ");  // 将指定的字符串追加到str的结尾
	//strcat(str,"world!");
	//strncat(str," ",STRSIZE);
	//strncat(str,"World!",STRSIZE);
	//puts(str);
	/*
	printf("%ld\n",strlen(str));  // 打印字符的长度不包括尾0	
	printf("%ld\n",sizeof(str));  // 打印真正所在的字节数
	*/
	
	//strcpy(str,"abcde");  // 将abcde 拷贝到str中
	//strncpy(str,"abcde",STRSIZE);
	//puts(str);	

	exit(0);
}
