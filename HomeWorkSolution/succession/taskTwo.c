#include <locale.h>
#include<math.h>
#include<stdio.h>
int main() {
	setlocale(LC_ALL, "RUS");
	int a;
	printf("������� ����� a: ");
	scanf_s("%d", &a);
	printf("����� �+1: %d\n", a + 1);
	printf("����� �+2: %d\n", a + 2);
	

	system("pause");
	return 0;
}