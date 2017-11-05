#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a=0,b=0,c=0,d,e,f;
	
	printf("請輸入整數:",a);
	scanf_s("%d", &a); 
	printf("請輸入整數:",b);
	scanf_s("%d", &b);
	if (b > a)
	{
		c = a;
		a = b;
		b = c;
		f = a;
	}
	f = a;
	for (d = 1; d <= b+1; d++)

	{
		e = a%b;

		if (e == 0)
		{
			printf("最小公倍數為:%d\n", a);
			system("pause");
			return 0;
		}
		else
		{
			a = f*d;
		}
	}
	system("pause");

	
}