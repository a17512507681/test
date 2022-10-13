#include <stdio.h>
#include <stdlib.h>

int main(void) {
/*
	int i = 12; // B1100
	int j = 9; // B1001
	
	i = i | 1 << 2;   // 1100  // 将第二位 置1
	
*/

	int num = 23792;
	// 101110011110000   // 6-10
	int p1 = 6,p2 = 10;   //
	int temp;
	if(p1 <= p2) {
		temp = num >> (p1);   // 1011 10011
	}
	for(int i = (p2-p1);i >= 0;i--) {

		putchar(((temp >> i) & 1)? '1':'0');   // 10011 
	}
	putchar('\n');
	
	
	
	
	exit(0);
}
