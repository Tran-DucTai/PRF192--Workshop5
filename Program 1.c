#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int intRandom(int min, int max){
	int random = 1+rand()%6;
	return random;
}

int main(){
	srand(time(NULL));
	int total, x, y, count;
	printf("Dice Thrower");
	printf("\n");
	do{
		printf("Total sought: ");
		fflush(stdin);
		scanf("%d", &total);
		if(total!=1 || total <2 || total>12)
		printf("Total must be an integer in range [2.12] only!!!\n");
	}
	while(total<2||total>12);
	count=1;
	do{
		x=intRandom(2,6);
		y=intRandom(2,6);
		printf("Result of throw %d: %d + %d\n", ++count, x, y);
		}
		while(x+y!=total);
		printf("You got your total in %d throws!", count);
		return 0;
	}

