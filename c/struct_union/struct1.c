#include <stdio.h>
#include <stdlib.h>
#define NAMESIZE 32


struct {

	int i;
	char ch;
	float f;

},a = {},b = {},c,*p,*q;


struct simp_st{
	int i;
	char ch;	// 4 / 1 
	float f;
//	char ch1;
};     //__attribute__((packed));   // 结构体不对齐
struct birthday_st {
	int year;
	int month;
	int day;	

};

struct student_st {
	int id;
	char name[NAMESIZE];  
	struct birthday_st birth; 
	int math;
	int chinese;
	

};

void func(struct simp_st *b){


	printf("%ld\n",sizeof(b));

}
int main(void) {
	
	//  TYPE NAME = VALUE;

	struct simp_st a;
	struct simp_st *p = &a;
	// addr % sizeof
	//printf("%ld",sizeof(long));	
	//printf("sizeof(point) = %ld\n",sizeof(p));	
	//printf("sizeof(struct) = %ld\n",sizeof(a));	





	//func(a);    ->    func(a.i,a.ch,a.f);
	func(p);   // func(&a);













#if 0
#if 0	
	struct simp_st a = {123,456.789,'a'};
	a.i = 112233;
	
	printf("%d %f %c\n",a.i,a.f,a.ch);	
#endif
	struct student_st stu = {10011,"Alan",{2022,10,24},98,97};
	struct student_st *p = &stu;
	struct student_st arr[2] = {{10011,"Alan",{2022,11,11},98,97}, {10012,"Join",{2021,12,12},90,80}};
	p = &arr[0];
	//struct student_st stu = {.math = 98,.chinese = 97};
	//printf("学号:%d,姓名:%s,生日:%d-%d-%d,数学成绩:%d,语文成绩:%d\n",stu.id,stu.name,stu.birth.year,stu.birth.month,stu.birth.day,stu.math,stu.chinese);
	int i;
	for(i = 0; i < 2; i++,p++) {	
		printf("学号:%d,姓名:%s,生日:%d-%d-%d,数学成绩:%d,语文成绩:%d\n",p->id,p->name,p->birth.year,p->birth.month,p->birth.day,p->math,p->chinese);
	}

#endif
	exit(0);
}
