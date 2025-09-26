#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer=59;
	int guess;
	int count = 0;
	
	printf("숫자 맞추기게임! \n");
	printf("1부터 100 사이 숫자 맞춰보세요. \n");
	

	do {
		printf("숫자를 입력하세요:");
		scanf("%d", &guess);
		count++;
		
		if ( guess> answer) {
			printf("더 작은 수를 입력하세요\n ");
		}	
		else if ( guess< answer ){
			printf("더 큰 수를 입력하세요\n");
		}
	}
	while ( guess != answer );
	
	printf("정답입니다. %d번 만에 맞추셨어요.", count);
		
	return 0;
}
