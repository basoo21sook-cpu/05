#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int count = 0;   
    int c;            
    
    printf("문자열을 입력하세요 : ");

    while ((c = getchar()) != '\n') {   
        if (c >= '0' && c <= '9')       
            count++;                   
    }

    printf("입력한 숫자 문자의 개수는 %d개입니다.\n", count);

	return 0;
}
