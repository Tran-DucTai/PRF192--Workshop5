#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int intRandom(int min, int max){
	return(min+rand() % (max-min+1));
}

int main(){
	srand(time(NULL));
	int total, x, y, count;
	printf("Ball Lottery");
	printf("\n");
	do{
		printf("Total sought: ");
		fflush(stdin);
		scanf("%d", &total);
		if(total!=1 || total <2 || total>20)
		printf("Total must be an integer in range [2.20] only!!!\n");
	}
	while(total<2||total>12);
	count=0;
	do{
		x=intRandom(1,10);
		y=intRandom(1,10);
		printf("Result of picks %d & %d: %d + %d\n", count++, ++count, x, y);
		}
		while(x+y!=total);
		printf("You got your total in %d picks!", count);
		return 0;
	}

