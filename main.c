#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
 int n;      // 사용자 입력값
    int sum = 0;  // 합계를 저장 (0으로 초기화)
    int i;      // 반복문에서 사용할 변수

    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;       // sum = sum + i 와 같음
    }

    printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);

    return 0;
}
