#include <stdio.h>
#include <stdlib.h>

unsigned long long int fib();
int main()
{
	unsigned int n;
	unsigned long long int z;
	unsigned long  int x;
	unsigned int q;
	printf("块稱材N计 : ");
	scanf_s("%u", &n);

	printf("\n\n(a)材%uFibonacci计 : %llu\n\n", n, fib(n));
	printf("(b)程 Fibonacci计 : %llu\n\n", fib(UINT_MAX));
	printf("   程ボ计   : %llu\n\n", ULLONG_MAX);

	//printf("%u",n);
	//printf("%d\n", sizeof(n));
	//printf("%d\n", sizeof(z));
	//printf("%d\n", sizeof(x));
	//printf("%d\n", sizeof(q));
	system("pause");
	return 0;
}
unsigned long long int fib(unsigned int n)
{
	unsigned int i;
	unsigned long long int remind[2] = { 0,1 }, num = 0;
	for (i = 1; i < n; i++)
	{
		//num = 0;
		num = remind[0] + remind[1];
		remind[0] = remind[1];
		remind[1] = num;
		if (remind[0] > remind[1])
		{
			printf("   脄奔%u兜\n\n", i);
			break;
		}
	}
	return (remind[0]);
}