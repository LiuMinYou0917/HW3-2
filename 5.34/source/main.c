#include <stdio.h>
#include <stdlib.h>

int power(a, b);
int main()
{
	int a, b, ans = 0;
	printf("請輸入底數 指數:");
	scanf_s("%d %d", &a, &b);

	ans = power(a, b);
	printf("power(%d,%d)=%d\n", a, b, ans);

	system("pause");
	return 0;
}

int power(int a, int b)
{
	if (b == 1)
	{
		return a;
	}
	else
	{
		return a * (power(a, b - 1));
	}

}