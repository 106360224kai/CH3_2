#include <stdio.h>
#include <stdlib.h>

int integerPower(int base,int exponet);

int main(void)
{
	int a,b,c;
	printf("請輸入二個整數:");
	scanf_s("%d %d", &a,&b);
	c = integerPower(a, b);
	printf("power(%d,%d)=%d\n", a, b,c);
	system("pause");
}

int integerPower(int base, int exponet)
{
	if (exponet >= 1)
	{
	long int d = base*integerPower(base,exponet-1);
		return d;
	}
	else
		return 1;
}
