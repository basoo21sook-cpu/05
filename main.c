#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
 int n;      // ����� �Է°�
    int sum = 0;  // �հ踦 ���� (0���� �ʱ�ȭ)
    int i;      // �ݺ������� ����� ����

    printf("������ �Է��ϼ���: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;       // sum = sum + i �� ����
    }

    printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);

    return 0;
}
