#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int main(void) {

	char *str = "hello";

		
	printf("%ld ----> %ld\n",sizeof(str),strlen(str));

// False 	strcpy(str,"World");
	str = "World";
	puts(str);


















#if 0
	char str[] ="Hello"; //
//  F str = "World";
	printf("%ld---> %ld\n",sizeof(str),strlen(str));  // sizeof包括'\0'   strlen 不包括

	strcpy(str,"World");

	puts(str);

#endif 










#if 0
	char str[] = "I love China";
	
	char *p  = str+7;
	puts(str);	
	puts(p);
#endif
	exit(0);
}
