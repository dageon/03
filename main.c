#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a, b;
	
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &a);
	printf("�и� �Է��ϼ��� : ");
	scanf("%d", &b);
	
	
	printf("�������� ����� %f �Դϴ�.\n", (float)a/b);
	
	return 0;
}
