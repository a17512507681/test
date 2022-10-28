#include <stdio.h>

#include <stdlib.h>

//#define STATE_RUNNING 1
enum day {
	MON = 1,
	TUS,
	THR,
	WES,
	FRI = 1,
	SAT,
	SUN

};

enum {
	STATE_RUNNING = 1,
        STATE_CANCELED,   // canceled 
	STATE_OVER	


};

struct job_st {
	int id,
    	int state,
	time_t start,end;	

};
int main(void) {
	struct job_st job1;

	job1.state = STATE_OVER;

/**  获取任务状态   **/
	switch(job1.state)
	{
		case STATE_RUNNING:
			break;
		case STATE_CANCELED:
			break;
		case STATE_OVER:
			break;	
		default:
			abort();   // 发送信号杀死进程
	
	
	
	}







#if 0	
	enum day a = FRI;
	
	a = SUN;

	printf("%d\n",a);

#endif 
	



	exit(0);
}
