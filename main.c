#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int num1, num2;   
    char op;           
    int result;       

    printf("계산을 입력하세요: ");
    scanf("%d %c %d", &num1, &op, &num2);

    if (op == '+') {
        result = num1 + num2;
    }
    else if (op == '-') {
        result = num1 - num2;
    }
    else if (op == '*') {
        result = num1 * num2;
    }
    else if (op == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            printf("0으로 나눌 수 없습니다.\n");
            return 0; 
        }
    }
    else if (op == '%') {
        if (num2 != 0) {
            result = num1 % num2;
        } else {
            printf("0으로 나눌 수 없습니다.\n");
            return 0;
        }
    }
    else {
        printf("지원하지 않는 연산자입니다.\n");
        return 0;
    }

    printf("%d %c %d = %d\n", num1, op, num2, result);

    return 0;
}
