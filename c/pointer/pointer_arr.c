#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char *name[5] ={"Follow me","Basic","Great","Fortran","Computer"};
	int i,j,k;
	char *temp;



// 选择排序
	for(i = 0; i < 5-1;i++){  // 遍历数组
		k = i;
		for(j = i+1; j < 5;j++)
		{
			if(strcmp(name[k],name[j]) > 0)   // name[k] > name[j] ===> 将小的值下标赋值给大值下标
				k = j;	
			
		}	
			
		if (k != i)      //交换指针指向 
		{
			temp = name[i];
			name[i] = name[k];
			name[k] = temp;	
		}

		
		
	}

	printf("================\n");
	
	for(i = 0;i < 5; i++)
		puts(name[i]);	
	exit(0);
}
