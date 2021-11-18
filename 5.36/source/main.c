#include <stdio.h>
#include <stdlib.h>

int moved = 0;
void hanoi(int n, int a, int b, int c);

int main()
{
	int n;

	printf("請輸入盤子的數量：");
	scanf_s("%d", &n);

	hanoi(n, 1, 2, 3);

	printf("\n%d個盤子 總共移動了%d次\n\n", n, moved);

	system("pause");
	return 0;
}

void hanoi(int n, int a, int b, int c)
{
	if (n == 1)
	{
		printf("第%d次:\t%d ---> %d\n", moved, a, c);
		moved++;
	}
	else
	{
		hanoi(n - 1, a, c, b);
		hanoi(1, a, b, c);
		hanoi(n - 1, b, a, c);
	}
}