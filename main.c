#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer=59;
	int guess;
	int count = 0;
	
	printf("���� ���߱����! \n");
	printf("1���� 100 ���� ���� ���纸����. \n");
	

	do {
		printf("���ڸ� �Է��ϼ���:");
		scanf("%d", &guess);
		count++;
		
		if ( guess> answer) {
			printf("�� ���� ���� �Է��ϼ���\n ");
		}	
		else if ( guess< answer ){
			printf("�� ū ���� �Է��ϼ���\n");
		}
	}
	while ( guess != answer );
	
	printf("�����Դϴ�. %d�� ���� ���߼̾��.", count);
		
	return 0;
}
