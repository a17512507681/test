#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define WEIGHT 3.0e-23
#define QUART 950
// 夸脱水数 * 一夸脱水的质量 / 一个水分子的质量 
static void water(void) {
	float num;
	double sum;
	printf("Please input for num:");
	scanf("%f",&num);	
	if(num <= 0)
	{
		fprintf(stderr,"Input error!\n");
		exit(1);
	}	
	sum = num * QUART/WEIGHT;
	printf("total is %e\n",sum);  // 采用科学计数法输出
	
	return ;
	
}
static void area(void) {
	float a,b,c;
	float s,area;
	printf("Please input:");
	scanf("%f%f%f",&a,&b,&c);
	
	if(a+b <= c || b+c <= a || a+c <= b) {
		fprintf(stderr,"EINVAL\n");
		exit(1);
	}	
	s = 1.0/2.0 *( a + b + c);
	
	area = sqrt(s * (s-a)*(s-b)*(s-c));
	
	printf("area = %f\n",area);
	

}

static void root(void) {
	float a,b,c;
	float disc,p,q;
	float x1,x2;
	printf("Please input:");
	scanf("%f%f%f",&a,&b,&c);
	if((b*b - 4*a*c) < 0) {
		fprintf(stderr,"EINVAL\n");
		exit(1);	
	}
	disc = b*b-4*a*c;
	p = -b/(2*a);
	q = sqrt(disc)/(2*a);
	x1 = p + q;
	x2 = p -q;
	
	printf("x1 = %f\nx2=%f\n",x1,x2);	
	
	return ;

}
int main(void) {
	//water();
	//area();
	root();
	exit(0);

}
