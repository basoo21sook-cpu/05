#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number;
	
	printf("���� �ϳ��� �Է��Ͻÿ�: ");
	scanf("%d", &number);
	
	if (number>0)
		printf("���밪�� %d�Դϴ�. \n",number);
	else if (number<0)
		printf("���밪�� %d�Դϴ�. \n",-number);
	
	else
	printf("���밪�� 0 �Դϴ�. \n");
		
	return 0;
}
