#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a;
	

	printf("��J�@�ӭ^��r���A�Y���j�g�h�ର�p�g�A�Ϥ�:%c");
	scanf_s("%c", &a);
	if (a <= 96)
		a = a + 32;
	else
		a = a - 32;
	printf("ANS:%c\n", a);
	system("pause");


	system("pause");

}