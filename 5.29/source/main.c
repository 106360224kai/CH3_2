#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a=0,b=0,c=0,d,e,f;
	
	printf("�п�J���:",a);
	scanf_s("%d", &a); 
	printf("�п�J���:",b);
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
			printf("�̤p�����Ƭ�:%d\n", a);
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