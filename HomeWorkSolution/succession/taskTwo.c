#include <locale.h>
#include<math.h>
#include<stdio.h>
int main() {
	setlocale(LC_ALL, "RUS");
	int a;
	printf("¬ведите число a: ");
	scanf_s("%d", &a);
	printf("„исло а+1: %d\n", a + 1);
	printf("„исло а+2: %d\n", a + 2);
	

	system("pause");
	return 0;
}