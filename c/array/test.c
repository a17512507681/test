#include <stdio.h>
// 进制转换
static void base_convert(void) {
	int num,base;
	int n[128], i = 0;
	printf("Please enter the converted num:");
	scanf("%d",&num);	
	printf("Please enter the base:");
	scanf("%d",&base);
	do{
	n[i] = num % base;
	num = num / base;
        i++;
	}while(num != 0);

	for(i = i - 1; i >= 0; i--) {
		if(n[i] >= 10)
		       printf("%c",n[i]-10 + 'A');	
		else
		printf("%d",n[i]);
	}	
	putchar('\n');
}
// 删减法求质数
static void primer(void) {
	char primer[1001] = {0};
	int i,j;
	for(i = 2; i < 1001;i++) {
		if(primer[i] == 0){   
		// i = 3 时候:    j = 6    j = 3*2+3   j = 3*3+3   j = 3*4+3    
		for(j = i*2;j < 1001;j = j+i) // i = 2 时候j =  2*1+2  j = 2*2+2  j = 2*3+2  // // 从(4) 二的整倍数开始删除   // 删除倍数值
		// i = 4  4+2  4+2+2     
			primer[j] = -1;
			
	
		}
	}
	
	for(i = 2;i < 1001;i++){
		if(primer[i] == 0){
			printf("%d is a primer.\n",i);
		}
	
	}
	

}
int main(void) {
	//base_convert();
	primer();
	return 0;
}
