#include <stdio.h>
#include <stdlib.h>

int  max(int i,int j,int k) {
	
	int temp;
	temp = i > j ?i:j;
	return temp > k? temp:k;

	
}

int min(int i,int j,int k) {

	if(i < j)
		return i;
	else if(j < k)
		return j;
	else 
		return k;

}

int dist(int i,int j,int k){
	return max(i,j,k) - min(i,j,k);


}
int main(void) {
	int i = 10 ,j = 30,k = 20 ;

	
	printf("最大值为%d\n",max(i,j,k));
	printf("最小值为%d\n",min(i,j,k));
	printf("两值之差为%d\n",dist(i,j,k));
	exit(0);
}
