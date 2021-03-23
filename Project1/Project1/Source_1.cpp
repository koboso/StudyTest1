#include<iostream>

using namespace std;

void main() {
// 구구단 5단 출력하세요.
	printf("1- 9 까지 수를 입력하세요 .\n");

	int input;
	scanf_s("%d", &input);

	printf("%d * %d = %d\n", input, 1, input * 1);
	printf("%d * %d = %d\n", input, 2, input * 2);
	printf("%d * %d = %d\n", input, 3, input * 3);
	printf("%d * %d = %d\n", input, 4, input * 4);
	printf("%d * %d = %d\n", input, 5, input * 5);
	printf("%d * %d = %d\n", input, 6, input * 6);
	printf("%d * %d = %d\n", input, 7, input * 7);
	printf("%d * %d = %d\n", input, 8, input * 8);
	printf("%d * %d = %d\n", input, 9, input * 9);

	fgetc(stdin);
}