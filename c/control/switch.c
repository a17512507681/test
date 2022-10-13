#include <stdio.h>
#include <stdlib.h>


int main(void) {
	
	int ch  = getchar();
	

	switch(ch) {
		case 'a':
		case 'A':
		printf("Ant:a small insect that lives in group!\n");
		break;
		case 'b':
		case 'B':
		printf("Butterfly: A flying insect with a long thin body!\n");
		break;
		case 'c':
		case 'C':
		printf("Cobra: A highly dangerous snake.\n");
		break;
		case 'd':
		case 'D':
		printf("Donkey: A animal with short legs\n");
		break;
		default:
		printf("Input error!\n");
		break;

	}









#if 0
	int score;
	
	printf("Please enter:\n");
	scanf("%d",&score);
	
	if(score < 0 || score > 100) {
		fprintf(stderr,"Einval\n");
		exit(1);
	}
	
	switch(score / 10)
	{
		case 10:
		case 9:
		puts("A");
		break;
		case 8:
		puts("B");
		break;
		case 7:
		puts("C");
		break;
		case 6:
		puts("D");
		break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
		puts("E");
		break;
	default:
		break;

	}
#endif
	exit(0);

}

