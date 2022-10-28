#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define NAMESIZE 32
// 学生数据
struct student_st {
	int id;
	char name[NAMESIZE];
	int math;
	int chinese;
};

// 将数据存到stu中
void stu_set(struct student_st *p, const struct student_st *q) {
	*p = *q;
	//strncpy(p->name,q->name,NAMESIZE);
	//p->math = 90;
	//p -> chinese = 98;

}
// 打印输出信息
void stu_show(struct student_st *p) {
	printf("学号:%d,姓名:%s,数学成绩:%d,语文成绩:%d\n",p->id,p->name,p->math,p->chinese);

}
// 更改名字
void stu_changename(struct student_st *p,const char *newname) {
	strcpy(p->name,newname);

}

void menu(void) {
	printf("\n1 set\n2 change name\n3 show\n\n");
	printf("Please enter the num:(q for quit)");
}
int main(void) {
	struct student_st stu,temp;
	char newname[NAMESIZE];
	int choice;
	int ret;
	do {
		menu();

		ret = scanf("%d",&choice);
		if(ret != 1)
			break;
		switch(choice)
		{
		case 1:
	
			printf("Please enter for the student [id name math chinese]\n");
			scanf("%d%s%d%d",&temp.id,temp.name,&temp.math,&temp.chinese);
			stu_set(&stu,&temp);
			break;



		case 2:
			printf("请输入新名字:\n");
			scanf("%s",newname);
			stu_changename(&stu,newname);
			break;
		case 3:
			stu_show(&stu);
			break;
		default:
			exit(1);
	}
	sleep(1);
}while(1);

	exit(0);
}
