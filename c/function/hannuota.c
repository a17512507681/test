#include <stdio.h>
#include <stdlib.h>
// 汉诺塔   
void hannuota(int n,char x, char y,char z) {
	if(n == 1){ 
		printf("%c ====> %c\n",x,z);

	}
	else {
		hannuota(n-1,x,z,y); // 将 n-1个盘子从 x ===>  y   z为工具柱
		printf("%c ====> %c\n",x,z); // 将x柱底下的最大的盘子移动至z柱
		hannuota(n-1,y,x,z);  // 将 n-1个盘子从 y ====> z  x为工具柱

	}
		


}




int main(void){
	hannuota(8,'a','b','c');

	exit(0);
}
