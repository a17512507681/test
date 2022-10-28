#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#if 0
struct 
{
	int i;
	char ch;
	union 
	{
		int a;
		char c;
	}un;
	float f;

};


union 
{
	int a;
	double d;
	struct 
	{
		int arr[10];
		float f;
	
	}c;

}


#endif
union    //  union中存放的空间是一致得 
{
	struct 
	{
		uint16_t i;  // 2
		uint16_t j;   // 2
			
		
	}x;
	uint32_t y; // 4


}a;
int main(void) {
	a.y = 0x11223344;
	printf("%#x\n",a.x.i);  // 3344
	printf("%#x\n",a.x.i+a.x.j);

	uint32_t i = 0x11223344;  // 0001 0001 0010 0010  + i & 0xffff
	//  0001 0001 0010 0010 0011 0011 0100 0100 & 1111 1111 1111 1111               0100   0100 0110  0110
	printf("%#x\n",(i >> 16) + i & 0xFFFF);
	

	exit(0);
}
