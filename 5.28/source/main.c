#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a;
	

	printf("輸入一個英文字母，若為大寫則轉為小寫，反之:%c");
	scanf_s("%c", &a);
	if (a <= 96)
		a = a + 32;
	else
		a = a - 32;
	printf("ANS:%c\n", a);
	system("pause");


	system("pause");

}